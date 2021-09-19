#include "GTimer_UNO.h"
#include "utils/TimerOne.h"

GTimer *_timer;

GTimer::GTimer(){
  _timer = this;
}

void GTimer::setInterval(unsigned long interval, gtimer_cb_t fn) {
  _interval = interval;
  _fn = fn;
  Timer1.initialize(_interval*1000);
  Timer1.attachInterrupt(_fn);
}

void GTimer::del(){
  Timer1.detachInterrupt();
}

void GTimer::setOnce(unsigned long interval, gtimer_cb_t fn){
  _interval = interval;
  _fn = fn;
  Timer1.initialize(_interval*1000);
  Timer1.attachInterrupt(GTimer::_GTIMER_ONCE_CB);
}

void GTimer::_GTIMER_ONCE_CB(void){
  _timer->_fn();
  _timer->del();
}
