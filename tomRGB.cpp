#include "arduino.h"
#include "tomRgb.h"

tomRGB::tomRGB(LED_TYPE _type, int _rPin, int _gPin, int _bPin)
{
    type = _type;
    rPin = _rPin;
    gPin = _gPin;
    bPin = _bPin;
}

void tomRGB::setColor(int _r, int _g, int _b)
{
    r = _r;
    g = _g;
    b = _b;
}
void tomRGB::ledOn()
{
    if (type == COMMON_CATHODE)
    {
        analogWrite(rPin, 255 - r);
        analogWrite(gPin, 255 - g);
        analogWrite(bPin, 255 - b);
    }
    else
    {
        analogWrite(rPin, r);
        analogWrite(gPin, g);
        analogWrite(bPin, b);
    }
}
void tomRGB::ledOff()
{

    if (type == COMMON_CATHODE)
    {
        analogWrite(rPin, 255);
        analogWrite(gPin, 255);
        analogWrite(bPin, 255);
    }
    else
    {
        analogWrite(rPin, 0);
        analogWrite(gPin, 0);
        analogWrite(bPin, 0);
    }
}

void tomRGB::writeRGB()
{
    if (type == COMMON_CATHODE)
    {
        analogWrite(rPin, 255 - r);
        analogWrite(gPin, 255 - g);
        analogWrite(bPin, 255 - b);
    }
    else
    {
        analogWrite(rPin, r);
        analogWrite(gPin, g);
        analogWrite(bPin, b);
    }
}

void tomRGB::Color(LED_COLOR _color)
{
    if (_color == RED)
    {
        r = 255;
        g = 0;
        b = 0;
    }
    if (_color == GREEN)
    {
        r = 0;
        g = 255;
        b = 0;
    }
    if (_color == BLUE)
    {
        r = 0;
        g = 0;
        b = 255;
    }
    if (_color == PURPLE)
    {
        r = 200;
        g = 0;
        b = 200;
    }
    if (_color == YELLOW)
    {
        r = 200;
        g = 200;
        b = 0;
    }
    if (_color == SKYBLUE)
    {
        r = 0;
        g = 200;
        b = 255;
    }
    if (_color == WHITE)
    {
        r = 255;
        g = 255;
        b = 255;
    }
    if (_color == ORANGE)
    {
        r = 255;
        g = 75;
        b = 0;
    }
    writeRGB();
}
