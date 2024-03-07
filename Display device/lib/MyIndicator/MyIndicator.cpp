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
    if(average <=30){
    setColor(0, 0, 0);
    }
    else if(average > 30 && average <= 45){
    setColor(255, 0, 0);
    }
    else if(average > 45 && average <= 55){
    setColor(0, 0, 255);
    }
    else if(average > 55 && average <= 65){
    setColor(0, 255, 0);
    }
    else{
    setColor(255, 255, 255);
    }
}

