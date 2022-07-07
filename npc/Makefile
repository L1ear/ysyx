# all:
# 	@echo "Write this Makefile by your self."

# sim:
# 	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
# 	@echo "Write this Makefile by your self."

# include ../Makefile


TOPNAME = top
NXDC_FILES = 
INC_PATH ?=

IMG ?=
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  --trace\
				-O3 --x-assign fast --x-initial fast --noassert
VERILATOR_FLAGS += -MMD --build -cc  --trace --exe  -y ./vsrc -top $(TOPNAME)\
				-O3 --x-assign fast --x-initial fast --noassert --Mdir $(OBJ_DIR)\
				-o $(abspath $(BIN)) $(addprefix -I, $(INC_PATH))\
				$(addprefix -LDFLAGS , $(LDFLAGS))

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))


# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
#CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk


# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS)  -DTOP_NAME="\"V$(TOPNAME)\"" 
LDFLAGS += -lreadline

# rules for diff-test
DIFF_REF_SO = /home/qw/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so

run: 
	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VSRCS) $(CSRCS)
	@echo
	@echo "-- BUILD -------------------"
	$(MAKE) -j -C build/obj_dir -f Vtop.mk

	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	build/top +trace -i $(IMG)



clean:
	rm -rf $(BUILD_DIR)

.PHONY: clean run
