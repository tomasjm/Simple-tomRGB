

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
