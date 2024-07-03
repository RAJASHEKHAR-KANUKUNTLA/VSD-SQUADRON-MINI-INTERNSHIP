## Table of Contents

- [VDS Squadron Mini Board Libraries for Arduino IDE](#VDSSquadronMiniBoardLibrariesforArduinoIDE)
- [Features](#features)
- [Installation of vsd Board](#Installation-of-vsd-Board)
- [Installation of Libraries](#Installation-of-Libraries)
- [Contributing](#Contributing) 

## VDS Squadron Mini Board Libraries for Arduino IDE
This repository contains libraries for simplifying the usage of I2C LCDs and servo motors with the VDS Squadron mini board. 
These libraries aim to reduce the amount of code needed to control these components, making it easier to integrate them into your projects.

## Features

- **I2C LCD Library**: Simplifies the initialization and usage of I2C-connected LCD displays.
- **Servo Motor Library**: Provides easy-to-use functions for controlling servo motors connected to the VDS Squadron mini board.
- **Example Sketches**: Includes example Arduino sketches demonstrating how to use the libraries.


## Installation of vsd Board
## Add the VSD Squadron Mini Board to the Arduino IDE

1)Open the Arduino IDE.

2)Go to File > Preferences.

3)In the "Additional Board Manager URLs" field, add the following URL


```sh
https://github.com/openwch/board_manager_files/raw/main/package_ch32v_index.json
```

4)Click OK to save your preferences.

5)Go to Tools > Board > Boards Manager.

6)Search for "WCH" and install it.

## Installation of Libraries

1)To use these libraries in your Arduino IDE.

2)Download this repository as a ZIP file.

## I2C LCD 

https://github.com/RAJASHEKHAR-KANUKUNTLA/VSD-SQUADRON-MINI-INTERNSHIP/blob/main/VSD%20LIB/VSD_MINI_I2C_LCD.zip

## SERVO MOTOR

https://github.com/RAJASHEKHAR-KANUKUNTLA/VSD-SQUADRON-MINI-INTERNSHIP/blob/main/VSD%20LIB/VSD_SERVO.zip

3)Extract the ZIP file or add the zip file libraries on Arduino IDE.

Copy the extracted folders (VSD_MINI_I2C_LCD and VSD_SERVO) into your Arduino libraries folder. 
This folder is typically located at Documents/Arduino/libraries on Windows or ~/Documents/Arduino/libraries on macOS.


## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or a pull request.



