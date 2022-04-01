#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include "sdb.h"

enum {
  TK_NOTYPE = 256, TK_EQ,TK_INT,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"\\-", '-'},         // sub
  {"==", TK_EQ},        // equal
  {"\\*", '*'},
  {"[0-9]+", TK_INT},   // decimal number
  {"\\(", '('},
  {"\\)", ')'},
  {"\\/", '/'},

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

//按预设pattern匹配token
static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
            case TK_NOTYPE :
              break;
            case '+' :
              tokens[nr_token].type = rules[i].token_type;
              nr_token ++;
              break;
            case TK_EQ :
              tokens[nr_token].type = rules[i].token_type;
              nr_token ++;
              break;
            case TK_INT:
              tokens[nr_token].type = rules[i].token_type;
              strncpy(tokens[nr_token].str, substr_start, substr_len);
              Log("get number: %d\n",atoi(tokens[nr_token].str));
              nr_token ++;
              break;
            case '(':
              tokens[nr_token].type = rules[i].token_type;
              nr_token ++;
              break;
            case ')':
              tokens[nr_token].type = rules[i].token_type;
              nr_token ++;
              break;
            case '*':
              tokens[nr_token].type = rules[i].token_type;
              nr_token ++;
              break;
            case '-' :
              tokens[nr_token].type = rules[i].token_type;
              nr_token ++;
              break;
          default: Log("error!");
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }



  return true;
}

/*递归求值函数
*参数：   p,q:  表达式在tokens数组里的起始和结束位置
*返回值:  -1：   表示未正常求得值
*        其他:  表示求得的值
*/
word_t eval(int p, int q) {
  if (p > q) {
    /* Bad expression */
    return -1;
  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    return atoi(tokens[p].str);
  }
  else if (check_parentheses(p, q) == 1) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else if (check_parentheses(p, q) == 0){
    printf("p: %d and q: %d\n",p,q);
    int op = operator_find(p,q);
    Log("op: %d\n",op);
    
    uint32_t val1 = eval(p, op - 1);
    uint32_t val2 = eval(op + 1, q);

    switch (tokens[op].type) {
      case '+':
        Log("test\n");
        return val1 + val2;
      case '-': 
        return val1 - val2;
      case '*': 
        return val1 * val2;
      case '/': 
        return val1 / val2;
      default: Log("Wrong main operation\n");assert(0);
    }
  }
  else {
    Log("Wrong expression!\n");
    assert(0);
  } 
  return -1;
}
/*括号匹配判断
*参数：   p,q:  表达式在tokens数组里的起始和结束位置
*返回值:  -1:   表示括号不匹配
*        1:    表示括号完全匹配
*        0:    表示匹配，且可以进行下一步求值
*/
int check_parentheses(int p, int q)
{
  int flag=0;
  if(tokens[p].type=='(' && tokens[q].type==')'){
    flag = 1;
    Log("flag\n");
	}
	int i,j;
  i = fun(p, q);      //  原样进行匹配检测
  j = fun(p+1, q-1);  //  去掉最外侧后再检查，看是否有最外层括号
    
    
    if (i == 1) {
    	if(flag == 1&&j== 1){
			//Log("匹配且被包围");
      return 1; 	
      }
      else{
        //Log("匹配但不被包围,可以求值\n");
        return 0;
      }
    }
    else {
        //Log("括号不匹配\n");
        return -1;
    }
    return 0;
}
//括号匹配的具体操作
int fun(int start, int end)
{
    char chLeft;        // 左括号
    char chRight;       // 右括号
    while (start <= end)
    {
        switch (tokens[start].type)
        {
        case '(':
            chLeft = tokens[start].type;
            chRight = ')';
            break;
        case ')':
            return 0;
        default:
            chLeft = '\0';
            break;
        }
        if (tokens[start].type == chLeft)
        {
            int a = 1;
            int b = 0;
            int t = start + 1;
            while (t <= end) // 搜索匹配的右括号 
            {
                if (tokens[t].type == chLeft)
                    ++a;
                if (tokens[t].type == chRight)
                    ++b;
                if (b>a)
                    return 0;
                if (a == b)      // 再对匹配括号里面的括号进行匹配 
                {
                    if (0 == fun(start + 1, t - 1)) // 递归调用 
                        return 0;
                    start = t;
                    break;
                }
                ++t;
            }
            if (a>b)
                return 0;
        }
        ++start;
    }
    return 1;
}
//返回符号优先级
int op_pir(char op)
{
  switch (op)
  {
    case '*':
    case '/': return 0;
    case '+':
    case '-': return 1;
    default: Log("error!");
  }
  return -1;
}
//搜索主运算符
int operator_find(int p,int q){
  int i,nr_p=0;
  int op=-1,pir = -1;
  for (i = p;i <= q; i++){
    if (tokens[i].type == '('){
      nr_p++;
      i++;

      while (i <= q) // 搜索匹配的右括号 
      {
        if (tokens[i].type == '(')
            ++nr_p;
        if (tokens[i].type == ')')
            --nr_p;
            
        if (nr_p == 0){
          break;
        }
        i++;
      }
    }
    if (tokens[i].type == '+' ||tokens[i].type == '-' ||tokens[i].type == '*' ||tokens[i].type == '/'){
      if (op_pir(tokens[i].type)>pir) {
        op = i;
        pir = op_pir(tokens[i].type);
      }   
    }
  }
  return op;
}

/*表达式求值，若成功求值，则返回求得的值
*参数：   e:      表达式的起始地址;
*        success:是否成功的标志位;
*返回值： 求得的值
*/
word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  // Log("nr_token: %d\n",nr_token);
  // Log("the value of expr is: %d",eval(0, nr_token-1));
  
  /* TODO: Insert codes to evaluate the expression. */
  //TODO();
  word_t value = eval(0, nr_token-1);
  Log("test\n");
  if(value==-1){
    *success = false;
    return 0;
  }
  else return value;
}