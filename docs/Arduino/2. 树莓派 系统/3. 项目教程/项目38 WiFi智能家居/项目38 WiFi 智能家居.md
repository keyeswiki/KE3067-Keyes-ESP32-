# 项目38 WiFi 智能家居

## 1.实验说明：
在前面的实验中，我们已经了解了ESP32的WiFi Station模式，WiFi AP模式和WiFi AP+Station模式等三种模式。那么在本章实验中，我们将使用ESP32的WiFi Station模式通过APP连接WIFI来控制多个传感器/模块工作，实现WiFi智能家居的效果。

## 2.实验器材：
|![Img](../../../media/ESP32主板img-20230411094400.png)|![Img](../../../media/面包板img-20230411094115.png)|![Img](../../../media/130电机模块img-20230411174254.png)|![Img](../../../media/继电器模块img-20230412162708.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1| 130直流电机模块*1|继电器模块*1|
|![Img](../../../media/舵机img-20230411175237.png)|![Img](../../../media/温湿度传感器img-20230414160502.png)|![Img](../../../media/超声波传感器img-20230414163522.png)|![Img](../../../media/4P转杜邦线公单img-20230412082156.png)|
| 舵机*1 |温湿度传感器*1| 超声波传感器*1|4P转杜邦线公单*2|
|![Img](../../../media/智能手机，平板电脑img-20230419141437.png)|![Img](../../../media/面包板专用电源模块img-20230407162648.png)|![Img](../../../media/6节5号电池盒img-20230411174335.png)|![Img](../../../media/风扇叶img-20230411174344.png)|
|智能手机/平板电脑(<span style="color: rgb(255, 76, 65);">自备</span>)*1|面包板专用电源模块*1|6节5号电池盒*1|风扇叶*1|
|![Img](../../../media/5号电池img-20230411174428.png)|![Img](../../../media/USB线img-20230407194453.png)| ![Img](../../../media/3P转杜邦线公单img-20230412081905.png)|![Img](../../../media/跳线img-20230411175250.png)|
|5号电池(<span style="color: rgb(255, 76, 65);">自备</span>)*6|MicroUSB线*1|3P转杜邦线公单*2|跳线若干|

## 3.实验接线图：
| 继电器| ESP32主板 | 温湿度传感器 | ESP32主板 |
| :--: | :--: | :--: | :--: |
| G | G| G | G |
| V | 5V | V | 5V |
| S | IO32 | S | IO15 |


| 超声波传感器| ESP32主板 | 130 风扇模块 | ESP32主板 |
| :--: | :--: | :--: | :--: |
| Vcc | 5V| G | G |
| Trig | IO14 | V | 5V |
| Echo | IO27 | IN+ | IO19 |
|Gnd|G|IN-|IO18|


| 舵机| ESP32主板 |
| :--: | :--: | 
| 红色线 | 5V|
| 棕色线 | G |
| 橙色线 | IO4 |


![Img](../../../media/项目38接线图img-20230421102210.png)

(<span style="color: rgb(255, 76, 65);">注:</span> 先接好线，然后在直流电机上安装一个小风扇叶片。)

## 4.安装APP:
安装APP的方法请参照 <span style="color: rgb(255, 76, 65);">**项目37 WiFi测试**</span> 。这里就不重复讲解。

## 5. 添加xht11和ESP32Servo库：
本项目代码使用了名为“<span style="color: rgb(255, 76, 65);">xht11</span>”和“<span style="color: rgb(255, 76, 65);">ESP32Servo</span>”库。如果你还没有添加，请在学习之前添加它们。添加第三方库的方法请参考“<span style="color: rgb(0, 209, 0);">开发环境设置</span>”。

## 6. 项目代码：
本项目中使用的代码保存在（即路径)：**..\Keyes ESP32 高级版学习套件\4. Arduino C 教程\2. 树莓派 系统\3. 项目教程\代码集**。你可以把代码移到任何地方。例如，我们将代码保存在Raspberry Pi系统的文件夹pi中，<span style="color: rgb(255, 76, 65);">**路径：../home/pi/代码集**</span>。
![Img](../../../media/Pi系统的文件夹pi中img-20230526081552.png)
可以在此路径下打开代码“**Project_38_WiFi_Smart_Home**”。

