// #include <stdio.h>
#include "Arduino.h"

#include <Button2.h>
#include <elapsedMillis.h>

#include <settings.h>
#include <declarations.h>



extern "C" void app_main()
{
    initArduino();
    setupExtCommands();

    while(true) {
        loop();
    }

}

void loop() {

}