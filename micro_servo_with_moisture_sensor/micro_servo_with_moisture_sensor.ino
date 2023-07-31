// C++ code
//
#include <Adafruit_LiquidCrystal.h>

#include <Servo.h>

int i = 0;

int j = 0;

Adafruit_LiquidCrystal lcd_1(0);

Servo servo_7;

void setup()
{
  lcd_1.begin(16, 2);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  servo_7.attach(7, 500, 2500);
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) < 20) {
    servo_7.write(90);
  } else {
    servo_7.write(0);
  }
  delay(10); // Delay a little bit to improve simulation performance
}