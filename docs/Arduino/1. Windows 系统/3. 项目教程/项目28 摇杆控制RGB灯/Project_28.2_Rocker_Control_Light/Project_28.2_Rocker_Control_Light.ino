//**********************************************************************************
/*  
 * 文件名  : 摇杆控制灯
 * 描述 : 通过摇杆控制RGB来点亮不同的颜色.
*/
int x_Pin = 36;   //x 引脚
int y_Pin = 39;   //y 引脚
int z_Pin = 14;   //z 引脚
int ledPins[] = {4, 0, 2};    //定义红、绿、蓝引脚
const byte chns[] = {0, 1, 2};        //定义PWM通道

void setup() {
  pinMode(x_Pin, INPUT); //x 轴. 
  pinMode(y_Pin, INPUT); //y 轴. 
  pinMode(z_Pin, INPUT_PULLUP);   //z 轴 是一个按键.
  for (int i = 0; i < 3; i++) {   //设置pwm通道，1KHz,8bit
    ledcSetup(chns[i], 1000, 8);
    ledcAttachPin(ledPins[i], chns[i]);
  }
}

//在loop()中，使用analogRead()读取X轴和Y轴的值
//和使用digitalRead()读取Z轴的值，然后显示它们.

void loop() {
  int xVal = analogRead(x_Pin);
  int yVal = analogRead(y_Pin);
  int zVal = digitalRead(z_Pin);
  if (xVal < 1000){
     ledcWrite(chns[0], 255); //普通阴极LED，高电平开启LED.
     ledcWrite(chns[1], 0);
     ledcWrite(chns[2], 0);
   }
  else if (xVal > 3000){
     ledcWrite(chns[0], 0); 
     ledcWrite(chns[1], 255);
     ledcWrite(chns[2], 0);
   }
  else if (yVal < 1000){
     ledcWrite(chns[0], 0);
     ledcWrite(chns[1], 0);
     ledcWrite(chns[2], 255);
   }
  else if (yVal > 3000){
     ledcWrite(chns[0], 255); 
     ledcWrite(chns[1], 255);
     ledcWrite(chns[2], 255);
   }
}
//**********************************************************************************
