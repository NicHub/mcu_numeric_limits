/**
 * mcu_numeric_limits
 */

#include <Arduino.h>
#include <limits.h>
#include <float.h>
#if !defined ESP8266
#include <serial_print_64.h>
#endif
#include <main.h>
#include <mcu_numeric_limits.h>

void setup()
{
    setupSerial();
    min_max_values_integers();
    min_max_values_float();
}

void loop()
{
    yield();
}
