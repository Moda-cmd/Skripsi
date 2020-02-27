#include <Arduino.h>

int SENSOR_PIN = 0; // center pin of the potentiometer
int RPWM_Output = 5; // Arduino PWM output pin 5; connect to IBT-2 pin 1 (RPWM)
int LPWM_Output = 6; // Arduino PWM output pin 6; connect to IBT-2 pin 2 (LPWM)

void setup()
{ 
pinMode(RPWM_Output, OUTPUT); 
pinMode(LPWM_Output, OUTPUT);
 }

void loop() {
    int sensorValue = analogRead(SENSOR_PIN); 
    //  sensor value is in the range 0 to 1023 
    //  the lower half of it we use for reverse rotation; the upper half for forward

    rotation if (sensorValue < 512) 
    { // reverse rotation 
    int reversePWM = -(sensorValue - 511) / 2; analogWrite(LPWM_Output, 0);
     analogWrite(RPWM_Output, reversePWM); 
     } else { // forward rotation 
     nt forwardPWM = (sensorValue - 512) / 2; analogWrite(LPWM_Output, forwardPWM); 
     analogWrite(RPWM_Output, 0); }

}

