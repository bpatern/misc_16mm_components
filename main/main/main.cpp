

#include "Arduino.h"
#include <WiFi.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>

#include <Button2.h>




#include <elapsedMillis.h>

#include <pindef.h>

#include <declarations.h>
Button2 dirSwitch, motorRunSwitch, lampSwitch;

void IRAM_ATTR onTimer() {
    dirSwitch.loop();
    motorRunSwitch.loop();
    lampSwitch.loop();
}


#include <settings.h>



extern "C" void app_main()
{
    initArduino();
    setupExtCommands();

    while(true) {
        loop();
    }

}
#include <controller.h>
#include <loops.h>


