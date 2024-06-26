#ifndef VSDSERVO_H
#define VSDSERVO_H

#include <Arduino.h>

class VSDSERVO {
  public:
    VSDSERVO(int pin);
    void moveServo(int angle);
  
  private:
    int _servoPin;
    int _minPulseWidth = 550;  // Minimum pulse width in microseconds
    int _maxPulseWidth = 3000; // Maximum pulse width in microseconds
};

#endif
