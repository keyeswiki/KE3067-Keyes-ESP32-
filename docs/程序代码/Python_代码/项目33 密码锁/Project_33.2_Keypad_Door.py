from keypad import KeyPad
from machine import Pin, PWM
import time

keyPad = KeyPad(22, 21, 19, 18, 17, 16, 4, 0)
servo= PWM(Pin(15)) 
servo.freq(50)
servo.duty(256)
servo.duty_u16(1638)
time.sleep_ms(1000)
activeBuzzer = Pin(2, Pin.OUT)

# 定义数组并设置密码. 
passWord = "1234"
keyIn = ""
def key():
    keyvalue = keyPad.scan()
    if keyvalue != None:
        print('Your input:', keyvalue)
        time.sleep_ms(200)
        return keyvalue

while True:
 # 每次按下一个键，蜂鸣器就会短促地鸣叫一声，
 # 键的键值将存储在keydata数组中. 
    keydata = key()
    if keydata != None:
        activeBuzzer.value(1)
        time.sleep_ms(100)
        activeBuzzer.value(0)
        keyIn += keydata 
# 当按下4个键时，判断密码是否正确。
# 如果正确，伺服将旋转90度，1秒后再转回来。
# 如果密码输入错误，蜂鸣器会长时间鸣叫一次，并清除keyInNum的值.        
    if len(keyIn) == 4:
        if keyIn == passWord:
            print("passWord right!")
            servo.duty_u16(4915) 
            time.sleep_ms(1000)
            servo.duty_u16(1638)
        else:
            print("passWord error!")
            activeBuzzer.value(1)
            time.sleep_ms(1000)
            activeBuzzer.value(0)
        keyIn = ""