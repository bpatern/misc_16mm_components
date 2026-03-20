void loop();
void setupExtCommands();
void setupInternalControls();

void dirSwitchChanged(Button2 &btn);
void motorRunSwitchChanged(Button2 &btn);
void lampSwitchChanged(Button2 &btn);

void decideDirection(int fromWhere, int direction);
void decideMotorRun(int fromWhere, int run);
void decideLamp(int fromWhere, int on);