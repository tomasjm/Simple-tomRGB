#include "tomRGB.h"
 // Class tomRGB needs 4 parameters
 // First one is to setup the type of led that you are using(cathode or anode).
 // The another ones are redPin, greenPin and bluePin respectively.
 // COMMON_ANODE for the other type
tomRGB led(COMMON_CATHODE, 9, 10, 11);

void setup() {


}

void loop() {
    /*
        First you will need to setup the colors of your RGB with the function:
        setColor(r, g, b);
        Using an Anode or Cathode it does not matters, you need to use values from 0 to 255.
    */
    // This will show the green color.
    delay(1500);
    led.setColor(0,255,0);

    // To finish, you will need to light up the led using ledOn() function, also you can turn off with ledOff()
    led.ledOn();

    // There are many colors defined by default that can be applied by using Color(color) function.
    // For example: Color(RED); Color(GREEN); Color(YELLOW);
    delay(1500);
    led.Color(RED);
    delay(1500);
    led.Color(PURPLE);
    delay(1500);
    /*
        All available defined colors are:
        - RED
        - YELLOW
        - BLUE
        - GREEN
        - SKYBLUE
        - PURPLE
        - WHITE
        - ORANGE
    */
}
