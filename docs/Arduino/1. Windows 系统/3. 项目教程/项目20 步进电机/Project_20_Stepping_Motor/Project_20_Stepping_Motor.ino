//**********************************************************************
/*
 * 文件名 : 步进电机
 * 描述 : 采用ULN2003驱动步进电机.
*/
// 连接步进电机驱动器接口
int outPorts[] = {15, 16, 17, 18};

void setup() {
  // 设置引脚输出
  for (int i = 0; i < 4; i++) {
    pinMode(outPorts[i], OUTPUT);
  }
}

void loop()
{
  // 转一整圈
  moveSteps(true, 32 * 64, 3);
  delay(1000);
  // 向另一个方向旋转一整圈
  moveSteps(false, 32 * 64, 3);
  delay(1000);
}

//建议:ms在3 ~ 20之间时，电机转动准确
void moveSteps(bool dir, int steps, byte ms) {
  for (unsigned long i = 0; i < steps; i++) {
    moveOneStep(dir); // 旋转一步
    delay(constrain(ms,3,20));        // 控制速度
  }
}

void moveOneStep(bool dir) {
  // 定义一个变量，用四个低位表示端口状态
  static byte out = 0x01;
  // 根据旋转方向确定换挡方向
  if (dir) {  // 环形左移
    out != 0x08 ? out = out << 1 : out = 0x01;
  }
  else {      // 环形右移
    out != 0x01 ? out = out >> 1 : out = 0x08;
  }
  // 输出信号到每个端口
  for (int i = 0; i < 4; i++) {
    digitalWrite(outPorts[i], (out & (0x01 << i)) ? HIGH : LOW);
  }
}

void moveAround(bool dir, int turns, byte ms){
  for(int i=0;i<turns;i++)
    moveSteps(dir,32*64,ms);
}
void moveAngle(bool dir, int angle, byte ms){
  moveSteps(dir,(angle*32*64/360),ms);
}
//********************************************************************************
