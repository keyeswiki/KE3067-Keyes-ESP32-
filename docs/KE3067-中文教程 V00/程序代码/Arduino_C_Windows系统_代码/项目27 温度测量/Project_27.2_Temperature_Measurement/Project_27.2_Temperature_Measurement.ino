//**********************************************************************************
/*  
 * 文件名  : 温度测量
 * 描述 : 当LM35感知到不同的温度时，不同的led会点亮
*/
#define PIN_ADC0       36      //LM35传感器的引脚
#define PIN_GREENLED   4      //绿色LED的引脚
#define PIN_YELLOWLED  2      //黄色LED的引脚
#define PIN_REDLED     15      //红色LED的引脚
void setup() {
  Serial.begin(115200);
  pinMode(PIN_GREENLED, OUTPUT); //设置PIN_GREENLED为输出
  pinMode(PIN_YELLOWLED, OUTPUT);//设置PIN_YELLOWLED为输出
  pinMode(PIN_REDLED, OUTPUT);//设置PIN_REDLED为输出
  pinMode(PIN_ADC0, INPUT);//设置PIN_ADC0为输入
}

void loop() {
  int adcVal = analogRead(PIN_ADC0);
  double voltage = adcVal / 4095.0 * 3.3;
  float temperatureC = (voltage * 1000.0) / 10.0 ;
  float temperatureF = (temperatureC * 1.8) + 32.0;
  Serial.print("ADC Value: " + String(adcVal));
  Serial.print("---Voltage Value: " + String(voltage) + "V");
  Serial.print("---temperatureC: " + String(temperatureC) + "℃");
  Serial.println("---temperatureF: " + String(temperatureF) + "F");
  if (temperatureC >= 25) {
    delay(100);
    digitalWrite(PIN_GREENLED, LOW);
    digitalWrite(PIN_YELLOWLED, LOW);
    digitalWrite(PIN_REDLED, HIGH);
  }
  else if (temperatureC >= 20 && temperatureC < 25) {
    digitalWrite(PIN_GREENLED, LOW);
    digitalWrite(PIN_YELLOWLED, HIGH);
    digitalWrite(PIN_REDLED, LOW);
  }
  else {
    digitalWrite(PIN_GREENLED, HIGH);
    digitalWrite(PIN_YELLOWLED, LOW);
    digitalWrite(PIN_REDLED, LOW);
  }

  delay(500);
}
//**********************************************************************************
