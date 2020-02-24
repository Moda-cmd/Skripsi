#include <Arduino.h>
#include <ServoLight.h> 

Servo myservo(9);  // create servo object to control a servo 


void setup() {
  pinMode(onboard, OUTPUT);
}

void loop() {
 { 
  for(pos = 20; pos < 240; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 240; pos>=20; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
} 

}