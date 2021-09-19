#include <GTimer_UNO.h>

GTimer timer;

int c = 0;
void setup() {
  Serial.begin(115200); Serial.println();

  timer.setInterval(1000, [](){		// ตั้งเวลาทำงานทุกๆ 1 วินาที
    Serial.println( c++);
  });
}

void loop() {
  // put your main code here, to run repeatedly:

}

