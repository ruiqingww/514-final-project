#ifndef MyStepper_h
#define MyStepper_h
#include <SwitecX25.h>

// Define the stepper motor connections and motor interface type
#define motorPin1  1     // IN1 on the ULN2003 driver
#define motorPin2  2     // IN2 on the ULN2003 driver
#define motorPin3  3    // IN3 on the ULN2003 driver
#define motorPin4  4    // IN4 on the ULN2003 driver
#define motorInterfaceType 8
#define MOTORSTEP 315


class  MyStepper{
    private:
        SwitecX25 stepper=SwitecX25(MOTORSTEP, motorPin1, motorPin2, motorPin3, motorPin4);
        float STEPS=MOTORSTEP;
        float curDigit=0;
        float scale=2000/100;
    
    public:
        MyStepper();
        void point2angle(float digit);
        void mapTempToAngle(float temp);
        
};

#endif
