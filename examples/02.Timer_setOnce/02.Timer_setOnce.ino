#include <GTimer_UNO.h>

GTimer timer;

void setup() {
  Serial.begin(115200); Serial.println();

  Serial.print("Start : "); Serial.println(millis());
  timer.setOnce(5000, [](){             // ตั้งเวลาทำงานครั้งเดียว
    Serial.println( "Only Once!");
    Serial.print("Stop : "); Serial.println(millis());
  });

}

void loop() {
  // put your main code here, to run repeatedly:

}

