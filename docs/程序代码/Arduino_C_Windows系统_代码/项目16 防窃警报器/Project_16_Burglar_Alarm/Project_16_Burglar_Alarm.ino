//**********************************************************************
/* 
 * 文件名  : 防盗报警器
 * 描述 : 人体红外传感器蜂鸣器和LED模拟防盗报警.
*/
#define buzzerPin   2   // 蜂鸣器的引脚
#define ledPin   0     // LED的引脚
#define pirPin   15     // PIR运动传感器的引脚
byte pirStat = 0;   // PIR运动传感器的状态
void setup() {
 pinMode(buzzerPin, OUTPUT); 
 pinMode(ledPin, OUTPUT);    
 pinMode(pirPin, INPUT);     
}
void loop()
{
 pirStat = digitalRead(pirPin); 

 if (pirStat == HIGH)
 {            // 如果检测到人或移动的动物
   digitalWrite(buzzerPin, HIGH);  // 蜂鸣器嗡嗡作响
   digitalWrite(ledPin, HIGH);  // led灯亮
   delay(500);
   digitalWrite(buzzerPin, LOW);  // 蜂鸣器不响
   digitalWrite(ledPin, LOW);  // led关闭
   delay(500);
 } 
 else {  // 否则，没有检测到人或移动的动物，
   digitalWrite(buzzerPin, LOW); // 关闭蜂鸣器
   digitalWrite(ledPin, LOW);  // led关闭
 }
}
//*********************************************************************************
