#include "MyIndicator.h"



MyIndicator::MyIndicator(){
    pinMode(ledPinR, OUTPUT);
    pinMode(ledPinG, OUTPUT);
    pinMode(ledPinB, OUTPUT);

}

void MyIndicator::setColor(int red, int green, int blue)
{
  analogWrite(ledPinR, red);
  analogWrite(ledPinG, green);
  analogWrite(ledPinB, blue);
}

void MyIndicator::switchIndicator(int average){
    if(average <=40){
    setColor(0, 0, 0);
    }
    else if(average > 40 && average <= 50){
    setColor(255, 0, 0);
    }
    else if(average > 50 && average <= 60){
    setColor(0, 0, 255);
    }
    else if(average > 60 && average <= 70){
    setColor(0, 255, 0);
    }
    else{
    setColor(255, 255, 255);
    }
}

