//**********************************************************************************
/*  
 * 文件名  : 超声波测距仪
 * 描述 : 四个led由超声波测距控制.
*/
const int TrigPin = 13;    // 定义TrigPin
const int EchoPin = 14;    // 定义EchoPin.
const int PIN_LED1 = 4;    // 定义PIN_LED1
const int PIN_LED2 = 0;    // 定义PIN_LED2
const int PIN_LED3 = 2;    // 定义PIN_LED3
const int PIN_LED4 = 15;    // 定义PIN_LED4
int duration = 0;    // 定义持续时间的初始值为0
int distance = 0;   // 定义距离的初始值为0
void setup() 
{
  pinMode(TrigPin , OUTPUT); // 设置trigPin为输出模式
  pinMode(EchoPin , INPUT); // 设置echoPin为输入模式
  pinMode(PIN_LED1 , OUTPUT);  // 设置PIN_LED1为输出模式
  pinMode(PIN_LED2 , OUTPUT);  // 设置PIN_LED2为输出模式
  pinMode(PIN_LED3 , OUTPUT);  // 设置PIN_LED3为输出模式
  pinMode(PIN_LED4 , OUTPUT);  // 设置PIN_LED4为输出模式
  Serial.begin(115200);  //设置波特率为115200的串口监视器.
}
void loop()
{
// 使trigPin输出高电平持续10μs触发HC_SR04  
  digitalWrite(TrigPin , HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin , LOW);
// 等待HC-SR04回到高电平，测量这个等待时间
  duration = pulseIn(EchoPin , HIGH);
// calculate the distance according to the time
  distance = (duration/2) / 28.5 ;
  Serial.print("Distance: ");
  Serial.print(distance); //串口打印距离值
  Serial.println("cm");
  if ( distance <= 5 )
  {
    digitalWrite(PIN_LED1, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED1, LOW);
  }
  if ( distance <= 10 )
  {
    digitalWrite(PIN_LED2, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED2, LOW);
  }
  if ( distance <= 15 )
  {
    digitalWrite(PIN_LED3, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED3, LOW);
  }
  if ( distance <= 20 )
  {
    digitalWrite(PIN_LED4, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED4, LOW);
  }
}     
//**********************************************************************************
