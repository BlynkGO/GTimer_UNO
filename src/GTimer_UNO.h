#ifndef __BLYNKGO_GTIMER_UNO_H__
#define __BLYNKGO_GTIMER_UNO_H__

#include <Arduino.h>

typedef void(*gtimer_cb_t)(void);

class GTimer {
  public:
    GTimer();
    void setInterval(unsigned long interval, gtimer_cb_t fn);
    void setOnce(unsigned long interval, gtimer_cb_t fn);
    void del();

    static void _GTIMER_ONCE_CB(void);
    gtimer_cb_t _fn=NULL; 
  private:
    unsigned long _interval;
};

#endif //__BLYNKGO_GTIMER_UNO_H__
