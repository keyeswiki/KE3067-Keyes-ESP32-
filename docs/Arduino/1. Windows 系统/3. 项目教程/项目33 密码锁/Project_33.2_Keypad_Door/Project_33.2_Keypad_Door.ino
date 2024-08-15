//**********************************************************************************
/*  
 * 文件名 : 密码锁
 * 描述 : 制作一个简单的密码锁.
*/
#include <Keypad.h>
#include <ESP32Servo.h>

// 定义键盘按钮上的符号
char keys[4][4] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[4] = {22, 21, 19, 18};   // 连接到键盘的行引脚
byte colPins[4] = {17, 16, 4, 0};   // 连接到键盘的列引脚

// 初始化myKeypad类的实例
Keypad myKeypad = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);

Servo  myservo;     // 创建舵机对象来控制舵机
int servoPin = 15;  // 定义舵机引脚
int buzzerPin = 2; // 定义蜂鸣器引脚

char passWord[] = {"1234"}; // 保存正确密码

void setup() {
  myservo.setPeriodHertz(50);           // 标准50赫兹舵机
  myservo.attach(servoPin, 500, 2500);  // 将servoPin上的舵机附加到舵机对象上
                                        // 设置舵机的高电平时间范围，以实现精确的从0到180°转动
  myservo.write(0);                     // 设置舵机的初始角度
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  static char keyIn[4];     // 保存输入字符
  static byte keyInNum = 0; // 保存输入的字符数
  char keyPressed = myKeypad.getKey();  // 获取字符输入
  // 处理输入字符
  if (keyPressed) {
    // 每次按下该键时发出提示音
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    // 保存输入字符
    keyIn[keyInNum++] = keyPressed;
    // 输入后判断正确性
    if (keyInNum == 4) {
      bool isRight = true;            // 保存密码是否正确
      for (int i = 0; i < 4; i++) {   // 判断每个字符的密码是否正确
        if (keyIn[i] != passWord[i])
          isRight = false;            // 如有错字，请标记错字.
      }
      if (isRight) {                  // 如果输入的密码正确
        myservo.write(90);           // 打开开关
        delay(2000);                  // 推迟一段时间
        myservo.write(0);            // 关闭开关
        Serial.println("passWord right!");
      }
      else {                          // 输入密码错误
        digitalWrite(buzzerPin, HIGH);// 密码错误提示音
        delay(1000);
        digitalWrite(buzzerPin, LOW);
        Serial.println("passWord error!");
      }
      keyInNum = 0; // 将输入字符数重置为0
    }
  }
}
//**********************************************************************************
