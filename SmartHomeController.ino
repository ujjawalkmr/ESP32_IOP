#include "led_manager.h"

void setup()
{
  Serial.begin(115200);

    Serial.println("Connecting to WiFi...");
    // setupWiFi();

    // setupBluetooth();

    // setupMQTT();

    // setupFirebase();


    initLEDs();
}

void loop()
{
    // mqttLoop();

    // checkBluetooth();

    // readSensors();

    // updateFirebase();

     controlLED();
}







// void setup()
// {
//     Serial.begin(115200);
//     delay(2000);

//     Serial.println("ESP32 Started");
// }

// void loop()
// {
//     // Serial.println("Running...");
//     // delay(1000);
// }