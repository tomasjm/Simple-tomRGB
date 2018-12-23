# Simple tomRGB Library

A simple library to control RGB leds of 4 pin for Arduino

## Prerequisities

You need, obviously an Arduino Uno an a simple LED RGB, it can be a common cathode or anode.

## Installation

1- Clone this repository or download it.

````
git clone https://github.com/tomasjm/Simple-tomRGB
````

2- Put this library into libraries folder of Arduino, commonly it is found in documents folder.

![Example](https://github.com/tomasjm/Simple-tomRGB/blob/master/guide/guide_1.png?raw=true)

3- Go and run the example code that is below in "How to use" section, if you see green-red-purple cycle there is all ok!


### Precaution

This library was tested only with Arduino Uno.

## How to use

It's super simple! You only need to inicializate a led entity with the class of tomRGB.

````C++
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
    led.setColor(0,255,0);

    // To finish, you will need to light up the led using ledOn() function, also you can turn off with ledOff()
    led.ledOn();

    // There are many colors defined by default that can be applied by using Color(color) function.
    // For example: Color(RED); Color(GREEN); Color(YELLOW);
    led.Color(RED);
    led.Color(PURPLE);
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
````

## Author

* **Tomás Jiménez** - *Student of Electronic Engineering* - [tomasjm](https://github.com/tomasjm)

## License

Feel free to do anything using this code... (This is in a way too simple to put license into it haha)
