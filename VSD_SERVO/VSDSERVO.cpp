#include "VSDSERVO.h"

VSDSERVO::VSDSERVO(int pin) {
  _servoPin = pin;
  pinMode(_servoPin, OUTPUT);
}

void VSDSERVO::moveServo(int angle) {
  // Convert angle to pulse width in microseconds
  int pulseWidth = map(angle, 0, 180, _minPulseWidth, _maxPulseWidth);

  // Generate PWM signal
  for (int i = 0; i < 50; i++) {  // Repeat the pulse 50 times to maintain position
    digitalWrite(_servoPin, HIGH);
    delayMicroseconds(pulseWidth);
    digitalWrite(_servoPin, LOW);
    delayMicroseconds(20000 - pulseWidth);  // 20ms period - pulse width
  }
}
