from machine import Pin, PWM
import time
from mfrc522_i2c import mfrc522

#定义GPIO15的输出频率为50Hz，分配给PWM
servoPin = PWM(Pin(15)) 
servoPin.freq(50)
servoPin.duty(256)

#i2c config
addr = 0x28
scl = 22
sda = 21
    
rc522 = mfrc522(scl, sda, addr)
rc522.PCD_Init()
rc522.ShowReaderDetails()            # 显示PCD - MFRC522读卡器详细信息

uid1 = [217, 99, 211, 179]
uid2 = [57, 182, 70, 194]

servoPin.duty_u16(1638)
time.sleep(1)

while True:
    if rc522.PICC_IsNewCardPresent():
        #print("Is new card present!")
        if rc522.PICC_ReadCardSerial() == True:
            print("Card UID:", end=' ')
            print(rc522.uid.uidByte[0 : rc522.uid.size])
            if rc522.uid.uidByte[0 : rc522.uid.size] == uid1 or rc522.uid.uidByte[0 : rc522.uid.size] == uid2:
                servoPin.duty_u16(8100)
                time.sleep(1)
            else :
                servoPin.duty_u16(1638)
                time.sleep(1)
                