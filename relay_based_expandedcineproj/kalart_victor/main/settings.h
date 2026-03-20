void setupExtCommands() {
    setupInternalControls();
    Serial.begin(115200);
}

void dirSwitchChanged(Button2 &btn) {
    if (dirSwitch.isPressed()) {
        decideDirection(0, 1);
    } else {
    decideDirection(0, -1);
    }
}

void motorRunSwitchChanged(Button2 &btn) {
    if (motorRunSwitch.isPressed()) {
        decideMotorRun(0, 1);
    } else {
    decideMotorRun(0, 0);
    }
}

void lampSwitchChanged(Button2 &btn) {
    if (dirSwitch.isPressed()) {
        decideDirection(0, 1);
    } else {
    decideDirection(0, -1);
    }
}


void setupInternalControls() {
    hw_timer_t *timer = NULL;
    dirSwitch.begin(pin_dirSwitch, INPUT_PULLUP);
    dirSwitch.setChangedHandler(dirSwitchChanged);
    if (dirSwitch.isPressed()) {
        decideDirection(0, 1);
    } else {
    decideDirection(0, -1);
    }
    
    motorRunSwitch.begin(pin_motorRunSwitch, INPUT_PULLUP);
    motorRunSwitch.setChangedHandler(motorRunSwitchChanged);
    lampSwitch.begin(pin_lampSwitch, INPUT_PULLUP);
    lampSwitch.setChangedHandler(lampSwitchChanged);



    timer = timerBegin(5000);
    timerAttachInterrupt(timer, &onTimer);
    timerAlarm(timer, 20000, true, 0);
    

}