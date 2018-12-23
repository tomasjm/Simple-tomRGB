#include "tomRGB.h"
 // Class tomRGB needs 4 parameters
 // First one is to setup the type of led that you are using(cathode or anode).
 // The another ones are redPin, greenPin and bluePin respectively.
 // COMMON_ANODE for the other type
tomRGB led(COMMON_CATHODE, 9, 10, 11);

void setup() {


}

void loop() {
    // parameter is a integer speed from 1 to 100
   led.Spectrum(100);
}
