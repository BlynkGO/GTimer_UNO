#include "GTimer_UNO.h"
#include "utils/TimerOne.h"


void GTimer::setInterval(unsigned long interval, gtimer_cb_t fn) {
  _interval = interval;
  _fn = fn;
  Timer1.initialize(_interval*1000);
  Timer1.attachInterrupt(_fn);
}

void GTimer::del(){
  Timer1.detachInterrupt();
}
