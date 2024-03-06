#include "MyStepper.h"


MyStepper::MyStepper(){
  stepper.zero();
}

void MyStepper::point2digit(float digit){
    int d=digit-curDigit;
    if (abs(d)>4){
        stepper.setPosition(int(STEPS/25*digit));
        while (stepper.currentStep != stepper.targetStep) {
        Serial.println(stepper.currentStep);
        stepper.update();
        }
        for (int i=0;i<100;i++){
            stepper.update();
        }
        curDigit=digit;
    }
    else{
        Serial.print(d);
        Serial.println("ignore...");
    }

}







