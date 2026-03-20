void decideDirection(int fromWhere, int direction) {

    //operate h bridge

    if (fromWhere == 0) {
        //internal, 
        if (direction == -1) {
            gpio_set_level(relay_dirPin1, 0);
            gpio_set_level(relay_dirPin2, 1);
        } else if (direction == 1) {
            gpio_set_level(relay_dirPin1, 1);
            gpio_set_level(relay_dirPin2, 0);
        }
    }

}

void decideMotorRun(int fromWhere, int run) {
    if (fromWhere == 0) {
        //internal, 
        if (run == 0) {
            gpio_set_level(relay_motor, 0);
        } else if (run == 1) {
            gpio_set_level(relay_motor, 1);
        }
    }
}

void decideLamp(int fromWhere, int on) {
    if (fromWhere == 0) {
        //internal, 
        if (on == 0) {
            gpio_set_level(relay_lamp, 0);
        } else if (on == 1) {
            gpio_set_level(relay_lamp, 1);
        }
    }
}