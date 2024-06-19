
/* 
 * VSD Squadron Mini Board
 * 
 * This code is developed for the VSD Squadron Mini Board.
 * 
 * Author: Rajashekar Kanukuntla
 * Position: VSD Intern
 * 
 * Description:
 * This program is designed to run on the VSD Squadron Mini Board, providing
 * the necessary functionality and features as per the project's requirements.
 * Please refer to the project documentation for detailed information on the 
 * hardware setup, system requirements, and specific functionality implemented
 * in this code.
 * 
 * Usage:
 * - Ensure the board is properly connected and configured.
 * - Compile and upload this code to the VSD Squadron Mini Board.
 * - Follow the operational guidelines provided in the project documentation.
 * 
 * Note:
 * - This code is subject to future updates and improvements. Please check for
 *   the latest version.
 */
#include <VSDI2CLCD.h>
 
VSDI2CLCD lcd(0x27); // Change the address to match your LCD

void setup() {
  lcd.init();
  lcd.setCursor(0, 0);
  lcd.print("HI,THIS IS ");
  lcd.setCursor(0, 1);
  lcd.print("VSDSQUADRON MINI"); // ADD MORE LINES 
}

void loop() {

}
