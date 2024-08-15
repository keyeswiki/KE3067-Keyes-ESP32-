from machine import Pin
import time

motor1a = Pin(15, Pin.OUT) # 创建引脚15为motor1a对象，设置引脚15为输出
motor1b = Pin(2, Pin.OUT) # 创建引脚2为motor1b对象，设置引脚2为输出

def forward():
    motor1a.value(1) # 设置motor1a 为高
    motor1b.value(0) # 设置motor1b 为低
def backward():
    motor1a.value(0)
    motor1b.value(1)
def stop():
    motor1a.value(0)
    motor1b.value(0)

def test():
    forward() # 电机向前转
    time.sleep(5) #延时
    stop() # 电机停止
    time.sleep(2)
    backward()# 电机向后转
    time.sleep(5)
    stop()
    time.sleep(2)
    
for i in range(5):
    test() 