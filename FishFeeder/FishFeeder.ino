#include <Servo.h>
Servo myservo;

int controlPin = 14;
int pos = 0;
void setup() {
  myservo.attach(controlPin);
  myservo.write(0);
} 

void loop() {
  if
  feedingTime();
  delay(10000);
}

void feedingTime() {
  for(pos = 0; pos < 180; pos += 1) {
    myservo.write(pos);             
    delay(5);                      
  }
 delay(1000);
  for(pos = 180; pos>=1; pos-=1) {   // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(5);                       // waits 15ms for the servo to reach the position
  }
}

