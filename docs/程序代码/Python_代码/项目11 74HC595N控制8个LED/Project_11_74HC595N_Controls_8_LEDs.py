# 导入time和my74HC595库.
from my74HC595 import Chip74HC595
import time

# 创建Chip74HC595对象并配置引脚
chip = Chip74HC595(14, 12, 13)
# ESP32-14: 74HC595-DS(14)
# ESP32-12: 74HC595-STCP(12)
# ESP32-13: 74HC595-SHCP(11)

#第一个for循环使LED从左到右分别点亮
#而第二个for循环使它从右向左分别点亮.
while True:
    x = 0x01
    for count in range(8):
        chip.shiftOut(1, x)
        x = x<<1;
        time.sleep_ms(300)
    x = 0x01
    for count in range(8):
        chip.shiftOut(0, x)
        x = x<<1
        time.sleep_ms(300)