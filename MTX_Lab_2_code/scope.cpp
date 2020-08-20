/* This file contains the functions used by the Arduino to act as a scope, using
pins A0 and A1

20.08.20
C Jones
*/

#include <Arduino.h>
#include "scope.h"

void init_scope(void)
{
    Serial.begin(9600);
}

void oscilloscope(uint16_t sampling_freq)
{
    static uint32_t previousTime;
    const uint32_t currentTime = millis();

    const uint32_t time_delay = (1000 / sampling_freq)

    if(currentTime - previousTime >= time_delay)
    {
        uint16_t raw = analogRead(rawPin);
        uint16_t filtered =  analogRead(rawPin);

        Serial.print(raw);
        Serial.print(",");
        Serial.println(filtered);

        previousTime = currentTime
    }
}