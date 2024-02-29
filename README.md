# RTI-KSL Project

## Overview
The RTI-KSL project utilizes an Arduino Mega to conduct a Reflectance Transformation Imaging (RTI) sequence, crucial for detailed photographic analysis. This sequence involves activating each of the 44 connected LEDs in turn, capturing an image with the camera each time an LED illuminates. This process is integral for creating detailed composites of objects under varied lighting conditions, aiding in the examination and preservation of artifacts.

## Flashing the Arduino

### Requirements
- Arduino Mega 2560
- Arduino IDE installed on your computer

### Steps
1. Connect the Arduino Mega 2560 to your computer using a USB cable.
2. Open the Arduino IDE and load the provided `.ino` file.
3. Select the correct board type (Arduino Mega or Mega 2560) and the port your Arduino is connected to in the Tools menu.
4. Click on the Upload button to flash the code onto the Arduino Mega.

## Setup and Operation

### Assembly
For detailed assembly instructions of the RTI dome and the setup of the LED lighting system, please refer to the [RTI Google Site]([<insert-link-here>](https://sites.google.com/case.edu/rtiksl/home)).

### Usage
Once assembled, the system will sequentially turn on each LED, allowing the connected camera to capture images with varying shadows and highlights. Ensure that the camera is properly synchronized with the Arduino to capture images when each LED is illuminated.

### Notes
- Ensure all connections are secure to prevent any disruptions during the imaging sequence.
- Handle the dome carefully to avoid dislodging any cables or components.

## Support
For troubleshooting and further assistance, please refer to the FAQ section on the [RTI Google Site](https://sites.google.com/case.edu/rtiksl/home), or contact the project developper [Omar Loudghiri](mailto:oxl51@case.edu) or Supervior [Andrew Manduso](mailto:axm1195@case.edu).



