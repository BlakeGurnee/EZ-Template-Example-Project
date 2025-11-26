#include "main.h"

void redRightMain() {
  // Your auton code here :)
  chassis.pid_drive_set(32_in, 110);
  chassis.pid_wait();
  chassis.pid_turn_set(90_deg, 90);
  chassis.pid_wait();
  chassis.pid_drive_set(5_in, 110);
  chassis.pid_wait();
  lowerIntake.move(127);
  pros::delay(500);
  chassis.pid_drive_set(-30_in, 200);
  chassis.pid_wait();
  setIntake(127);
}
