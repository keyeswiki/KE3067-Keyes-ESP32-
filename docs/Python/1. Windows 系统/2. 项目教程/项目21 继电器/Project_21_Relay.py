from machine import Pin
import time

# 创建引脚15为继电器对象，将引脚15设置为输出 
relay = Pin(15, Pin.OUT)
 
# 继电器打开，继电器COM和NO连接，COM和NC断开.
def relay_on():
    relay(1)
 
# 继电器闭合，继电器COM和NO断开，COM和NC接通.
def relay_off():
    relay(0)
 
# 循环，继电器开一秒，关一秒
while True:
    relay_on()
    time.sleep(1)
    relay_off()
    time.sleep(1)