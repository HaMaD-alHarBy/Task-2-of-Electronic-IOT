// C++ code
//
#include <Servo.h>

Servo myservo1;  // create servo objects to control servos
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;

int pos = 0;    // variable to store the servo position

void setup() {
  myservo1.attach(9); // attaches the servo on pin 9 to the servo object
  myservo2.attach(8);
  myservo3.attach(7);
  myservo4.attach(6);
  myservo5.attach(5);
  myservo6.attach(4); 
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    myservo5.write(pos);
    myservo6.write(pos);              
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    myservo5.write(pos);
    myservo6.write(pos);              
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}