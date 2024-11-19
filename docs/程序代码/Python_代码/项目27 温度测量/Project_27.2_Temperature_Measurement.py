from machine import ADC, Pin
import time

# 打开并配置0-3.3V的ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)
conversion_factor = 3.3 / (4095)

# 创建引脚15为红色led对象，设置引脚15为输出
led_red = Pin(15, Pin.OUT)  
# 创建引脚2为黄色led对象，设置引脚2为输出
led_yellow = Pin(2, Pin.OUT)
# 创建引脚4为绿色led对象，将引脚4设置为输出
led_green = Pin(4, Pin.OUT) 

while True:
    adcVal=adc.read()
    reading = adcVal * conversion_factor 
    temperature = reading * 102.4 
    print(temperature)
    time.sleep(0.2)
    if temperature <20:
        led_red.value(1)  # 红色LED点亮
        led_yellow.value(0) # 黄色LED熄灭 
        led_green.value(0)  # 绿色LED熄灭
    elif temperature >=20 and temperature <25:
        led_red.value(0)  
        led_yellow.value(1) 
        led_green.value(0)  
    else:
        led_red.value(0)  
        led_yellow.value(0) 
        led_green.value(1)  