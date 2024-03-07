#include "MyStepper.h"

MyStepper::MyStepper(){
  stepper.zero();
}

void MyStepper::point2angle(float digit) {
  // 假设 STEPS 是电机转一圈所需的步数
  // 将角度转换为步数。这里假设电机转一圈为360度
  int stepsToMove = int(STEPS / 360.0 * digit);
  stepper.setPosition(stepsToMove);
  // 循环直到电机到达目标步数
  while (stepper.currentStep != stepper.targetStep) {
    Serial.println(stepper.currentStep);
    stepper.update();
  }
  // 为了稳定性，到达目标位置后再更新一段时间
  for (int i = 0; i < 100; i++) {
    stepper.update();
  }
}

void MyStepper::mapTempToAngle(float temp) {
  // 根据温度设置不同的角度
  if (temp <= 30) {
    point2angle(0); // 0度代表最低温度位置
  } else if (temp > 30 && temp <= 45) {
    point2angle(90); // 90度位置
  } else if (temp > 45 && temp <= 55) {
    point2angle(180); // 180度位置
  } else if (temp > 55 && temp <= 65) {
    point2angle(270); // 270度位置
  } else {
    point2angle(360); // 360度或0度，代表最高温度位置，根据需要调整
  }
}