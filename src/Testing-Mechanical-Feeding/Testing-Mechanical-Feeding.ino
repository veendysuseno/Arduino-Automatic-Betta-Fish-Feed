#include <Servo.h>
Servo mechanic;

void setup() {
  mechanic.attach(4);
  mechanic.write(0);
}

void loop() {
  delay(20000);
  mechanic.write(150);
  delay(100);
  mechanic.write(0);
  delay(100);
  mechanic.write(150);
  delay(100);
  mechanic.write(0);
  delay(100);
}
