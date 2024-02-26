#include <Adafruit_NeoPixel.h>

#define LED_COUNT 44 // Now using 53 for the full count of LEDs

int ledPins1[LED_COUNT] = {
  2, 3, 4, 5, 6, 7, 8, 9,18,19,20,21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
  39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53
};

Adafruit_NeoPixel strips[LED_COUNT]; // This will create a NeoPixel object for each pin

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600); // Initialize serial communication at 9600 bits per second

  // Initialize all NeoPixel objects and turn them off
  for (int i = 0; i < LED_COUNT; i++) {
    strips[i] = Adafruit_NeoPixel(1, ledPins1[i], NEO_GRB + NEO_KHZ800);
    strips[i].begin();
    strips[i].setPixelColor(0, strips[i].Color(0, 0, 0)); // Set color to 'off'
    strips[i].show();
  }
}

void loop() {
  // Sequentially turn on each LED
  for (int i = 0; i < LED_COUNT; i++) {
    // Check if the pin is valid for NeoPixel, pins 0 and 1 are usually reserved for serial communication
    if(ledPins1[i] > 1) {
      strips[i].setPixelColor(0, strips[i].Color(250, 250, 250)); // Set to white
      strips[i].show();
      digitalWrite(13, HIGH); // Turn on the onboard LED
      Serial.print("Pin ");
      Serial.print(ledPins1[i]);
      Serial.println(" is on.");
      delay(1000); // Keep it on for half a second

      digitalWrite(13, LOW); 
      delay(4 000); 

      strips[i].setPixelColor(0, strips[i].Color(0, 0, 0)); // Turn off the LED
      strips[i].show();
      delay(2000); // Half a second delay before next
    }
  }
  delay(5000); // Wait for 5 seconds before starting the sequence again
}
