#include <am.h>

static inline uint64_t ind(uintptr_t addr) { return *(volatile uint64_t *)addr; }

#define RTC_ADDR 0xa0000048
static uint32_t origin_time;

void __am_timer_init() {
  origin_time = ind(RTC_ADDR);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = (ind(RTC_ADDR) - origin_time + 500);
  // uptime->us = 0;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
