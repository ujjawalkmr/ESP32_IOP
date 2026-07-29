#include "led_manager.h"
#include <Arduino.h>

// LED Pins
const int LED_PINS[5] = {2, 4, 5, 18, 19};
enum LEDMode
{
    OFF,
    ON,
    BLINK
};

LEDMode ledMode = OFF;

void initLEDs()
{
    for (int i = 0; i < 5; i++)
    {
        pinMode(LED_PINS[i], OUTPUT);
        digitalWrite(LED_PINS[i], LOW);
    }
}
void controlLED()
{
     switch (ledMode)
    {
        case OFF:
            turnOffLED(1);
            break;

        case ON:
            turnOnLED(1);
            break;

        case BLINK:
            turnOnLED(1);
            delay(1000);
            turnOffLED(1);
            delay(1000);
            break;
    }
    //  // Turn ON LED 1
    // turnOnLED(1);
    // delay(1000);

    // // Turn OFF LED 1
    // turnOffLED(1);
    // delay(1000);
}
void turnOnLED(int ledNumber)
{
    if (ledNumber >= 1 && ledNumber <= 5)
    {
        digitalWrite(LED_PINS[ledNumber - 1], HIGH);
    }
}

void turnOffLED(int ledNumber)
{
    if (ledNumber >= 1 && ledNumber <= 5)
    {
        digitalWrite(LED_PINS[ledNumber - 1], LOW);
    }
}

void toggleLED(int ledNumber)
{
    if (ledNumber >= 1 && ledNumber <= 5)
    {
        digitalWrite(
            LED_PINS[ledNumber - 1],
            !digitalRead(LED_PINS[ledNumber - 1])
        );
    }
}

void setLEDState(int ledNumber, bool state)
{
    if (ledNumber >= 1 && ledNumber <= 5)
    {
        digitalWrite(LED_PINS[ledNumber - 1], state);
    }
}