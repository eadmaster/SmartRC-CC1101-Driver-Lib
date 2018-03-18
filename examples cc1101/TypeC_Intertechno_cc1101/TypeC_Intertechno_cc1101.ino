/*
  Example for Intertechno outlets
  
  https://github.com/sui77/rc-switch/
  ----------------------------------------------------------
  Mod by Little Satan. Have Fun!
  ----------------------------------------------------------
*/
#include <ELECHOUSE_CC1101_RCS_DRV.h>
#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

  // set frequency - F_433, F_868, F_965 MHz
  ELECHOUSE_cc1101.Init(F_433);
 
  // Transmitter is connected to Arduino Pin #2  
  mySwitch.enableTransmit(2);

  // cc1101 set Transmit on
  ELECHOUSE_cc1101.SetTx()

  // Optional set pulse length.
  // mySwitch.setPulseLength(320);
  
}

void loop() {

  // Switch on:
  // The first parameter represents the familycode (a, b, c, ... f)
  // The second parameter represents the group number
  // The third parameter represents the device number
  // 
  // In this example it's family 'b', group #3, device #2 
  mySwitch.switchOn('b', 3, 2);

  // Wait a second
  delay(1000);
  
  // Switch off
  mySwitch.switchOff('b', 3, 2);
  
  // Wait another second
  delay(1000);
  
}
