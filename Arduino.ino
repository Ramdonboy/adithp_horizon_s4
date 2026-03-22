#include <Servo.h>

Servo myServo;

int potPin = A0;
int ledPin = 7;
int servoPin = 9;

int potValue;
int angle;

void setup() {
  myServo.attach(servoPin);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); 
}

void loop() {

  potValue = analogRead(potPin);

  
  angle = map(potValue, 0, 1023, 0, 180);

 
  if (angle > 68) {
    myServo.write(68);
    digitalWrite(ledPin, HIGH);
  } else {
    myServo.write(angle);
    digitalWrite(ledPin, LOW);
  }

  Serial.println(angle); 

  delay(10);
}
