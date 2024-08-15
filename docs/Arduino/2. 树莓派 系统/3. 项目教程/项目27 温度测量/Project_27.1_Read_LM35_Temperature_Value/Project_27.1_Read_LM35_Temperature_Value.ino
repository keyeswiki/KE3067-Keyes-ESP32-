//**********************************************************************************
/*  
 * 文件名 : 读取LM35温度值
 * 描述 : ADC值转换为LM35温度值
*/
#define PIN_ANALOG_IN  36  //温度传感器的引脚

void setup() {
  Serial.begin(115200);
}

//在loop()中，使用analogRead()函数获取ADC值，
//然后使用map()函数将值转换为8位精度的DAC值。
//通过下面的公式计算测量电压值，摄氏度和华氏度值，
//并通过串口监视器打印这些数据.

void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN);
  int dacVal = map(adcVal, 0, 4095, 0, 255);
  double voltage = adcVal / 4095.0 * 3.3;
  float temperatureC = (voltage * 1000.0) / 10.0 ;
  float temperatureF = (temperatureC * 1.8) + 32.0;
  Serial.print("ADC Value: " + String(adcVal));
  Serial.print("--DAC Value: " + String(dacVal));
  Serial.print("--Voltage Value: " + String(voltage) + "V");
  Serial.print("--temperatureC: " + String(temperatureC) + "C");
  Serial.println("--temperatureF: " + String(temperatureF) + "F");
  delay(200);
}
//**********************************************************************************
