//**********************************************************************************
/*  
 * 文件名 : 声控风扇
 * 描述 : 通过声音传感器控制风扇.
*/
#define PIN_ADC0   36  //声音传感器的引脚
#define PIN_Motorla    15  // 电机的Motor_IN+引脚
#define PIN_Motorlb    2 // 电机的Motor_IN引脚

void setup() {
  pinMode(PIN_Motorla, OUTPUT);//设置Motorla为输出
  pinMode(PIN_Motorlb, OUTPUT);//设置Motorlb为输出
  pinMode(PIN_ADC0, INPUT);//设置PIN_ADC0为INPUT
}

void loop() {
  int adcVal = analogRead(PIN_ADC0); //读取声音传感器的ADC值
  if (adcVal > 600) {
    digitalWrite(PIN_Motorla,HIGH); //旋转
    digitalWrite(PIN_Motorlb,LOW);
    delay(5000); //延时 5S
  }
  else
  {
    digitalWrite(PIN_Motorla,LOW); //停止旋转
    digitalWrite(PIN_Motorlb,LOW); 
  }
}
//**********************************************************************************
