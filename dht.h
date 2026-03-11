#ifndef DHT_H
#define DHT_H

typedef struct
{
    float temperature;
    float humidity;
} DHT_Data;

void DHT_Init();
void DHT_Read(DHT_Data *data);

#endif