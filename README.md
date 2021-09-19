# GTimer_UNO
 Easy GTimer for UNO/MEGA

## Example
### ตัวอย่างตั้งเวลาทำงานเป็นช่วงๆ

```cpp
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
```

### ตัวอย่างตั้งเวลาทำงานเพียงครั้งเดียว

```cpp
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
```
