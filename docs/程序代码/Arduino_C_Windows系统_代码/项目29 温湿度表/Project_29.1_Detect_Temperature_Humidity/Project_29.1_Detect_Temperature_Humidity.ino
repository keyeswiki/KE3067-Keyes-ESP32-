//**********************************************************************************
/*
 * 文件名  : 温湿度传感器
 * 描述 : 使用XHT11测量温湿度。将结果打印到串口.
*/
#include "xht11.h"
//gpio13
xht11 xht(13);

unsigned char dht[4] = {0, 0, 0, 0};//只接收数据的前32位，不接收奇偶校验位
void setup() {
  Serial.begin(115200);//打开串口监视器，将波特率设置为115200
}

void loop() {
  if (xht.receive(dht)) { //正确选中时返回true
    Serial.print("RH:");
    Serial.print(dht[0]); //湿度的积分部分，DHT[0]为小数部分
    Serial.print("%  ");
    Serial.print("Temp:");
    Serial.print(dht[2]); //温度的积分部分，DHT[3]是分数部分
    Serial.println("C");
  } else {    //读取错误
    Serial.println("sensor error");
  }
  delay(1000);  //设备读取等待时间为1000ms
}
//**********************************************************************************
