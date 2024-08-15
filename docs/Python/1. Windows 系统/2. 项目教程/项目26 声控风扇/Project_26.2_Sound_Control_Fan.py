from machine import ADC, Pin
import time
 
# 打开并配置0-3.3V的ADC 
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)
 
# 引脚初始化
motor1a = Pin(15, Pin.OUT) # 创建引脚15为motor1a对象，设置引脚15为输出
motor1b = Pin(2, Pin.OUT) # 创建引脚2为motor1b对象，设置引脚2为输出

# 如果声音传感器检测到声音，电机将旋转
# 当模拟值大于600时，否则，电机不转动.    
while True:
    adcVal=adc.read()
    print(adcVal)
    time.sleep(0.5)
    if adcVal >600:
        motor1a.value(1) # 设置 motor1a 为高
        motor1b.value(0) # 设置 motor1b 为低
        time.sleep(5)   # 延时
    else:
        motor1a.value(0)
        motor1b.value(0)