```
//**********************************************************************************
/*  
 * 文件名  : WiFi 智能家居.
 * 描述 : WiFi APP控制多个传感器/模块工作，实现WiFi智能家居的效果.
*/
#include <Arduino.h>
#include <WiFi.h>
#include <ESPmDNS.h>
#include <WiFiClient.h>

#include "xht11.h"
//gpio15
xht11 xht(15);
unsigned char dht[4] = {0, 0, 0, 0};

#include <ESP32Servo.h>
Servo myservo;
int servoPin = 4;
#define Relay  32
#define IN1 19  //IN1对应IN+
#define IN2 18 //IN2对应于IN-
#define trigPin  14
#define echoPin  27

int distance1;
String dis_str;
int ip_flag = 1;
int ultra_state = 1;
int temp_state = 1;
int humidity_state = 1;

String item = "0";
const char* ssid = "ChinaNet-2.4G-0DF0"; //用户wifi的名称
const char* password = "ChinaNet@233";  //用户wifi的密码
WiFiServer server(80);
String unoData = "";

void setup() {
  Serial.begin(115200);
  pinMode(Relay, OUTPUT);
  myservo.setPeriodHertz(50);   
  myservo.attach(servoPin, 500, 2500);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();
  Serial.println("TCP server started");
  MDNS.addService("http", "tcp", 80);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(Relay, LOW);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  WiFiClient client = server.available();
  if (!client) {
      return;
  }
  while(client.connected() && !client.available()){
      delay(1);
  }
  String req = client.readStringUntil('\r');
  int addr_start = req.indexOf(' ');
  int addr_end = req.indexOf(' ', addr_start + 1);
  if (addr_start == -1 || addr_end == -1) {
      Serial.print("Invalid request: ");
      Serial.println(req);
      return;
  }
  req = req.substring(addr_start + 1, addr_end);
  item=req;
  Serial.println(item);
  String s;
  if (req == "/")
  {
      IPAddress ip = WiFi.localIP();
      String ipStr = String(ip[0]) + '.' + String(ip[1]) + '.' + String(ip[2]) + '.' + String(ip[3]);
      s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n<!DOCTYPE HTML>\r\n<html>Hello from ESP32 at ";
      s += ipStr;
      s += "</html>\r\n\r\n";
      Serial.println("Sending 200");
      client.println(s);
  }
  else if(req == "/btn/0")
  {
    Serial.write('a');
    client.println(F("turn on the relay"));
    digitalWrite(Relay, HIGH);
  }
  else if(req == "/btn/1")
  {
    Serial.write('b');
    client.println(F("turn off the relay"));
    digitalWrite(Relay, LOW);
  }
  else if(req == "/btn/2")
  {
    Serial.write('c');
    client.println("Bring the steering gear over 180 degrees");
    myservo.write(180); 
    delay(200);
  }
  else if(req == "/btn/3")
  {
    Serial.write('d');
    client.println("Bring the steering gear over 0 degrees");
    myservo.write(0); 
    delay(200);
  }
  else if(req == "/btn/4")
  {
    Serial.write('e');
    client.println("esp32 already turn on the fans");
    digitalWrite(IN1, LOW); 
    digitalWrite(IN2, HIGH);
  }
  else if(req == "/btn/5")
  {
    Serial.write('f');
    client.println("esp32 already turn off the fans");
    digitalWrite(IN1, LOW); 
    digitalWrite(IN2, LOW);
  }
  else if(req == "/btn/6")
  {
    Serial.write('g');
    while(Serial.available() > 0)
    {
      unoData = Serial.readStringUntil('#');
      client.println("Data");
    }
    while(ultra_state>0)
       {
          Serial.print("Distance = "); 
          Serial.print(checkdistance());
          Serial.println("#");
          Serial1.print("Distance = "); 
          Serial1.print(checkdistance());
          Serial1.println("#");  
          int t_val1 = checkdistance();
          client.print("Distance(cm) = ");
          client.println(t_val1); 
          ultra_state = 0;
        }
  }
  else if(req == "/btn/7")
  {
    Serial.write('h');
    client.println("turn off the ultrasonic");
    ultra_state = 1;
  }
  else if(req == "/btn/8")
  {
    Serial.write('i');
    while(Serial.available() > 0)
     {
      unoData = Serial.readStringUntil('#');
      client.println(unoData);
     }
    while(temp_state>0)
      {
        if (xht.receive(dht)) {
          Serial.print("Temperature = "); 
          Serial.print(dht[2],1);
          Serial.println("#");
          Serial1.print("Temperature = "); 
          Serial1.print(dht[2],1);
          Serial1.println("#");
          int t_val2 = dht[2];
          client.print("Temperature(℃) = ");
          client.println(t_val2);
        }
        temp_state = 0;
      }
  }
  else if(req == "/btn/9")
  {
    Serial.write('j');
    client.println("turn off the temperature");
    temp_state = 1;
  }
  else if(req == "/btn/10")
  {
    Serial.write('k');
    while(Serial.available() > 0)
     {
       unoData = Serial.readStringUntil('#');
       client.println(unoData);
     }
    while(humidity_state > 0)
      {
        if (xht.receive(dht)) {
          Serial.print("Humidity = "); 
          Serial.print(dht[0],1);
          Serial.println("#");
          Serial1.print("Humidity = "); 
          Serial1.print(dht[0],1);
          Serial1.println("#");
          int t_val3 = dht[0];
          client.print("Humidity(%) = ");
          client.println(t_val3);
        }
        humidity_state = 0;
      }
  }
  else if(req == "/btn/11")
  {
    Serial.write('l');
    client.println("turn off the humidity");
    humidity_state = 1;
    }
  //client.print(s);
  client.stop();
}

int checkdistance() {
  digitalWrite(14, LOW);
  delayMicroseconds(2);
  digitalWrite(14, HIGH);
  delayMicroseconds(10);
  digitalWrite(14, LOW);
  int distance = pulseIn(27, HIGH) / 58;
  
  delay(10);
  return distance;
}
//**********************************************************************************

```
<span style="color: rgb(255, 76, 65);">特别注意：</span>需要先将实验代码![Img](../../../media/修改Wifi名称和Wifi密码img-20230419160000.png)中的用户Wifi名称和用户Wifi密码改成你们自己的Wifi名称和Wifi密码。

