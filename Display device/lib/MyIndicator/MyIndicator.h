#ifndef MyIndicator_h
#define MyIndicator_h
#include <Arduino.h>



class MyIndicator{
    private:
        const int ledPinR = 7;
        const int ledPinG = 9;
        const int ledPinB = 8;
    public:
        MyIndicator();
        void setColor(int red, int green, int blue);
        void switchIndicator(int average);


};


#endif