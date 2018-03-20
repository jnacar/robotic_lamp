#include <Servo.h>

Servo leftThigh;  // create servo object to control a servo
Servo rightThigh;
Servo leftFoot;
Servo rightFoot;

int pos = 0;  // analog pin used to connect the potentiometer
int flag = 0;

void setup() {
  leftThigh.attach(5);  // attaches the servo on pin to the servo object
  rightThigh.attach(6);
  leftFoot.attach(9);
  rightFoot.attach(10);
  leftThigh.write(90);
  delay(1000);
  rightThigh.write(90);
  delay(1000); 
  leftFoot.write(90);
  delay(1000);
  rightFoot.write(90);
  delay(1000);


}

void loop() {
  if (flag == 0) {
    delay(10000);
    for (pos = 90; pos <= 110; pos += 1) { // goes from 45 degrees to 135 degrees
    // in steps of 1 degree
    leftFoot.write(pos);              // tell servo to go to position in variable 'pos'
    rightFoot.write(pos);
    delay(40);  
    }
    delay(1000);
  
    for (pos = 90; pos <= 135; pos += 1) { // goes from 45 degrees to 135 degrees
    // in steps of 1 degree
    leftThigh.write(pos);              // tell servo to go to position in variable 'pos'
    rightThigh.write(pos);
    delay(40);                       // waits 15ms for the servo to reach the position
    }
    flag = 1;
    delay(1000);
  }

  delay(1000);
  for (pos = 90; pos <= 130; pos += 1) { // goes from 45 degrees to 135 degrees
    // in steps of 1 degree
    leftFoot.write(200 - pos);              // tell servo to go to position in variable 'pos'
    rightFoot.write(200 - pos);
    delay(40);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 90; pos <= 180; pos += 1) { // goes from 45 degrees to 135 degrees
    // in steps of 1 degree
    leftThigh.write(225 - pos);              // tell servo to go to position in variable 'pos'
    rightThigh.write(225 - pos);
    delay(40);                       // waits 15ms for the servo to reach the position
  }
  delay(1000);
  for (pos = 90; pos <= 130; pos += 1) { // goes from 45 degrees to 135 degrees
    // in steps of 1 degree
    leftFoot.write(pos - 20);              // tell servo to go to position in variable 'pos'
    rightFoot.write(pos - 20);
    delay(40);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 90; pos <= 180; pos += 1) { // goes from 45 degrees to 135 degrees
    // in steps of 1 degree
    leftThigh.write(pos - 45);              // tell servo to go to position in variable 'pos'
    rightThigh.write(pos - 45);
    delay(40);                       // waits 15ms for the servo to reach the position
  }
  

}
