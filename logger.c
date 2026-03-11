#include "logger.h"
#include <Arduino.h>

void Logger_Log(DHT_Data *data)
{
    unsigned long seconds = millis() / 1000;

    int hrs = seconds / 3600;
    int mins = (seconds % 3600) / 60;
    int secs = seconds % 60;

    Serial.print("[");
    Serial.print(hrs);
    Serial.print(":");
    Serial.print(mins);
    Serial.print(":");
    Serial.print(secs);
    Serial.print("] ");

    Serial.print("Temp: ");
    Serial.print(data->temperature);
    Serial.print(" C ");

    Serial.print("Humidity: ");
    Serial.print(data->humidity);
    Serial.println(" %");
}