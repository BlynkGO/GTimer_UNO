#ifndef __BLYNKGO_GTIMER_UNO_H__
#define __BLYNKGO_GTIMER_UNO_H__

#include <Arduino.h>

typedef void(*gtimer_cb_t)(void);

class GTimer {
  public:
    GTimer() {}
    void setInterval(unsigned long interval, gtimer_cb_t fn);
    void del();
  private:
    unsigned long _interval;
    gtimer_cb_t _fn=NULL; 
};

#endif //__BLYNKGO_GTIMER_UNO_H__
