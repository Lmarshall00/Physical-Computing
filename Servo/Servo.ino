#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int i = 0;
bool flip = true;
void setup() {
  myservo.attach(9,600,2300);  // (pin, min, max)
}

void loop() {

  if (flip == true)
  {
    if (i <= 180){
    
    myservo.write(i);  // tell servo to go to a particular angle
   delay(10);
    i++;
    }
    else {
      flip = false;
    }

  }

  
  else if (flip == false)
  {
    if (i >= 0){
    
    myservo.write(i);  // tell servo to go to a particular angle
   delay(10);
    i--;
    }
    else {
      flip = true;
    }

  }

  
}