# GTimer_UNO
 Easy GTimer for UNO/MEGA

## Example

```cpp
#include <GTimer_UNO.h>

GTimer timer;

int c = 0;
void setup() {
  Serial.begin(115200); Serial.println();

  timer.setInterval(1000, [](){
    Serial.println( c++);
    //timer.del();  // หากต้องการทำงานรอบเดียว ให้เพิ่มบรรทัดนี้
  });
}

void loop() {
  // put your main code here, to run repeatedly:

}
```
