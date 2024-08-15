//**********************************************************************************
/*
 * 文件名  : 温湿度计
 * 描述 : LCD显示温度和湿度的数值.
*/
#include "xht11.h"
#include "lcd128_32_io.h"

//gpio13
xht11 xht(13);
unsigned char dht[4] = {0, 0, 0, 0};//只接收数据的前32位，不接收奇偶校验位

lcd lcd(21, 22); //创建lCD128 *32引脚，sda->21， scl->22

void setup() {
  lcd.Init(); //初始化
  lcd.Clear();  //清屏
}
char string[10];

//LCD显示湿度和温度值
void loop() {
  if (xht.receive(dht)) { //正确选中时返回true
    }
  lcd.Cursor(0,0); //设置显示位置
  lcd.Display("Temper:"); //设置显示
  lcd.Cursor(0,8);
  lcd.DisplayNum(dht[2]);
  lcd.Cursor(0,11);
  lcd.Display("C");
  lcd.Cursor(2,0); 
  lcd.Display("humid:");
  lcd.Cursor(2,8);
  lcd.DisplayNum(dht[0]);
  lcd.Cursor(2,11);
  lcd.Display("%");
  delay(200);
}
//**********************************************************************************
