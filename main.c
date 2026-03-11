#include <Arduino.h>
#include "dht.h"
#include "logger.h"

DHT_Data sensor;

void setup()
{
    Serial.begin(9600);
    DHT_Init();
}

void loop()
{
    DHT_Read(&sensor);
    Logger_Log(&sensor);

    delay(2000);
}