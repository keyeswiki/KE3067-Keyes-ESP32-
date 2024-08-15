//**********************************************************************
/* 
 * 文件名 : 74HC595N 控制8个LED
 * 描述 : 用74HC575N驱动十个led流水灯.
*/
int dataPin = 14;   // 连接74HC595 DS的引脚(Pin14)  
int latchPin = 12;  // 74HC595的ST_CP连接引脚(Pin12)
int clockPin = 13;  // 74HC595的SH_CP连接引脚(Pin11)          

void setup() {
  // 设置引脚输出
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  // 定义一个单字节变量，用8位来表示LED柱状图的8个LED的状态。
  //该变量被赋值为0x01，即二进制00000001，表示只有一盏灯亮。
  byte x = 0x01;    // 0b 0000 0001
  for (int j = 0; j < 8; j++) { // 让led灯从右向左亮起
    writeTo595(LSBFIRST, x);
    x <<= 1; // 使变量向左移动一位，然后明亮的LED向左移动一步.
    delay(50);
  }
  delay(100);
  x = 0x80;       //0b 1000 0000
  for (int j = 0; j < 8; j++) { // 让led灯从左向右亮起
    writeTo595(LSBFIRST, x);
    x >>= 1;    
    delay(50);
  }
  delay(100);
}
void writeTo595(int order, byte _data ) {
  // 输出低电平到latchPin
  digitalWrite(latchPin, LOW);
  // 发送串行数据到74HC595
  shiftOut(dataPin, clockPin, order, _data);
  // 输出高电平到latchPin，74HC595将数据更新到并行输出端口.
  digitalWrite(latchPin, HIGH);
}
//**********************************************************************************
