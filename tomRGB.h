/*
 Public Library for Universidad de la Frontera
 Author: Tomás Jiménez, estudiante Ingenieria Electronica
 Version: 1.0
 Release date: 23/12/2018
 
 This is a simply library that controls in a simple way RGB LEDs.

 You need to call a instance of tomRGB using four parameters that are: type, redPin, greenPin, bluePin.
 - In the type parameter, it will receive two options: COMMON_ANODE or COMMON_CATHODE
 - In pin parameters you should use PWM exclusive pins to make the led work correctly

 ex: tomRGB led(COMMON_CATHODE, 9, 10, 11);

  Doing this things, you are almost done, to continue, set the color using the predefined ones with Color(color) or using setColor(r, g, b) function that receives values from 0 to 255.
  ex: led.Color(RED); or led.setColor(255,0,0); This two set the red color.

  Also you can tour into the color spectrum using Spectrum(speed) function, that receives a integer from 1 - 100 for speed.
  ex: led.Spectrum(100);
*/

typedef enum
{
  COMMON_CATHODE,
  COMMON_ANODE
} LED_TYPE;

typedef enum
{
  RED,
  GREEN,
  BLUE,
  PURPLE,
  YELLOW,
  WHITE,
  ORANGE,
  SKYBLUE
} LED_COLOR;

class tomRGB
{
public:
  LED_TYPE type;
  int rPin;
  int gPin;
  int bPin;
  int r;
  int g;
  int b;

  tomRGB(LED_TYPE, int, int, int);
  void setColor(int _r, int _g, int _b);
  void Color(LED_COLOR _color);
  void ledOn();
  void ledOff();
  void writeRGB();
  void Spectrum(int speed);
};
