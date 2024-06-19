#include "VSDI2CLCD.h"

#define LCD_BACKLIGHT 0x08
#define LCD_ENABLE 0x04
#define LCD_COMMAND 0x00
#define LCD_DATA 0x01

VSDI2CLCD::VSDI2CLCD(uint8_t address) {
    _address = address;
}

void VSDI2CLCD::send(uint8_t value, uint8_t mode) {
    Wire.beginTransmission(_address);
    Wire.write(value | mode | LCD_BACKLIGHT);
    Wire.endTransmission();
    delayMicroseconds(50);
}

void VSDI2CLCD::sendNibble(uint8_t nibble, uint8_t mode) {
    nibble <<= 4;
    send(nibble | LCD_ENABLE, mode);
    send(nibble & ~LCD_ENABLE, mode);
}

void VSDI2CLCD::sendByte(uint8_t value, uint8_t mode) {
    sendNibble(value >> 4, mode);
    sendNibble(value & 0x0F, mode);
}

void VSDI2CLCD::command(uint8_t command) {
    sendByte(command, LCD_COMMAND);
}

void VSDI2CLCD::data(uint8_t data) {
    sendByte(data, LCD_DATA);
}

void VSDI2CLCD::init() {
    Wire.begin();
    delay(50);

    // Initializing sequence
    sendNibble(0x03, LCD_COMMAND);
    delay(5);
    sendNibble(0x03, LCD_COMMAND);
    delayMicroseconds(100);
    sendNibble(0x03, LCD_COMMAND);
    delayMicroseconds(100);
    sendNibble(0x02, LCD_COMMAND);

    // Function set
    command(0x28); // 4-bit mode, 2 lines, 5x8 dots
    command(0x08); // Display off, cursor off, blink off
    command(0x01); // Clear display
    delay(2);
    command(0x06); // Entry mode set: increment mode, no shift
    command(0x0C); // Display on, cursor off, blink off
}

void VSDI2CLCD::setCursor(uint8_t col, uint8_t row) {
    uint8_t row_offsets[] = {0x00, 0x40, 0x14, 0x54};
    command(0x80 | (col + row_offsets[row]));
}

void VSDI2CLCD::print(const char* str) {
    while (*str) {
        data(*str++);
    }
}

void VSDI2CLCD::clear() {
    command(0x01); // Clear display
    delay(2); // Delay for the clear command
}
