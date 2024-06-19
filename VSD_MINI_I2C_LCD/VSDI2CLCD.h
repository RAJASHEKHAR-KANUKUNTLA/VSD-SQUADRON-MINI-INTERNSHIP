#ifndef VSDI2CLCD_H
#define VSDI2CLCD_H

#include <Arduino.h>
#include <Wire.h>

class VSDI2CLCD {
public:
    VSDI2CLCD(uint8_t address);
    void init();
    void setCursor(uint8_t col, uint8_t row);
    void print(const char* str);
    void clear();

private:
    uint8_t _address;
    void send(uint8_t value, uint8_t mode);
    void sendNibble(uint8_t nibble, uint8_t mode);
    void sendByte(uint8_t value, uint8_t mode);
    void command(uint8_t command);
    void data(uint8_t data);
};

#endif
