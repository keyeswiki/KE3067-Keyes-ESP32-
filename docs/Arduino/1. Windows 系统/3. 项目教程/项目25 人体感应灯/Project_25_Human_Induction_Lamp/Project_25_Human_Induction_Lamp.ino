//**********************************************************************************
/*  
 * 文件名  : 人体感应灯
 * 描述 : 通过光敏传感器和PIR运动传感器控制LED.
*/
#define PIN_ADC0  36   //光敏传感器的引脚
#define PIN_LED   4  // LED的引脚
#define pirPin   15     // PIR传感器的引脚
byte pirStat = 0;   // PIR传感器的状态
void setup() {
  Serial.begin(115200);
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_ADC0, INPUT);
  pinMode(pirPin, INPUT);
}

void loop() {
  int adcVal = analogRead(PIN_ADC0); //读取光敏传感器的ADC值
  pirStat = digitalRead(pirPin); //读取PIR传感器的值
  if (adcVal >= 2000) {
      if (pirStat == HIGH){
         digitalWrite(PIN_LED, HIGH);//点亮 LED
         } 
      else{
         digitalWrite(PIN_LED, LOW);//关闭 LED   
        }
  }
   else{
      digitalWrite(PIN_LED, LOW);//关闭 LED
      }
}
//**********************************************************************************
