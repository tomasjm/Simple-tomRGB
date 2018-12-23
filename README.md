# Simple tomRGB Library

A simple library to control RGB leds of 4 pin for Arduino

## Installation

Clone this repository and copy it into the libraries folder of Arduino.

### Precaution

This library was tested only with Arduino Uno.

## How to use

It's super simple! You only need to inicializate a led entity with the class of tomRGB.

```
#include "tomRGB.h"
 // Class tomRGB needs 4 parameters
 // First one is to setup the type of led that you are using(cathode or anode).
 // The another ones are redPin, greenPin and bluePin respectively.
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
}
```

And repeat

```
until finished
```

End with an example of getting some data out of the system or using it for a little demo

## Running the tests

Explain how to run the automated tests for this system

### Break down into end to end tests

Explain what these tests test and why

```
Give an example
```

### And coding style tests

Explain what these tests test and why

```
Give an example
```

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Hat tip to anyone whose code was used
* Inspiration
* etc
