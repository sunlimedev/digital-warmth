#include <Adafruit_PWMServoDriver.h>
#include <Wire.h>

// create board global references
Adafruit_PWMServoDriver pwm0 = Adafruit_PWMServoDriver(0x40, Wire);
Adafruit_PWMServoDriver pwm1 = Adafruit_PWMServoDriver(0x41, Wire);
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x42, Wire);
Adafruit_PWMServoDriver pwm3 = Adafruit_PWMServoDriver(0x43, Wire);

void setup()
{
  // start serial interfaces at given rate
  Serial.begin(9600);
  Serial.println("starting...")

  // start pwm0 board with 1000MHz frequency
  pwm0.begin();
  pwm0.setPWMFreq(1000);

  // start pwm1 board with 1000MHz frequency
  pwm1.begin();
  pwm1.setPWMFreq(1000);

  // start pwm2 board with 1000MHz frequency
  pwm2.begin();
  pwm2.setPWMFreq(1000);

  // start pwm3 board with 1000MHz frequency
  pwm3.begin();
  pwm3.setPWMFreq(1000);

  // set pin for off/on switch
  pinMode(3, INPUT);

  // set pin for control switch
  pinMode(5, INPUT);
}

void loop()
{
  // code here
}
