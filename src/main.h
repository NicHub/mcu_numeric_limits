/**
 * main.h
 */

#pragma once

/**
 *
 */
void printCompilationDateAndTime()
{
    Serial.println(F("\n\n\n# MCU MIN MAX\n"));
    Serial.print(F("FILE NAME:        "));
    Serial.println(__FILE__);
    Serial.print(F("PIO PROJECT PATH: "));
    Serial.println(PIO_PROJECT_PATH);
    Serial.print(F("COMPILATION DATE: "));
    Serial.println(COMPILATION_DATE);
    Serial.print(F("COMPILATION TIME: "));
    Serial.println(COMPILATION_TIME);
    Serial.print(F("PYTHON VERSION:   "));
    Serial.println(PYTHON_VERSION);
    Serial.print(F("PYTHON PATH:      "));
    Serial.println(PYTHON_PATH);
    Serial.println("");
}

/**
 *
 */
void setupSerial()
{
    Serial.begin(BAUD_RATE);
    printCompilationDateAndTime();
    Serial.flush();
}
