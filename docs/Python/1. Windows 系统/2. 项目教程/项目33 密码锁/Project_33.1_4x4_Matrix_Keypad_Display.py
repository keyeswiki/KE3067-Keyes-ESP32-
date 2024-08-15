# 导入 keypad 库.
from keypad import KeyPad
import time
# 将键盘模块与ESP32引脚关联. 
keyPad = KeyPad(22, 21, 19, 18, 17, 16, 4, 0)
#调用函数keyPan.scan()来获取所按键的值。一旦得到，就打印出来. 
def key():
    keyvalue = keyPad.scan()
    if keyvalue != None:
        print(keyvalue, end="\t")
        time.sleep_ms(300)
        return keyvalue
            
while True:
    key()