## 7. 实验现象：
确认程序代码中的Wifi名称和Wifi密码修改正确后，编译并上传代码到 ESP32主板上。
<span style="color: rgb(255, 76, 65);">注意：</span> 如果上传代码不成功，可以再次点击![Img](../../../media/上传img-20230418112107.png)后用手按住ESP32主板上的Boot键![Img](../../../media/按住ESP32主板上的Boot键img-20230407184236.png)，出现上传进度百分比数后再松开Boot键，如下图所示：
![Img](../../../media/上传进度百分比数img-20230526094345.png)

打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>，这样，串口监视器打印检测到的WiFi IP地址。（**注意：** 如果打开串口监视器且设置波特率为115200之后，串口监视器窗口没有显示如下信息，可以按下ESP32的复位键![Img](../../../media/按下ESP32的复位键img-20230419105000.jpg)）
![Img](../../../media/WiFi的IP地址img-20230526131450.png)

然后打开WiFi APP，在WIFI按钮前面的文本框中输入检测到的WIFI IP地址（<span style="color: rgb(255, 76, 65);">例如，上面串口监视器检测到的IP地址：192.168.0.156</span>），接着点击WIFI按钮来连接WiFi，同时WiFi IP地址前的文本框中会显示对应的WiFi IP地址“Hello from ESP32 at <span style="color: rgb(255, 76, 65);">192.168.0.156</span>”。这样，就说明APP已经连接上了WiFi。（<span style="color: rgb(255, 76, 65);">WiFi的IP地址有时候会改变，如果原来的IP地址不行，需要重新检测WiFi的IP地址</span>）
![Img](../../../media/APP连接上的WiFi的IP地址img-20230419160442.png)

**APP已经连接上了WiFi后，开始进行如下操作：**
![Img](../../../media/img-20230814112114.png)
（1）点击![Img](../../../media/继电器按钮img-20230419160938.png)按钮，继电器打开，APP上显示，模块上的指示灯点亮；再次点击![Img](../../../media/继电器按钮img-20230419160938.png)按钮，继电器关闭，APP上显示，模块上的指示灯不亮。
（2）点击![Img](../../../media/舵机按钮img-20230419160955.png)按钮，舵机转动180°，APP上显示![Img](../../../media/APP显示舵机的角度1img-20230419161216.png)；再次点击![Img](../../../media/舵机按钮img-20230419160955.png)按钮，APP上显示![Img](../../../media/APP显示舵机的角度2img-20230419161226.png)，舵机转动0°。
（3）点击![Img](../../../media/风扇按钮img-20230419161033.png)按钮，电机（带小风扇叶）转动，APP上显示![Img](../../../media/APP打开风扇img-20230419161249.png)；再次点击![Img](../../../media/风扇按钮img-20230419161033.png)按钮，关闭电机，APP上显示![Img](../../../media/APP关闭风扇img-20230419161256.png)；
（4）点击![Img](../../../media/超声波按钮img-20230419161047.png)按钮，超声波传感器测距，在超声波传感器前放一个物体，APP上显示![Img](../../../media/APP显示距离img-20230419161308.png)（<span style="color: rgb(255, 76, 65);">不同的距离显示不同的数字</span>），说明此时物体离超声波传感器的距离为6cm；再次点击![Img](../../../media/超声波按钮img-20230419161047.png)按钮，关闭超声波，APP上显示![Img](../../../media/APP关闭超声波img-20230419161332.png)。
（5）点击![Img](../../../media/温度按钮img-20230419161108.png)按钮，温湿度传感器测量环境中的温度，APP上显示![Img](../../../media/APP显示温度img-20230419161343.png)（<span style="color: rgb(255, 76, 65);">不同的温度条件下显示不同的温度值</span>），说明此时环境中的温度为30℃；再次点击![Img](../../../media/温度按钮img-20230419161108.png)按钮，关闭温湿度传感器，APP上显示![Img](../../../media/APP关闭温度img-20230419161427.png)。
（6）点击![Img](../../../media/湿度按钮img-20230419161140.png)按钮，温湿度传感器测量环境中的湿度，APP上显示![Img](../../../media/APP显示湿度img-20230419161434.png)（<span style="color: rgb(255, 76, 65);">不同的湿度条件下显示不同的湿度值</span>），说明此时环境中的湿度为55%；再次点击![Img](../../../media/湿度按钮img-20230419161140.png)按钮，关闭温湿度传感器，APP上显示![Img](../../../media/APP关闭湿度img-20230419161459.png)。



