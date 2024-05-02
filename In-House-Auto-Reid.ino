/*  PRIZM Controller example program
 *  This program will move the PRIZM TaskBot forward for 3 seconds, stop and end program.
 *  author PWU 08/05/2016
 */

  #include <PRIZM.h>     // include PRIZM library
  PRIZM prizm;           // instantiate a PRIZM object “prizm” so we can use its functions

// drive_time: 3100 - 1 ; 2050 - 2; 2000 - 3; 4200 - 4; 4200 - 5
// drive power_1: 50 - 1; 30 - 2; 40 - 3; 30 - 4; 40 - 5
// drive_power_2: 50 - 1: 40 - 2; 30 - 3; 40 - 4; 30 - 5

void setup() {
  // set variables for easy testing
  int drive_time = 3100;
  int drive_power_1 = 50;
  int drive_power_2 = 50;

  prizm.PrizmBegin();    // initialize PRIZM

  prizm.setMotorInvert(2,1);     // invert the direction of DC Motor 1
                                 // to harmonize the direction of opposite facing drive motors

  prizm.setMotorPowers(drive_power_1, drive_power_2);   // turn Motors 1 and 2 on at variable power
  delay(drive_time);                   // wait here for drive_time while motors are spinning
  prizm.PrizmEnd();                   // end program and reset PRIZM
}















