#ifndef LED_MANAGER_H
#define LED_MANAGER_H

// Initialize all LED pins
void initLEDs();

// Called repeatedly from loop()
void controlLED();

// Turn a specific LED ON
void turnOnLED(int ledNumber);

// Turn a specific LED OFF
void turnOffLED(int ledNumber);

// Toggle a specific LED
void toggleLED(int ledNumber);

// Set LED state (HIGH or LOW)
void setLEDState(int ledNumber, bool state);

#endif