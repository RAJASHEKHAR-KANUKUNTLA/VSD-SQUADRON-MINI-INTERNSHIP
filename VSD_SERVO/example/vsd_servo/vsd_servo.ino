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
 
#include "VSDSERVO.h"
VSDSERVO myServo(D2);  // Create a servo object on pin PC0 VSD Squadron Mini Board
void setup() {
  // No need to set pinMode here, it’s done in the constructor
}
void loop() {
  // Move the servo to 0 degrees
  myServo.moveServo(0);
  delay(1000); 
  myServo.moveServo(180);
  delay(1000);  // Wait for 1 second
  // Move the servo to 90 degrees 
}
