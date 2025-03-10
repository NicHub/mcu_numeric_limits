/**
 * main.h
 */

#pragma once

void printSplashScreen()
{
    Serial.println("\n\n##########################");
    Serial.print(F("# PROJECT PATH:     "));
    Serial.println(PROJECT_PATH);
    Serial.print(F("# COMPILATION DATE: "));
    Serial.println(COMPILATION_DATE);
    Serial.print(F("# COMPILATION TIME: "));
    Serial.println(COMPILATION_TIME);
    Serial.print(F("# F_CPU:            "));
    Serial.println(F_CPU);
    Serial.print(F("# LAST_COMMIT_ID:   "));
    Serial.println(LAST_COMMIT_ID);
    Serial.println("##########################\n\n");
}

void setupSerial()
{
    Serial.begin(BAUD_RATE);
    delay(2000);
    Serial.print("\n\n\n");
    Serial.flush();
    printSplashScreen();
}
