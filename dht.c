#include "dht.h"
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void DHT_Init()
{
    dht.begin();
}

void DHT_Read(DHT_Data *data)
{
    data->humidity = dht.readHumidity();
    data->temperature = dht.readTemperature();
}