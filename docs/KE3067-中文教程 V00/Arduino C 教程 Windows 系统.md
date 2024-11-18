# Arduino C 教程 Windows 系统

## 开发环境设置

**1. Windows系统：**
           
![图片不存在](./Arduino/media/eef95a4f71c9316e41a35813556e51da.png)

**1.1. 下载安装Arduino软件：**

(1) 首先，进入Arduino官方网站：[https://www.arduino.cc/en/software](https://www.arduino.cc/en/software) ，点击“**SOFTWARE**”进入下载页面，如下图所示：

![图片不存在](./Arduino/media/09ba2def88a3782a4ea7fde0a3fa94b2.png) 

![图片不存在](./Arduino/media/3eb0ef44f14f936b8fa44bf113e4936e.png)

(2) 然后，根据你的操作系统选择并下载相应的安装程序。如果你是Windows用户，请选择安装2.0.3版本Arduino IDE，当点击“**Windows** Win10 and newer,64bits”或“**Windows** MSI installer”，代表下载安装文件(.exe) ，需要手动安装; 当点击“**Windows** ZIP file”，代表直接下载2.0.3版本Arduino IDE，是一个压缩文件，解压就可以直接使用，无需安装。

![图片不存在](./Arduino/media/1f975a2153559093d34b23afd73d3e7e.png)

 点击下面图标，就可直接安装Arduino IDE了。

![图片不存在](./Arduino/media/b4fc60ff6863af3d093cd47da62f2040.png)

一般情况下，点击“**JUST DOWNLOAD**”就可以下载了，当然如果你愿意，你可以选择小小的赞助，以帮助伟大的Arduino开源事业。

(3) Arduino软件下载完成后,如果你是点击“**Windows** Win10 and newer,64bits”或“**Windows** MSI installer”下载的(.exe)文件“**arduino-ide_2.0.3_Windows_64bit.exe**” ，需要双击(.exe)文件继续安装，当你收到操作系统的警告时，请点击“**Allow access**”允许驱动程序安装。首先点击“**I Agree**”, 然后选择“Anyone who uses this computer(all users)”后再点击Next。

![图片不存在](./Arduino/media/15bcc3e3f13e89a7a3eaf2d6e9ca5b2c.png)

![图片不存在](./Arduino/media/72f9cfe86a9e89aeb3431ed66d9df5bf.png)

![图片不存在](./Arduino/media/74bde0fbec2a9a15c14435633eb7b864.png)

(4) 点击“**Next**”后，如果又出现下面页面，点击“**I Agree**”。

![图片不存在](./Arduino/media/72f9cfe86a9e89aeb3431ed66d9df5bf.png)

(5) 选择安装目录(我们建议保持默认目录)，然后点击“**Install**”。

![图片不存在](./Arduino/media/6c66ee9c7b948a27341de4f5d5e59ab1.png)

(6) 如果出现以下界面，则应选择“**Install**”。

![图片不存在](./Arduino/media/68ddbb0c391855fd7213d5d9269eebb8.png)

该过程将提取并安装所有必需的文件，以正确执行Arduino软件(IDE)。

![图片不存在](./Arduino/media/235841a13809e8c131e0471e1c90f54a.png)

(7) 安装完成后，会在桌面上生成一个Arduino IDE软件快捷方式。

![图片不存在](./Arduino/media/9152131aa663c6c5723a96c9e6f7a9a1.png)

![图片不存在](./Arduino/media/edbce928e27d6f6d26e0a6df960421da.png)

**1.2. 在Windows系统上安装驱动：**

（<span style="color: rgb(255, 76, 65);">注意：如果电脑已经安装了驱动程序，则不需要再安装驱动；如果没有，则需要进行以下操作</span>）

在使用ESP32主板之前，必须安装驱动程序，否则ESP32主板将无法与计算机通信。将主控板用USB线连接在电脑上，一般MacOS和Windows10系统的电脑会自动安装驱动。如果没能自动安装，则需要手动安装驱动。

（1）查看电脑是否自动安装好驱动：

点击“**计算机**”--“**属性**”--“**设备管理器**”，显示如下图是安装成功的了：

![图片不存在](./Arduino/media/65fcafd5ca192f1d566779a819e04d00.png)

（2）如果没能自动安装，那就手动安装，步骤如下：

下载CP2102驱动程序的链接：[https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads](https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads)

![图片不存在](./Arduino/media/967354bb7acd4614ce3c44b221bdfab9.png)

右键点击“**USB Serial**”，选择“**更新驱动程序(P)**”并点击。

![图片不存在](./Arduino/media/594f6af70f127b4d54239b5af7f11035.png)

跳转到以下页面，选择“**浏览我的电脑以查找驱动程序(R)**”并点击。

![图片不存在](./Arduino/media/e71e6ab23f4ecbd2c0eefb662aa50704.png)

我们在对应的文件夹中也提供有CP210X系列芯片的驱动文件，位置如下：

![图片不存在](./Arduino/media/93db967482f9b80ea98c483c8f56e498.png)

你可以先将驱动文件复制到<span style="color: rgb(255, 76, 65);">**电脑桌面**</span>上，然后点击“**浏览(R)...**”,选中CP210X系列芯片的驱动，最后点击“**下一页**”。

![图片不存在](./Arduino/media/c6fd62ecfbcc250b725abdc72f075f0c.png)

过一会儿，驱动安装成功。

![图片不存在](./Arduino/media/f7439196fa8567c300f0f3e35e399d42.png)

这个时候再打开计算机设备管理器，就可以看到CP2102驱动程序已经安装成功了，刚刚那个黄色的感叹号不见了。

![图片不存在](./Arduino/media/65fcafd5ca192f1d566779a819e04d00.png)

**1.3. Arduino IDE工具栏介绍：**

点击电脑桌面上的图标![图片不存在](./Arduino/media/2aa3f7ff09ff5841f1864c521af61cbd.png)，打开Arduino IDE。

![图片不存在](./Arduino/media/29c35817885841cbbc9385b4c8544290.png)

![图片不存在](./Arduino/media/752c9d4cfd38937d8b7ac496bf66d96d.png) -- 用于检查是否存在任何编译错误。

![图片不存在](./Arduino/media/84910ad669ba1c2669ec402831fbf46d.png) -- 用于将程序上传到Arduino板。

![图片不存在](./Arduino/media/8d72475c82afbebb1edf0f1fc12da524.png) -- 用于编写程序时的单步调试。

![图片不存在](./Arduino/media/c5e52211c8c8b64345c420211a2fd2ee.png) -- 用于从板接收串行数据并将串行数据发送到板的串行监视器。

![图片不存在](./Arduino/media/f97189a9ca8ff237dc41194ed5c28188.png) -- 用于串口接收的数据转换成动态曲线图。

![图片不存在](./Arduino/media/4f1db32e023aa9d575b641cd83f93b38.png) -- 用于打开最近保存的示例草图。

![图片不存在](./Arduino/media/f33fa6565913b109c0111e39340ad201.png) -- 用手动安装开发板。

**语言切换功能：**

（1）单击“File”→“Preferences”，在 Preferences 页面中将语言“English”切换成“简体中文”，点击“OK”就可以了。

![图片不存在](./Arduino/media/d44b87180f422631e697fea296cd5582.png)

![图片不存在](./Arduino/media/d77dd3ef192740d9e3d321ea94eaa105.png)

![图片不存在](./Arduino/media/9f65a26855c17f2e34252ffab28c51d7.png)


**1.4. 在Arduino IDE上安装ESP32：**

上面已经学习了怎么下载ArduinoIDE和怎么安装驱动，那下面就要在Arduino IDE上安装ESP32，请执行以下步骤：

<span style="color: rgb(255, 76, 65);">特别注意：你需要Arduino IDE 1.8.5或更高版本才能在其上安装ESP32。</span>

(1)点击电脑桌面上的图标![图片不存在](./Arduino/media/2aa3f7ff09ff5841f1864c521af61cbd.png)，打开Arduino IDE。

![图片不存在](./Arduino/media/e50b14820c3bb291108dc8b9c0c12843.png)

(2)点击“文件” →“首选项”，如下图：

![图片不存在](./Arduino/media/339b8fc0220890b15cac94e7fefd8e7f.png)

(3)打开下图标出的按钮。

![图片不存在](./Arduino/media/dd6d3ea8b8ab77977ff2b2af74dbcdab.png)

(4)将这个地址：https://espressif.github.io/arduino-esp32/package_esp32_index.json ，复制粘贴到里面去再点击“**确定**”保存这个地址，如下图：

![图片不存在](./Arduino/media/0f4697f40d0e4c73cdaa36a15034e63b.png)

(5)再点击“**确定**”。

![图片不存在](./Arduino/media/11dd827f1f17588419bf7be03a47211d.png)

（6）先点击“**工具**”→“**开发版:**”，再点击“**开发版管理器...**”进入“**开发版管理器**”页面，在文本框中输入“**esp32**”，选择 <span style="color: rgb(255, 76, 65);">1.06</span> 版本进行安装，安装包不大，点击“**安装**”开始安装相关安装包。如下图：**<span style="color: rgb(255, 76, 0);">（特别提醒：选择更高版本或最新版本，可能会出现安装失败。）</span>**

![图片不存在](./Arduino/media/486d22dca3d5007c0866fe0dd4b3075e.png)

![图片不存在](./Arduino/media/fe7700b0fc213248a7b2d09cd6fc20ae.png)

![图片不存在](./Arduino/media/26766efa26cbdaa8d507e52e40317158.png)

（7）点击“**工具**”→“**开发版:**”，就可以看到安装好的ESP32 Arduino，你可以在里面查看到各种不同型号ESP32开发板，选择对应的ESP32开发板型号。

![图片不存在](./Arduino/media/7d924f3a05df1addfd61d26a4b1f9eff.png)

![图片不存在](./Arduino/media/07bbc456b0cfb6f5393701025233b38b.png)

（8）设置好板型后，再选择正确的COM口（安装驱动成功后可看到对应COM口），设置如下图。

![图片不存在](./Arduino/media/65fcafd5ca192f1d566779a819e04d00.png)

![图片不存在](./Arduino/media/2cdb1757b32b480e3dac16aa8385e13c.png)

![图片不存在](./Arduino/media/3270b2614818b728fb3fdd4a45d239f9.png)

**2.Mac系统:**

![图片不存在](./Arduino/media/a94b5505840316715e4bc9badd0421ba.png)

**2.1.下载安装Arduino IDE:**

进入Arduino官方网站：[https://www.arduino.cc/en/software](https://www.arduino.cc/en/software) ，点击“**SOFTWARE**”进入下载页面，如下图所示：

![图片不存在](./Arduino/media/2f1dce89630be8f6fdd23f38ab7097ec.png)

**2.2.如何安装CP2102驱动程序：**

（注意：如果已经安装了驱动程序，则不需要再安装驱动；如果没有，则需要进行以下操作）
（1）用USB线将ESP32主板连接到你的MacOS系统电脑上，并打开Arduino IDE。

![图片不存在](./Arduino/media/a694cc7590112b9becc48e0ad33588ea.png)

（2）CP2102驱动下载链接：

[https://cn.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads](https://cn.silabs.com/developers/usb-to-uart-bridge-vcp-drivers?tab=downloads)

（3）点击下载MacOS 版本。

![图片不存在](./Arduino/media/a369c4f935f32560b84a9b3b756c7dc5.png)

（4）解压下载好的压缩包。

![图片不存在](./Arduino/media/43f7535e76478fc4bd3b4f7eb68ee068.png)

（5）打开文件夹，双击“SiLabsUSBDriverDisk.dmg”文件。

![图片不存在](./Arduino/media/e339ed4aa5a59a7ffbd426da57cc5522.png)

可以看到以下文件。

![图片不存在](./Arduino/media/ba80c239c55f073ad212e110898c9be5.png)

（6）双击“Install CP210x VCP Driver”，勾选“Don’t warn me when opening application on this disk image”并单击“Open”。

![图片不存在](./Arduino/media/b90f9fec981a67e60d6d973049c8480a.png)

（7）单击“Continue”。

![图片不存在](./Arduino/media/e3d154346714057c76f44a429d30bc75.png)

（8）先点击“Agree”，然后点击“Continue”。

![图片不存在](./Arduino/media/df1b62568fc2737d10bebe86364d6240.png)

（9）继续点击“Continue”，然后输入你的用户密码

![图片不存在](./Arduino/media/8d5943e9f17648b7b345f2cb921835e8.png)

![图片不存在](./Arduino/media/d5caae5575fc94e8837daad3675dd164.png)

（10）选择“Open Security Preferences”。

![图片不存在](./Arduino/media/36fe00477b7e98da6cd3f7d4e074c489.png)

（11）点击安全锁，输入你的用户密码来授权。

![图片不存在](./Arduino/media/4889cc38b37c1df851c7772aa1f74fe4.png)

![图片不存在](./Arduino/media/85556fc015cdb38f51375ace1c498585.png)


（12）看到锁被打开了，点击“Allow”。

![图片不存在](./Arduino/media/bb9213f09221a88dee06bd4ff792cd4c.png)

（13）回到安装界面，根据提示等待安装.

![图片不存在](./Arduino/media/d49cc02c9a101542bb4a8572da600dfe.png)

（14）安装成功

![图片不存在](./Arduino/media/dead537234a8ea1a9feab59bc451eebb.png)

**2.3. 在Arduino IDE上安装ESP32：**

上面已经学习了怎么下载ArduinoIDE和怎么安装驱动，那下面就要在Arduino IDE上安装ESP32，请执行以下步骤：

<span style="color: rgb(255, 76, 65);">特别注意：你需要Arduino IDE 1.8.5或更高版本才能在其上安装ESP32。</span>

(1)点击电脑桌面上的图标![图片不存在](./Arduino/media/2aa3f7ff09ff5841f1864c521af61cbd.png)，打开Arduino IDE。点击“Arduino IDE” →“首选项”，如下图：

![图片不存在](./Arduino/media/9a1550c0afb15d603b35c14fc7eb9419.png)

(2)打开下图标出的按钮

![图片不存在](./Arduino/media/2021aa4872f771da0789e9d4d35c778e.png)

(3)将这个地址：https://espressif.github.io/arduino-esp32/package_esp32_index.json ，复制粘贴到里面去再点击“**确定**”保存这个地址，如下图：

![图片不存在](./Arduino/media/01edadc223784029595d586e60336c53.png)

(4)再点击“**确定**”。

![图片不存在](./Arduino/media/f88fa3fc64d0e88254ed1f1960ff20cf.png)

（5）先点击“**工具**”→“**开发版:**”，，再点击“**开发版管理器...**”进入“**开发版管理器**”页面，在文本框中输入“**esp32**”，选择 <span style="color: rgb(255, 76, 65);">1.06</span> 版本进行安装，安装包不大，点击“**安装**”开始安装相关安装包。如下图：**<span style="color: rgb(255, 76, 0);">（特别提醒：选择更高版本或最新版本，可能会出现安装失败。）</span>**

![图片不存在](./Arduino/media/b190d9a92887ff3f38fd00f9ef6a7bc6.png)

![图片不存在](./Arduino/media/1bd7dab9f8e78713466d019451110080.png)

![图片不存在](./Arduino/media/032996f813d7ccb74e4c6c8a6a13486f.png)

（6）点击“**工具**”→“**开发版:**”，就可以看到安装好的ESP32 Arduino，你可以在里面查看到各种不同型号ESP32开发板，选择对应的ESP32开发板型号。

![图片不存在](./Arduino/media/40fb53f0ba1f781650ac404f8a25a3b6.png)

（7）设置好板型后，再选择正确的COM口（安装驱动成功后可看到对应COM口），设置如下图。

![图片不存在](./Arduino/media/b240beb6e80e99e17c399d6d65f03fb4.png)

**3.添加arduino库文件**

<span style="color: rgb(0, 209, 0); background: rgb(255, 251, 0);">特别提醒：库文件在上面 **<span style="color: rgb(255, 76, 65);">资料下载</span>** 处提供有，请下载并且安装好库文件。</span>

我们提供的Arduino库文件的路径：**<span style="color: rgb(0, 209, 0);">..\库文件\Arduino_C_Windows系统</span>**。如下图：

![图片不存在](./Arduino/media/3246c24f086499d7a4acf7aed84e44b7.png)

**3.1. Windows系统添加库文件的方法：**

（1）打开Arduino IDE![图片不存在](./Arduino/media/0c8b09d3670cabd5f21d0528dd77796b.png)，在Arduino IDE界面点击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。

![图片不存在](./Arduino/media/f82d63c799a10f799b43831596ea78cc.png)

（2）找到库文件存放的位置，选中对应的库文件，点击“**打开**”添加即可。库文件只能一个一个的添加。（<span style="color: rgb(255, 76, 65);">注意：库文件需要压缩为 **.ZIP**格式，我们在文件夹中是以 **.ZIP** 格式提供有；这里以“**ESP32Servo-0.8.0.ZIP**”为演示，其他库文件的添加方法是一样的。</span>）。

![图片不存在](./Arduino/media/4cfe33d7feaf2a225dbb4b8ff87af6ee.png)

**3.2. MacOS系统的库文件添加方法:** 

（1）arduino IDE界面选择“**项目**” > “**包含库**” > “**添加.ZIP库...**”。

![图片不存在](./Arduino/media/bc7d51aaa2a4b4f2c3bacfc3f46ebd7f.png)

（2）找到库文件存放的位置，选中对应的库文件，点击“**打开**”添加即可。库文件只能一个一个的添加。（<span style="color: rgb(255, 76, 65);">这里以添加“ESP32Servo-0.8.0.ZIP”库文件为例，其他库文件的添加方法一样</span>），如下图：

![图片不存在](./Arduino/media/c95f39de692bb64b76467c088d7ad355.png)

到这，正常是安装成功的了。


## 项目01 Hello World

**1.项目介绍：**

对于ESP32的初学者，我们将从一些简单的东西开始。在这个项目中，你只需要一个ESP32主板，USB线和电脑就可以完成“Hello World!”项目。它不仅是ESP32主板和电脑的通信测试，也是ESP32的初级项目。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
| :--: | :--: |
| ESP32*1 | USB 线*1 |

**3.项目接线：**

在本项目中，我们通过USB线将ESP32和电脑连接起来。

![图片不存在](./Arduino/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

**4.项目代码：**

你可以打开我们提供的代码，本项目中使用的代码保存在（即路径)：**..\程序代码\Arduino_C_Windows系统_代码**。（**<span style="color: rgb(255, 76, 65);">后面的项目代码保存的路径也一样，即：同下</span>。**）

```
//*************************************************************************************
/*
 * 文件名 : Hello World
 * 描述 : 输入字母R，串口显示“Hello World”.
*/
char val;// 定义变量val
void setup()
{
Serial.begin(115200);// 设置波特率为115200
}
void loop()
{
  if (Serial.available() > 0) {
    val=Serial.read();// 读取并赋值给val
    if(val=='R')// 检查输入的字母“R”
    {  // 如果是这样的话,    
     Serial.println("Hello World!");// 显示“Hello World !”.
    }
  }
}
//*************************************************************************************

```
在上传项目代码到ESP32之前，点击“**工具**”→“**开发板**”，选择“**ESP32 Wrover Module**”。（**<span style="color: rgb(255, 76, 65);">后面上传项目代码的步骤也一样，即：同下</span>。**）

![图片不存在](./Arduino/media/e4e1d7c497e408cf00cebfa63b6ef7eb.png)

选择正确的端口（COM）。(<span style="color: rgb(255, 76, 65);">注意：</span>将ESP32主板通过USB线连接到计算机后才能看到对应的端口。)

![图片不存在](./Arduino/media/f4a42b32cce8472c2033bab12ad2c82a.png)

<span style="color: rgb(255, 76, 65);">注意：</span>对于macOS用户，如果上传失败，在单击之前，请设置波特率为**115200**。

![图片不存在](./Arduino/media/8c7346fc57c7d09ec75b5fb60d83ef67.png)

单击![图片不存在](./Arduino/media/86b9e2ff982873d7304e9ba692e7f0da.png)将项目代码上传到ESP32主板上。

![图片不存在](./Arduino/media/ce1eafb4ca085a0e732750e1dfec0fd9.png)

<span style="color: rgb(255, 76, 65);">注意：</span> 如果上传代码不成功，可以再次点击![图片不存在](./Arduino/media/86b9e2ff982873d7304e9ba692e7f0da.png)后用手按住ESP32主板上的Boot键![图片不存在](./Arduino/media/a3ce49fbd6f40f09869aa7e1d9f902f8.png)，出现上传进度百分比数后再松开Boot键，如下图所示：

![图片不存在](./Arduino/media/0fdadbed575d5f54ae1ca9405c3647cb.png)

项目代码上传成功！

![图片不存在](./Arduino/media/429b498bda8415f70866f28e6b9569ed.png)

**5.项目结果：** 

项目代码上传成功后，单击图标![图片不存在](./Arduino/media/c15895718b4de5012fcb63ad6a767d00.png)进入串行监视器，设置波特率为115200，在文本框输入字母“R”，按下回车键(Enter 键)，这样串口监视器打印“Hello World!”。

![图片不存在](./Arduino/media/131f86617fbf04fbccc219bdd8a83111.png)



## 项目02 点亮LED

**1.项目介绍：**

在这个项目中，我们将向你展示点亮LED。我们使用ESP32的数字引脚打开LED，使LED被点亮。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|
|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*1|跳线*2|USB 线*1|

**3.元件知识：**

**（1）LED**

![图片不存在](./Arduino/media/32369e035f09fa12898e90cd3f916cbe.png)

LED是一种被称为“发光二极管”的半导体，是一种由半导体材料(硅、硒、锗等)制成的电子器件。它有正极和负极。短腿为负极，接GND，长腿为正极，接3.3V或5V。

![图片不存在](./Arduino/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

**（2）五色环电阻**

电阻是电路中限制或调节电流流动的电子元件。左边是电阻器的外观，右边是电阻在电路中表示的符号。电阻(R)的单位为欧姆(Ω)，1 mΩ= 1000 kΩ，1kΩ= 1000Ω。
   
我们可以使用电阻来保护敏感组件，如LED。电阻的强度（以Ω为单位）用小色环标记在电阻器的主体上。每种颜色代表一个数字，你可以用电阻对照卡查找。

![图片不存在](./Arduino/media/e60472f717ced1cc0bd94f4972ef0cd0.png)

在这个套件中，我们提供了3个具有不同电阻值的五色环电阻。这里以3个五色环电阻为例：

220Ω电阻×10

![图片不存在](./Arduino/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

10KΩ电阻×10

![图片不存在](./Arduino/media/2d3f0996515352c92c07d17e074e7308.png)

1KΩ电阻×10

![图片不存在](./Arduino/media/931d1535563f6d817300f97c0946a01c.png)

在相同的电压下，会有更小的电流和更大的电阻。电流、电压、电阻之间的联系可以用公式表示：I=U/R。在下图中，目前通过R1的电流: I = U / R = 3 V / 10 KΩ= 0.0003A= 0.3mA。

![图片不存在](./Arduino/media/997accddd11490d13b769b9f3477daa7.png)

不要把电阻值很低的电阻直接连接在电源两极，这样会使电流过高而损坏电子元件。电阻是没有正负极之分。

**（3）面包板**

面包板是实验室中用于搭接电路的重要工具。面包板上有许多孔，可以插入集成电路和电阻等电路元件。熟练掌握面包板的使用方法是提高实验效率，减少实验故障出现几率的重要基础之一。下面就面包板的结构和使用方法做简单介绍。一个典型的面包板如下所示：

![图片不存在](./Arduino/media/d4cb46e6b01d820bb150f0e8a122417e.png)

面包板的外观和内部结构如上图所示，常见的最小单元面包板分上、中、下三部分，上面和下面部分一般是由一行或两行的插孔构成的窄条，中间部分是由中间一条隔离凹槽和上下各5 行的插孔构成的条。

![图片不存在](./Arduino/media/2e9ef45f88652609af40b031ed0f0084.png)

在面包板的两个窄条分别有两行插孔，两行之间是不连通的，一般是作为电源引入的通路。上方第一行标有“+”的一行有10组插孔（内部都是连通），均为正极；上方第二行标有“-”的一行有10组插孔，（内部都是连通），均为接地。面包板下方的第一行与第二行结构同上。如需用到整个面包板，通常将“+”与“+”用导线连接起来，“-”与“-”用导线连接起来。

中间部分宽条是由中间一条隔离凹槽和上下各5 行的插孔构成。在同一列中的5 个插孔是互相连通的，列和列之间以及凹槽上下部分则是不连通的。外观及结构如下图：

![图片不存在](./Arduino/media/8690e125a8f918f5e2b7950526e98ebb.png)

中间部分宽条的连接孔分为上下两部分，是面包板的主工作区，用来插接原件和跳线。在同一列中的5个插孔（即a-b-c-d-e，f-g-h-i-j）是互相连通的；列和列之间以及凹槽上下部分是不连通的。在做实验的时候，通常是使用两窄一宽组成的小单元，在宽条部分搭接电路的主体部分，上面的窄条取一行做电源，下面的窄条取一行做接地。中间宽条用于连接电路，由于凹槽上下是不连通的，所以集成块一般跨插在凹槽上。

**(4)电源**

ESP32需要3.3V-5V电源，在本项目中，我们通过用USB线将ESP32和电脑连起来。

![图片不存在](./Arduino/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

**4.项目接线图：**

首先，切断ESP32的所有电源。然后根据接线图搭建电路。电路搭建好并验证无误后，用USB线将ESP32连接到电脑上。

<span style="color: rgb(255, 76, 65);">注意：</span>避免任何可能的短路(特别是连接3.3V和GND)!

<span style="color: rgb(255, 76, 65);">警告：短路可能导致电路中产生大电流，造成元件过热，并对硬件造成永久性损坏。</span>

![图片不存在](./Arduino/media/6d79aa47daab6bc5dc46b1e62215d9c8.png)

<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Arduino/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻

![图片不存在](./Arduino/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

**5.项目代码：**

你可以打开我们提供的代码，本项目中使用的代码保存在（即路径)：**..\程序代码\Arduino_C_Windows系统_代码**。（**<span style="color: rgb(255, 76, 65);">后面的项目代码保存的路径也一样，即：同下</span>。**）

```
//**********************************************************************
/*
 * 文件名 : 点亮LED
 * 描述 : 点亮一盏灯.
*/
#define LED_BUILTIN 15

// 复位或单板上电时，setup功能只运行一次
void setup() {
  // 初始化数字引脚LED_BUILTIN作为输出.
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // 打开LED (HIGH为高电平)
}
//*************************************************************************************

```
在上传项目代码到ESP32之前，点击“**工具**”→“**开发板**”，选择“**ESP32 Wrover Module**”。（**<span style="color: rgb(255, 76, 65);">后面上传项目代码的步骤也一样，即：同下</span>。**）

![图片不存在](./Arduino/media/9b0703c5d3b7f1bdcd8de3bfe70eff7c.png)

选择正确的端口（COM）。(<span style="color: rgb(255, 76, 65);">注意：</span>将ESP32主板通过USB线连接到计算机后才能看到对应的端口。)

![图片不存在](./Arduino/media/28bd4716860a4962f12d7ffe42b989a8.png)

<span style="color: rgb(255, 76, 65);">注意：</span>对于macOS用户，如果上传失败，在单击之前，请设置波特率为**115200**。

![图片不存在](./Arduino/media/b737d2c5724e49b69ab472e2b369e543.png)

单击![图片不存在](/media/上传img-20230418112107.png)将项目代码上传到ESP32主板上。

![图片不存在](./Arduino/media/e32cec541e8479b04aa7eddfa26045e2.png)

<span style="color: rgb(255, 76, 65);">注意：</span> 如果上传代码不成功，可以再次点击![图片不存在](./Arduino/media/86b9e2ff982873d7304e9ba692e7f0da.png)后用手按住ESP32主板上的Boot键![图片不存在](./Arduino/media/a3ce49fbd6f40f09869aa7e1d9f902f8.png)，出现上传进度百分比数后再松开Boot键，如下图所示：

![图片不存在](./Arduino/media/0fdadbed575d5f54ae1ca9405c3647cb.png)

项目代码上传成功！

![图片不存在](./Arduino/media/413f0f5221cedb45f82c108f6b5e1ab2.png)

**6.项目现象：**

项目代码上传成功后，利用USB线供电，LED被点亮。

![图片不存在](./Arduino/media/96672306fbbac2d8b33a55315d0d8fc5.png)





## 项目03 LED闪烁

**1.项目介绍：**

在这个项目中，我们将向你展示LED闪烁效果。我们使用ESP32的数字引脚打开LED，让它闪烁。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|
|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*1|跳线*2|USB 线*1|

**3.项目接线图：**

首先，切断ESP32的所有电源。然后根据电路图和接线图搭建电路。电路搭建好并验证无误后，用USB线将ESP32连接到电脑上。

<span style="color: rgb(255, 76, 65);">注意：</span>避免任何可能的短路(特别是连接3.3V和GND)!

<span style="color: rgb(255, 76, 65);">警告：短路可能导致电路中产生大电流，造成元件过热，并对硬件造成永久性损坏。 </span>

![图片不存在](./Arduino/media/6d79aa47daab6bc5dc46b1e62215d9c8.png)


<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Arduino/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻

![图片不存在](./Arduino/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

**4.项目代码：**

你可以打开我们提供的代码，本项目中使用的代码保存在（即路径)：**..\程序代码\Arduino_C_Windows系统_代码**。（**<span style="color: rgb(255, 76, 65);">后面的项目代码也一样，即：同下</span>。**）

```
//**********************************************************************
/*
 * 文件名 : LED 闪烁
 * 描述 : 让led闪烁.
*/
#define PIN_LED   15   //定义led引脚

// 复位或单板上电时，setup功能只运行一次
void setup() {
  // 初始化数字引脚LED作为输出.
  pinMode(PIN_LED, OUTPUT);
}

// 循环函数永远重复运行
void loop() {
  digitalWrite(PIN_LED, HIGH);   // 打开LED (HIGH为高电平)
  delay(500);                       // 延时 0.5s
  digitalWrite(PIN_LED, LOW);    // 关闭LED，使电压低
  delay(500);                       // 延时 0.5s
}
//*************************************************************************************

```
在上传项目代码到ESP32之前，请检查Arduino IDE的配置。（**<span style="color: rgb(255, 76, 65);">后面上传项目代码的步骤也一样，即：同下</span>。**）

单击“**工具**”，确认“**开发板**”板型和“**端口(COM)**”，如下所示：(<span style="color: rgb(255, 76, 65);">注意：</span>将ESP32主板通过USB线连接到计算机后才能看到对应的端口。)

![图片不存在](./Arduino/media/dd983623a3bd853f4d8d567d8c0d0e63.png)

单击![图片不存在](./Arduino/media/86b9e2ff982873d7304e9ba692e7f0da.png)将项目代码上传到ESP32主板上。

![图片不存在](./Arduino/media/7293f3ff10f053da942b3d72c31a6517.png)

<span style="color: rgb(255, 76, 65);">注意：</span> 如果上传代码不成功，可以再次点击![图片不存在](./Arduino/media/86b9e2ff982873d7304e9ba692e7f0da.png)后用手按住ESP32主板上的Boot键![图片不存在](./Arduino/media/a3ce49fbd6f40f09869aa7e1d9f902f8.png)，出现上传进度百分比数后再松开Boot键，如下图所示：

![图片不存在](./Arduino/media/0fdadbed575d5f54ae1ca9405c3647cb.png)

项目代码上传成功！

![图片不存在](./Arduino/media/4c4de10253147bcb786652053647f5f3.png)

**5.项目现象：**

项目代码上传成功后，利用USB线上电，可以看到的现象是：可以看到电路中的LED会反复闪烁。

![图片不存在](./Arduino/media/bbd161f32b47a175d78773391bd7b0c1.png)











## 项目04 呼吸灯

**1.项目介绍：**

在之前的研究中，我们知道LED有亮/灭状态，那么如何进入中间状态呢?如何输出一个中间状态让LED“半亮”?这就是我们将要学习的。呼吸灯，即LED由灭到亮，再由亮到灭，就像“呼吸”一样。那么，如何控制LED的亮度呢?我们将使用ESP32的PWM来实现这个目标。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|
|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*1|跳线*2|USB 线*1|

**3.元件知识：**

![图片不存在](./Arduino/media/e739a6e4a95fa8bbbefb26ef955dc465.png)

**模拟信号 & 数字信号** 

模拟信号在时间和数值上都是连续的信号。相反，数字信号或离散时间信号是由一系列数字组成的时间序列。生活中的大多数信号都是模拟信号，一个熟悉的模拟信号的例子是：全天的温度是连续不断变化的，而不是突然从0到10的瞬间变化。然而，数字信号的值可以瞬间改变。这个变化用数字表示为1和0(二进制代码的基础)。如下图所示，我们可以更容易地看出它们的差异。

![图片不存在](./Arduino/media/550c1d587189ce5ac3678f44b08ac888.png)

在实际应用中，我们经常使用二进制作为数字信号，即一系列的0和1。由于二进制信号只有两个值(0或1)，因此具有很大的稳定性和可靠性。最后，可以将模拟信号和数字信号相互转换。

**PWM：**

脉宽调制(PWM)是一种利用数字信号控制模拟电路的有效方法。普通处理器不能直接输出模拟信号。PWM技术使这种转换(将数字信号转换为模拟信号)非常方便。PWM技术利用数字引脚发送一定频率的方波，即高电平和低电平的输出，交替持续一段时间。每一组高电平和低电平的总时间一般是固定的，称为周期(注:周期的倒数是频率)。高电平输出的时间通常称为脉宽，占空比是脉宽(PW)与波形总周期(T)之比的百分比。高电平输出持续时间越长，占空比越长，模拟信号中相应的电压也就越高。下图显示了对应于脉冲宽度0%-100%的模拟信号电压在0V-3.3V(高电平为3.3V)之间的变化情况.

![图片不存在](./Arduino/media/0c29da4ca7a2fee2f5a0078eacc9e88a.png)

PWM占空比越长，输出功率越高。既然我们了解了这种关系，我们就可以用PWM来控制LED的亮度或直流电机的速度等等。从上面可以看出，PWM并不是真实的模拟信号，电压的有效值等于相应的模拟信号。因此，我们可以控制LED和其他输出模块的输出功率，以达到不同的效果。

**ESP32 与 PWM**

在ESP32上，LEDC(PWM)控制器有16个独立通道，每个通道可以独立控制频率，占空比，甚至精度。与传统的PWM引脚不同，ESP32的PWM输出引脚是可配置的，每个通道有一个或多个PWM输出引脚。最大频率与比特精度的关系如下公式所示：

![图片不存在](./Arduino/media/c6afada712f786a0827ced2172fed124.png)

其中比特的最大值为31。例如: 生成PWM的8位精度(2ˆ8 = 256。取值范围为0 ~ 255)，最大频率为80,000,000/255 = 312,500Hz。)

**4.项目接线图：** 

![图片不存在](./Arduino/media/6d79aa47daab6bc5dc46b1e62215d9c8.png)

**5.项目代码：**

<span style="color: rgb(255, 76, 65);">本项目设计使GPIO15 输出PWM，脉宽由0%逐渐增加到100%，再由100%逐渐减小到0%。</span>

```
//**********************************************************************
/*
 * 文件名 : 呼吸灯
 * 描述 : 让led灯像呼吸一样忽亮忽灭.
*/
#define PIN_LED   15   //定义led引脚
#define CHN       0   //定义PWM通道
#define FRQ       1000  //定义PWM频率
#define PWM_BIT   8     //定义PWM精度
void setup() {
  ledcSetup(CHN, FRQ, PWM_BIT); //设置PWM通道
  ledcAttachPin(PIN_LED, CHN);  //将led引脚连接到PWM通道
}

void loop() {
  for (int i = 0; i < 255; i++) { //让LED逐渐变亮
    ledcWrite(CHN, i);
    delay(10);
  }
  for (int i = 255; i > -1; i--) {  //让LED逐渐变暗
    ledcWrite(CHN, i);
    delay(10);
  }
}
//*************************************************************************************

```
在上传项目代码到ESP32之前，请检查Arduino IDE的配置。（**<span style="color: rgb(255, 76, 65);">后面上传项目代码的步骤也一样，即：同下</span>。**）

单击“**工具**”，确认“**开发板**”板型和“**端口(COM)**”，如下所示：(<span style="color: rgb(255, 76, 65);">注意：</span>将ESP32主板通过USB线连接到计算机后才能看到对应的端口。)

![图片不存在](./Arduino/media/a4061989d2cb2a0c1a05207221a4e4fd.png)

单击![图片不存在](./Arduino/media/86b9e2ff982873d7304e9ba692e7f0da.png)将项目代码上传到ESP32主板上。

![图片不存在](./Arduino/media/e09f8dc6c566e5779e998429cc3bf36e.png)

<span style="color: rgb(255, 76, 65);">注意：</span> 如果上传代码不成功，可以再次点击![图片不存在](./Arduino/media/86b9e2ff982873d7304e9ba692e7f0da.png)后用手按住ESP32主板上的Boot键![图片不存在](./Arduino/media/a3ce49fbd6f40f09869aa7e1d9f902f8.png)，出现上传进度百分比数后再松开Boot键，如下图所示：

![图片不存在](./Arduino/media/0fdadbed575d5f54ae1ca9405c3647cb.png)

项目代码上传成功！

![图片不存在](./Arduino/media/3e171796edf4758bb1835fafc8750ea8.png)

**6.项目现象：**

项目代码上传成功后，利用USB线上电，可以看到的现象是：电路中的LED从暗逐渐变亮，再从亮逐渐变暗，就像呼吸一样。

![图片不存在](./Arduino/media/7a0d2717b48056cbef36f880212d8e07.png)




## 项目05 交通灯

**1.项目介绍：**

交通灯在我们的日常生活中很普遍。根据一定的时间规律，交通灯是由红、黄、绿三种颜色组成的。每个人都应该遵守交通规则，这可以避免许多交通事故。在这个项目中，我们将使用ESP32和一些led(红，黄，绿)来模拟交通灯。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/325f351a1cc5c9af86988ddafd03fa19.png)|![图片不存在](./Arduino/media/36f39ba5899a86990d02500371bc0e77.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|黄色 LED*1|
|![图片不存在](./Arduino/media/f361df3b38005087cb22efc34689d554.png)|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|绿色LED*1|220Ω电阻*3|跳线若干|USB 线*1|

**3.项目接线图：** 

![图片不存在](./Arduino/media/6122c8ef01c7a01dc5491df1c73a00b1.png)

**4.项目代码：**

```
//**********************************************************************
/*
 * 文件名  : 交通灯
 * 描述 : 模拟交通灯.
*/
#define PIN_LED_RED   0   //定义红色引脚
#define PIN_LED_YELLOW   2   //定义黄色引脚
#define PIN_LED_GREEN  15   //定义绿色引脚

void setup() {
  pinMode(PIN_LED_RED, OUTPUT);
  pinMode(PIN_LED_YELLOW, OUTPUT);
  pinMode(PIN_LED_GREEN, OUTPUT);
}

void loop() {
   digitalWrite(PIN_LED_RED, HIGH);// 点亮红色的灯
   delay(5000);// 延时 5 s
   digitalWrite(PIN_LED_RED, LOW); // 熄灭红色的灯
   delay(500);// 延时 0.5 s
   for(int i=0;i<3;i++)// 闪烁 3 次.
  {
   digitalWrite(PIN_LED_YELLOW, HIGH);// 点亮黄色的灯
   delay(500);// 延时 0.5 s
   digitalWrite(PIN_LED_YELLOW, LOW);// 熄灭黄色的灯
   delay(500);// 延时 0.5 s
   } 
   digitalWrite(PIN_LED_GREEN, HIGH);// 点亮绿色的灯
   delay(5000);// 延时 5 s
   digitalWrite(PIN_LED_GREEN, LOW);// 
  delay(500);// 延时 0.5 s
}
//*************************************************************************************

```

**5.项目现象：**

项目代码上传成功后，利用USB线上电，你会看到的现象是：1.首先，红灯会亮5秒，然后熄灭；2.其次，黄灯会闪烁3次，然后熄灭；3.然后，绿灯会亮5秒，然后熄灭；4.继续运行上述1-3个步骤。

![图片不存在](./Arduino/media/88468668fc5f1d198863c79778862194.png)









## 项目06 RGB LED

![图片不存在](./Arduino/media/bd43dadde69fa133646046983ca30f0f.png)

**1.项目介绍：**

RGB led由三种颜色(红、绿、蓝)组成，通过混合这三种基本颜色可以发出不同的颜色。在这个项目中，我们将向你介绍RGB LED，并向你展示如何使用ESP32控制RGB LED发出不同的颜色光。即使RGB LED是非常基本的，但这也是一个介绍自己或他人电子和编码基础的伟大方式。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/6de88c5b9c38d8ab879ae91eb51431b7.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|RGB LED*1|
|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*3|跳线若干|USB 线*1|

**3.元件知识：**

显示器大多遵循RGB颜色标准，电脑屏幕上的所有颜色都是由红、绿、蓝三种颜色以不同比例混合而成。 

![图片不存在](./Arduino/media/ae51546482ff149a5cd40ead3d110bc8.png)

这个RGB LED有4个引脚，每个颜色(红，绿，蓝)和一个共同的阴极。为了改变RGB led的亮度，我们可以使用ESP的PWM引脚。PWM引脚会给RGB led不同占空比的信号以获得不同的颜色。

如果我们使用3个10位PWM来控制RGBLED，理论上我们可以通过不同的组合创建2^10 ×2^10 ×2^10= 1,073,741,824(10亿)种颜色。

**4.项目接线图：**

![图片不存在](./Arduino/media/a89020210f9ff33ca99ddf347cc86a21.png)

**5.项目代码：**

```
//**********************************************************************
/*
 * 文件名  : RGB LED
 * 描述 : 使用RGB 显示随机颜色.
*/
int ledPins[] = {0, 2, 15};    //定义红、绿、蓝引脚
const byte chns[] = {0, 1, 2};        //定义PWM通道
int red, green, blue;
void setup() {
  for (int i = 0; i < 3; i++) {   //设置pwm通道，1KHz,8bit
    ledcSetup(chns[i], 1000, 8);
    ledcAttachPin(ledPins[i], chns[i]);
  }
}

void loop() {
  red = random(0, 256);
  green = random(0, 256);
  blue = random(0, 256);
  setColor(red, green, blue);
  delay(200);
}

void setColor(byte r, byte g, byte b) {
  ledcWrite(chns[0], 255 - r); //共阴极LED，高电平开启LED.
  ledcWrite(chns[1], 255 - g);
  ledcWrite(chns[2], 255 - b);
}
//*************************************************************************************

```


**6.项目现象：**

代码上传成功后，利用USB线上电后，你会看到的现象是：RGB LED开始显示随机颜色。

![图片不存在](./Arduino/media/b926527c01e66d984f86facdb97e10fc.png)


























## 项目07 流水灯

**1.项目介绍：**

在日常生活中，我们可以看到许多由不同颜色的led组成的广告牌。他们不断地改变灯光(像流水一样)来吸引顾客的注意。在这个项目中，我们将使用ESP32控制10个leds实现流水的效果。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*10|
|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*10|跳线若干|USB 线*1|

**3.项目接线图:**

![图片不存在](./Arduino/media/5a5c21da428df050a30ce9947810486a.png)

**4.项目代码：**

本项目是设计制作一个流水灯。这是这些行动：首先打开LED #1，然后关闭它。然后打开LED #2，然后关闭…并对所有10个LED重复同样的操作，直到最后一个LED关闭。这一过程反复进行，以实现流水的“运动”。

```
//**********************************************************************
/* 
 * 文件名 : 流水灯
 * 描述 : 用十个led来演示流动灯
*/
byte ledPins[] = {22, 21, 19, 18, 17, 16, 4, 0, 2, 15};
int ledCounts;

void setup() {
  ledCounts = sizeof(ledPins);
  for (int i = 0; i < ledCounts; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < ledCounts; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = ledCounts - 1; i > -1; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}
//**********************************************************************

```
ESP32主板通过USB线连接到计算机后开始上传代码。为了避免将代码上传至ESP32主板时出现错误，必须选择与计算机连接正确的控制板和端口（COM）。

点击“**工具**”→“**开发板**”，可以查看到各种不同型号ESP32开发板，选择对应的ESP32开发板型号。

点击“**工具**”→“**端口**”，选择对应的端口（COM）。

**注意：将ESP32主板通过USB线连接到计算机后才能看到对应的端口（COM）**。

单击![图片不存在](./Arduino/media/86b9e2ff982873d7304e9ba692e7f0da.png)将代码上传到ESP32主控板。

**5.项目现象：**

代码上传成功后，利用USB线上电后，你会看到的现象是：10个LED将从左到右点亮，然后从右到左返回。

![图片不存在](./Arduino/media/7546b1e47be75d184578949aba70ee0a.png)

<span style="color: rgb(255, 76, 65);">注意：</span> 如果上传代码不成功，可以再次点击![图片不存在](./Arduino/media/86b9e2ff982873d7304e9ba692e7f0da.png)后用手按住ESP32主板上的Boot键![图片不存在](./Arduino/media/a3ce49fbd6f40f09869aa7e1d9f902f8.png)，出现上传进度百分比数后再松开Boot键，如下图所示：

![图片不存在](./Arduino/media/0fdadbed575d5f54ae1ca9405c3647cb.png)























## 项目08 一位数码管

**1.项目介绍：**

七段数码管是一种显示十进制数字的电子显示设备，广泛应用于数字时钟、电子仪表、基本计算器和其他显示数字信息的电子设备。甚至我们在电影中看到的炸弹也有七段数码管。也许七段数码管看起来不够现代，但它们是更复杂的点阵显示器的替代品，在有限的光线条件下和强烈的阳光下都很容易使用。在这个项目中，我们将使用ESP32控制一位数码管显示数字。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/205aad52163781b8f1857212f1011848.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|一位数码管*1|
|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*8|跳线若干|USB 线*1|

**3.元件知识：**

![图片不存在](./Arduino/media/24cd9e937ce10d6bd7bd04581d758894.png)

**一位数码管显示原理：** 数码管显示是一种半导体发光器件。它的基本单元是一个发光二极管(LED)。数码管显示根据段数可分为7段数码管和8段数码管。8段数码管比7段多一个LED单元(用于小数点显示)。七段LED显示屏的每段是一个单独的LED。根据LED单元接线方式，数码管可分为共阳极数码管和共阴极数码管。

在共阴极7段数码管中，分段LED的所有阴极(或负极)都连接在一起，你应该把共阴极连接到GND，要点亮一个分段LED，你可以将其关联的引脚设置为HIGH。

在共阳极7段数码管中，所有段的LED阳极(正极)都连接在一起，你应该把共阳极连接到+5V。要点亮一个分段LED，你可以将其关联的引脚设置为LOW。

![图片不存在](./Arduino/media/19ff4c77c2703c262a9cd5295724ae02.png)

数码管的每个部分由一个LED组成。所以当你使用它的时候，你也需要使用一个限流电阻。否则，LED会被烧坏。在这个实验中，我们使用了一个普通的<span style="color: rgb(255, 76, 65);">共阴极一位数码管</span>。正如我们上面提到的，你应该将公共阴极连接到GND。要点亮一个分段LED，你可以将其关联的引脚设置为HIGH。

**4.项目接线图：**

<span style="color: rgb(255, 76, 65);">注意：</span>插入面包板的七段数码管方向与接线图一致，右下角多一个点。

![图片不存在](./Arduino/media/b1774fdf03e96a8b6a16d03db21a93a0.png)

![图片不存在](./Arduino/media/da76f2ea8684ac4bb13d8b55d272977a.png)

**5.项目代码：**

数字显示分7段，小数点显示分1段。当显示某些数字时，相应的段将被点亮。例如，当显示数字1时，b和c段将被打开。

```
//**********************************************************************
/* 
 * 文件名 : 一位数码管
 * 描述 : 一位数管显示从9到0的数字.
*/
// 设置每个段的IO PIN
int a=16; // 段a的数字PIN 16
int b=4; // 段b的数字PIN 4
int c=5; // 段c的数字PIN 5
int d=18; // 段d的数字PIN 18
int e=19; // 段e的数字PIN 19
int f=22; // 段f的数字PIN 22
int g=23; // 段g的数字PIN 23
int dp=17; // 段dp的数字PIN 17
void digital_0(void) // 显示数字0
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
digitalWrite(dp,LOW);
}
void digital_1(void) // 显示数字 1
{
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
digitalWrite(dp,LOW);
}
void digital_2(void) // 显示数字 2
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,LOW);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,LOW);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void digital_3(void) // 显示数字 3
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(f,LOW);
digitalWrite(e,LOW);
digitalWrite(dp,LOW);
digitalWrite(g,HIGH);
}
void digital_4(void) // 显示数字 4
{
digitalWrite(a,LOW);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void digital_5(void) // 显示数字 5
{
digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void digital_6(void) // 显示数字 6
{
digitalWrite(a,HIGH);
digitalWrite(b,LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void digital_7(void) // 显示数字 7
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,LOW);
digitalWrite(e,LOW);
digitalWrite(f,LOW);
digitalWrite(g,LOW);
digitalWrite(dp,LOW);
}
void digital_8(void) // 显示数字 8
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void digital_9(void) // 显示数字 9
{
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void setup()
{
  // 初始化数字引脚LED作为输出.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
}
void loop()
{
while(1)
{
digital_9();// 显示数字 9
delay(1000); // 延时 1 s
digital_8();// 显示数字 8
delay(1000); 
digital_7();// 显示数字 7
delay(1000); 
digital_6();// 显示数字 6
delay(1000); 
digital_5();// 显示数字 5
delay(1000); 
digital_4();// 显示数字 4
delay(1000); 
digital_3();// 显示数字 3
delay(1000); 
digital_2();// 显示数字 2
delay(1000);
digital_1();// 显示数字 1
delay(1000);
digital_0();// 显示数字 0
delay(1000);
}}
//**********************************************************************

```


**6.项目现象：**

代码上传成功后，利用USB线上电后，你会看到的现象是：一位数码管将显示从9到0的数字。

![图片不存在](./Arduino/media/06886089efa6a52fef3a5e85cd3327cc.png)


















## 项目09 四位数码管

**1.项目介绍：**

四位数码管是一种非常实用的显示器件，电子时钟的显示，球场上的记分员，公园里的人数都是需要的。由于价格低廉，使用方便，越来越多的项目将使用4位数码管。在这个项目中，我们使用ESP32控制四位数码管来显示四位数字。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/f15a0b08c0d958f5dfdfb32716191ec3.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|四位数码管*1|
|![图片不存在](./Arduino/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| |
|4P转杜邦线公单*1|USB 线*1| |

**3.元件知识：**

**TM1650四位数码管：** 是一个12脚的带时钟点的四位共阴数码管（0.36英寸）的显示模块，驱动芯片为TM1650，只需2根信号线即可使单片机控制四位数码管。控制接口电平可为5V或3.3V。

G：电源负极

V：电源正极，+5V

DIO：数据IO模块，可以接任意的数字引脚

CLK：时钟引脚，可以接任意的数字引脚

**4位数码管模块规格参数：**

工作电压：DC 3.3V-5V

工作电流：≤100MA

最大功率：0.5W

数码管显示颜色：红色

**4位数码管模块原理图：**

![图片不存在](./Arduino/media/4538d30af565c84523cff49afdb3bc23.png)

**4.项目接线图：**

![图片不存在](./Arduino/media/201a07a111d6d75d084b34b1449d34d1.png)

**5.添加TM1650库：**

本项目代码使用了一个名为“<span style="color: rgb(255, 76, 65);">TM1650</span>”库。如果你已经添加好了“<span style="color: rgb(255, 76, 65);">TM1650</span>”库，则跳过此步骤。如果你还没有添加，请在学习之前安装它。添加第三方库的步骤如下:

**如何安装库？**

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\TM1650.ZIP**的文件，先选中**TM1650.ZIP** 文件，再单击“**打开**”。

![图片不存在](./Arduino/media/dea80008b893d0c145ebcb837a02a305.png)

![图片不存在](./Arduino/media/8815c6bb04a4757d74eedadb0a23ebb2.png)


**6.项目代码：**

```
//**********************************************************************
/* 
 * 文件名  : 四位数码管
 * 描述 : 四位数管显示数字从1111到9999.
*/
#include "TM1650.h"
#define CLK 22    //TM1650的引脚定义，可以更改为其他端口 
#define DIO 21
TM1650 DigitalTube(CLK,DIO);

void setup(){
  //DigitalTube.setBrightness();  //stes brightness 从0到7(默认为2)
  //DigitalTube.displayOnOFF();   // 0= off,1= on(默认 is 1)
  for(char b=1;b<5;b++){
    DigitalTube.clearBit(b);      //要清除哪位?
  }
  DigitalTube.displayDot(1,true); // 显示第一个数字
  DigitalTube.displayDot(2,true);
  DigitalTube.displayDot(3,true);
  DigitalTube.displayDot(4,true);
  DigitalTube.displayBit(3,0);    //显示哪个数字，位= 1~4, 数量= 0~9
}

void loop(){
  for(int num=0; num<10; num++){
    DigitalTube.displayBit(1,num);
    DigitalTube.displayBit(2,num);
    DigitalTube.displayBit(3,num);
    DigitalTube.displayBit(4,num);
    delay(1000);
  }  
 }
//**********************************************************************************

```


**6.项目现象：**

代码上传成功后，利用USB线上电后，你会看到的现象是：四位数码管显示四位数字0000-9999，并在一个无限循环中重复这些动作。

![图片不存在](./Arduino/media/148b24945f997203329eeb6512ad8758.png)























## 项目10 8×8点阵屏

**1.项目介绍：**

点阵屏是一种电子数字显示设备，可以显示机器、钟表、公共交通离场指示器和许多其他设备上的信息。在这个项目中，我们将使用ESP32控制8x8 LED点阵来显示图案。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/e308166f31da33d8f2aafe434f30765d.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|8×8点阵屏*1|
|![图片不存在](./Arduino/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| |
|4P转杜邦线公单*1|USB 线*1| |

**3.元件知识：**

**8×8点阵屏模块：** 8×8的点阵由64个LED组成，每个LED被放置在一排和一列的交叉点上。利用单片机驱动一个8×8点阵时，我们总共需要用到16个数字口，这样就极大的浪费单片机资料。为此，我们特别设计了这个模块，利用HT16K33芯片驱动1个8×8点阵，只需要利用单片机的I2C通信端口控制点阵，大大的节约了单片机资源。

**8×8点阵屏模块规格参数：**

工作电压：DC 5V

工作电流：≤200MA

最大功率：1W

**8×8点阵屏模块原理：**

如原理图所示，如果想要点亮第一行第一列的LED灯，只需要把C1置高电平，R1置低电平，它就亮了。如果我们想让第一行led全部点亮，那么我们让R1为低电平，C1~C8全部为高电平就可以了，原理非常简单。但是这样的话我们总共需要用到16个IO口，这样就极大的浪费单片机资源。为此，我们特别设计了这个模块，利用HT16K33芯片驱动1个8*8点阵，只需要利用单片机的I2C通信端口控制点阵，大大的节约了单片机资源。

![图片不存在](./Arduino/media/c801e1d07c28d035c58dbc28a60a60f0.png)

有些模块上自带3个拨码开关，可以让你随意拨动开关，这是用来设置I2C通信地址的，设置方法如下表格。我们的这个模块中，模块已经固定了通信地址，A0，A1，A2全部接地，即地址为0x70。

![图片不存在](./Arduino/media/f47e72b3793ada8b06806c7d8f88d3fe.png)

**4.项目接线图：**

![图片不存在](./Arduino/media/1d56829e3b1fa8bbf9a9a18091561ace.png)

**5.添加HT16K33_Lib_For_ESP32库：**

本项目代码使用了一个名为“<span style="color: rgb(255, 76, 65);">HT16K33_Lib_For_ESP32</span>”库。如果你已经添加好了“<span style="color: rgb(255, 76, 65);">HT16K33_Lib_For_ESP32</span>”库，则跳过此步骤。如果你还没有添加它，请在学习前先添加。

**如何安装库？**

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\HT16K33_Lib_For_ESP32.ZIP**的文件，先选中**HT16K33_Lib_For_ESP32.ZIP** 文件，再单击“**打开**”。

![图片不存在](./Arduino/media/14bc1abcf48ed5a4edc335b8ee8c4c6a.png)

![图片不存在](./Arduino/media/0d4c5348b121368fe673afa062b9fb50.png)

**6.项目代码：**


```
//**********************************************************************************
/*
 * 文件名 : 8×8 点阵屏
 * 描述 : 8x8 LED点阵显示“心”图案.
*/
#include "HT16K33_Lib_For_ESP32.h"

#define SDA 21
#define SCL 22

ESP32_HT16K33 matrix = ESP32_HT16K33();

//亮度值可以从1到15设置，其中1个最暗，15个最亮
#define  A  15

byte result[8][8];
byte test1[8] = {0x00,0x42,0x41,0x09,0x09,0x41,0x42,0x00};

void setup()
{
  matrix.init(0x70, SDA, SCL);//初始化矩阵
  matrix.showLedMatrix(test1,0,0);
  matrix.show();
}

void loop()
{
  for (int i = 0; i <= 7; i++)
  {
    matrix.setBrightness(i);
    delay(100);
  }
  for (int i = 7; i > 0; i--)
  {
    matrix.setBrightness(i);
    delay(100);
  }
}
//**********************************************************************************

```



**6.项目现象：**

代码上传成功后，利用USB线上电，你会看到的现象是：8*8点阵屏显示“笑脸”图案。

![图片不存在](./Arduino/media/dd4c7550a19eeb300c3f77107bcdda75.png)





















## 项目11 74HC595N控制8个LED

**1.项目介绍：**

在之前的项目中，我们已经学过了怎样点亮一个LED。

ESP32上只有32个IO端口，我们如何点亮大量的led呢? 有时可能会耗尽ESP32上的所有引脚，这时候就需要用移位寄存器扩展它。你可以使用74HC595N芯片一次控制8个输出，而只占用你的微控制器上的几个引脚。你还可以将多个寄存器连接在一起，以进一步扩展输出，在这个项目中，我们将使用ESP32，74HC595芯片和LED制作一个流水灯来了解74HC595芯片的功能。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/44e4bc7bbc88eafd59a57fc4876f6725.png)|![图片不存在](./Arduino/media/0bec60f258b235ba8a8a332fd1b6e5fe.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|74HC595N芯片*1|红色LED*8|
|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| |
|220Ω电阻*8|跳线若干|USB 线*1| |

**3.元件知识：**

![图片不存在](./Arduino/media/46bf6b6fb5968bea5b7fd226a6f95567.png)

**74HC595N芯片：** 简单来说就是具有8 位移位寄存器和一个存储器，以及三态输出功能。移位寄存器和存储器同步于不同的时钟，数据在移位寄存器时钟SCK的上升沿输入，在存储寄存器时钟RCK的上升沿进入的存储寄存器中去。如果两个时钟连在一起，则移位寄存器总是比存储寄存器早一个脉冲。移位寄存器有一个串行移位输入端（SI）和一个用于级联的串行输出端（SQH）,8位移位寄存器可以异步复位（低电平复位），存储寄存器有一个8位三态并行的总线输出，当输出使能（OE）被使能（低电平有效）将存储寄存器中输出至74HC595N的引脚（总线）。

![Img](./media/img-20241115081711.png)

**引脚说明：**

| 引脚： | 引脚说明： |
| :--: | :--: |
| 13引脚OE|	是一个输出使能引脚，用于确保锁存器的数据是否输入到Q0-Q7引脚。在低电平时，不输出高电平。在本实验中，我们直接连接GND，保持低电平输出数据。|
|14引脚SI/DS|这是74HC595接收数据的引脚，即串行数据输入端，一次只能输入一位，那么连续输入8次，就可以组成一个字节了。|
|10引脚SCLR/MR|一个初始化存储寄存器管脚的管脚。在低电平时初始化内部存储寄存器。在这个实验中，我们连接VCC以保持高水平。|
|11引脚SCK/SH_CP|移位寄存器的时钟引脚，上升沿时，移位寄存器中的数据整体后移，并接收新的数据输入。|
|12引脚RCK/ST_CP|存储寄存器的时钟输入引脚。上升沿时，数据从移位寄存器转存到存储寄存器中。这时数据就从Q0~Q7端口并行输出。|
|9引脚SQH|引脚是一个串行输出引脚，专门用于芯片级联，接下一个74HC595的SI端。|
|Q0--Q7(15引脚，1-7引脚)|八位并行输出端，可以直接控制数码管的8个段。|

**4.项目接线图：**

<span style="color: rgb(255, 76, 65);">注意：</span>需要注意74HC595N芯片插入的方向。

![图片不存在](./Arduino/media/9b0649bf40ed46557baabcf617c69804.png)

![图片不存在](./Arduino/media/cc4e68fb791ca0f40d0e6554d43b1ab2.png)

**5.项目代码：**



```
//**********************************************************************
/* 
 * 文件名 : 74HC595N 控制8个LED
 * 描述 : 用74HC575N驱动led流水灯.
*/
int dataPin = 14;   // 连接74HC595 DS的引脚(Pin14)  
int latchPin = 12;  // 74HC595的ST_CP连接引脚(Pin12)
int clockPin = 13;  // 74HC595的SH_CP连接引脚(Pin11)          

void setup() {
  // 设置引脚输出
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
  // 定义一个单字节变量，用8位来表示LED柱状图的8个LED的状态。
  //该变量被赋值为0x01，即二进制00000001，表示只有一盏灯亮。
  byte x = 0x01;    // 0b 0000 0001
  for (int j = 0; j < 8; j++) { // 让led灯从右向左亮起
    writeTo595(LSBFIRST, x);
    x <<= 1; // 使变量向左移动一位，然后明亮的LED向左移动一步.
    delay(50);
  }
  delay(100);
  x = 0x80;       //0b 1000 0000
  for (int j = 0; j < 8; j++) { // 让led灯从左向右亮起
    writeTo595(LSBFIRST, x);
    x >>= 1;    
    delay(50);
  }
  delay(100);
}
void writeTo595(int order, byte _data ) {
  // 输出低电平到latchPin
  digitalWrite(latchPin, LOW);
  // 发送串行数据到74HC595
  shiftOut(dataPin, clockPin, order, _data);
  // 输出高电平到latchPin，74HC595将数据更新到并行输出端口.
  digitalWrite(latchPin, HIGH);
}
//**********************************************************************************

```


**6.项目现象：**

代码上传成功后，利用USB线上电，可以看到的现象是：8个LED开始以流水模式闪烁。

![图片不存在](./Arduino/media/de7ef1d58423282ec05b12fdc0af0292.png)



















## 项目12 有源蜂鸣器

**1.项目介绍：**

有源蜂鸣器是一个发声组件。它被广泛用作电脑、打印机、报警器、电子玩具、电话、计时器等的发声元件。它有一个内在的振动源，只需连接5V电源，即可持续发出嗡嗡声。在这个项目中，我们将使用ESP32控制有源蜂鸣器发出“滴滴”声。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/a802ce7dc086858873e587c19b45578d.png)|![图片不存在](./Arduino/media/6c3a06627faa0d87dd69cbd361929240.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|有源蜂鸣器*1|NPN型晶体管(S8050)*1|
|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| |
|1KΩ电阻*1|跳线若干|USB线*1| |

**3.元件知识：**
 
![图片不存在](./Arduino/media/7ac473b007da81c891ca12b4c82fac4a.png)

**有源蜂鸣器：** 它内部有一个简单的振荡器电路，可以将恒定的直流电转换成特定频率的脉冲信号。一旦有源蜂鸣器收到一个高电平，它将产生声音。而无源蜂鸣器是一种内部没有振动源的集成电子蜂鸣器，它必须由2K-5K方波驱动，而不是直流信号。这两个蜂鸣器的外观非常相似，但是一个带有绿色电路板的蜂鸣器是无源蜂鸣器，而另一个带有黑色胶带的是有源蜂鸣器。无源蜂鸣器不能区分正极性而有源蜂鸣器是可以。如下所示：

![图片不存在](./Arduino/media/a33496a4d5eb90ea4d980459d7654b0f.png)

![图片不存在](./Arduino/media/6c3a06627faa0d87dd69cbd361929240.png)

**晶体管:** 由于蜂鸣器需要很大的电流，ESP32输出能力的GPIO不能满足要求，这里需要一个NPN型晶体管来放大电流。晶体管，全称:半导体晶体管，是一种控制电流的半导体器件。晶体管可以用来放大微弱信号，也可以用作开关。它有三个电极(pin)：基极(b)，集电极(c)和发射极(e)。当电流通过“be”之间时，“ce”将允许几倍的电流通过(晶体管放大)，此时，晶体管在放大区工作。当“be”之间的电流超过某个值时，“ce”将不再允许电流增加，此时晶体管工作在饱和区。晶体管有两种类型如下所示：PNP和NPN

![图片不存在](./Arduino/media/96deb6c440780b1bc8acde29ef214727.png)

<span style="color: rgb(255, 76, 65);">在我们的套件中，PNP晶体管标记为8550,NPN晶体管标记为8050。</span>

基于晶体管的特性，它常被用作数字电路中的开关。由于单片机输出电流的能力很弱，我们将使用晶体管来放大电流和驱动大电流的元件。在使用NPN晶体管驱动蜂鸣器时，通常采用以下方法：如果GPIO输出高电平，电流将流过R1，晶体管将传导，蜂鸣器将发出声音。如果GPIO输出低电平，没有电流流过R1，晶体管就不会传导，蜂鸣器也不会响。在使用PNP晶体管驱动蜂鸣器时，通常采用以下方法：如果GPIO输出低电平，电流将流过R1，晶体管将传导，蜂鸣器将发出声音。如果GPIO输出高电平，没有电流流过R1，晶体管就不会传导，蜂鸣器也不会响。

![图片不存在](./Arduino/media/05d42ad7919cc237e007cd2457aacd7c.png)

**4.项目接线图：**

![图片不存在](./Arduino/media/45b50e33587ccd6c5c2b5af7c7ba7658.png)

<span style="color: rgb(255, 76, 65);">注意：该电路中蜂鸣器的电源为5V。在3.3V的电源下，蜂鸣器可以工作，但会降低响度。</span>

**5.项目代码：**



```
//**********************************************************************
/* 
 * 文件名   : 有源蜂鸣器
 * 描述 : 有源蜂鸣器鸣叫.
*/
#define buzzerPin  15   //定义蜂鸣器引脚

void setup ()
{
  pinMode (buzzerPin, OUTPUT);
}
void loop ()
{
  digitalWrite (buzzerPin, HIGH);
  delay (500);
  digitalWrite (buzzerPin, LOW);
  delay (500);
}
//**********************************************************************************

```


**6.项目现象：**

代码上传成功后，利用USB线上电，可以看到的现象是：有源蜂鸣器发出“滴滴”声。

![图片不存在](./Arduino/media/4d1cee558b3cb395234d05214995c631.png)
















## 项目13 无源蜂鸣器

**1.项目介绍：**

在之前的项目中，我们研究了有源蜂鸣器，它只能发出一种声音，可能会让你觉得很单调。这个项目将学习另一种蜂鸣器，无源蜂鸣器。与有源蜂鸣器不同，无源蜂鸣器可以发出不同频率的声音。在这个项目中，你将使用ESP32控制无源蜂鸣器工作。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/8b2bc33166824a904168c38b960fe574.png)|![图片不存在](./Arduino/media/6c3a06627faa0d87dd69cbd361929240.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|无源蜂鸣器*1|NPN型晶体管(S8050)*1|
|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| |
|1KΩ电阻*1|跳线若干|USB线*1| |

**3.元件知识：**

![图片不存在](./Arduino/media/352568cc59e03453c9433f866631bf50.png)  

**无源蜂鸣器：** 它是一种内部没有振动源的集成电子蜂鸣器。它必须由2K-5K方波驱动，而不是直流信号。与有源蜂鸣器的外观非常相似，但是一个带有绿色电路板的蜂鸣器是无源蜂鸣器，而另一个带有黑色胶带的是有源蜂鸣器。无源蜂鸣器不能区分正极性而有源蜂鸣器是可以。

![图片不存在](./Arduino/media/9e2535b132d6c88b45b2b8dfdf6dbda4.png)

**晶体管:** 请参考**项目12** 。

**4.项目接线图:**

![图片不存在](./Arduino/media/9116a43de7b0f2dc1cdb0496468706f3.png)

**5.项目代码：**



```
//**********************************************************************
/*
 * 文件名   : 无源蜂鸣器
 * 描述 : 无源蜂鸣器发出警报.
*/
#define LEDC_CHANNEL_0 0

// LEDC定时器采用13位精度

#define LEDC_TIMER_13_BIT  13

// 定义工具I/O端口

#define BUZZER_PIN  15

//创建一个音乐旋律列表

int melody[] = {330, 330, 330, 262, 330, 392, 196, 262, 196, 165, 220, 247, 233, 220, 196, 330, 392, 440, 349, 392, 330, 262, 294, 247, 262, 196, 165, 220, 247, 233, 220, 196, 330, 392,440, 349, 392, 330, 262, 294, 247, 392, 370, 330, 311, 330, 208, 220, 262, 220, 262,

294, 392, 370, 330, 311, 330, 523, 523, 523, 392, 370, 330, 311, 330, 208, 220, 262,220, 262, 294, 311, 294, 262, 262, 262, 262, 262, 294, 330, 262, 220, 196, 262, 262,262, 262, 294, 330, 262, 262, 262, 262, 294, 330, 262, 220, 196};

//创建一个音调持续时间列表

int noteDurations[] = {8,4,4,8,4,2,2,3,3,3,4,4,8,4,8,8,8,4,8,4,3,8,8,3,3,3,3,4,4,8,4,8,8,8,4,8,4,3,8,8,2,8,8,8,4,4,8,8,4,8,8,3,8,8,8,4,4,4,8,2,8,8,8,4,4,8,8,4,8,8,3,3,3,1,8,4,4,8,4,8,4,8,2,8,4,4,8,4,1,8,4,4,8,4,8,4,8,2};
void setup() {
  pinMode(BUZZER_PIN, OUTPUT); // 将蜂鸣器设置为输出模式
}

void loop() {

  int noteDuration; //创建一个变量noteDuration

  for (int i = 0; i < sizeof(noteDurations); ++i)

  {
      noteDuration = 800/noteDurations[i];

      ledcSetup(LEDC_CHANNEL_0, melody[i]*2, LEDC_TIMER_13_BIT);

      ledcAttachPin(BUZZER_PIN, LEDC_CHANNEL_0);

      ledcWrite(LEDC_CHANNEL_0, 50);

      delay(noteDuration * 1.30); //延时
  }
}
//**********************************************************************

```


**6.项目现象：**

代码上传成功后，利用USB线上电，你会看到的现象是：无源蜂鸣器播放音乐。

![图片不存在](./Arduino/media/f602628b53d8dd59744d5405b604f8c6.png)






















## 项目14 小台灯

**1.项目介绍：**

你知道ESP32可以在你按下外接按键的时候点亮LED吗? 在这个项目中，我们将使用ESP32，一个按键开关和一个LED来制作一个迷你台灯。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/4c27c3e6c2224e12fd1bd298669f700c.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|按键*1|
|![图片不存在](./Arduino/media/b3484a63586f907a33f23fa001c874ee.png)|![图片不存在](./Arduino/media/e8726e55ebfb8e7520e615575ce89204.png)|![图片不存在](./Arduino/media/11f324f82f890b0691f134e1ea7a3765.png)|
|10KΩ电阻*1|红色 LED*1|220Ω电阻*1|
|![图片不存在](./Arduino/media/4214d58466508ada517d241d46485b7b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|按键帽*1|跳线若干|USB 线*1|

**3.元件知识：**

![图片不存在](./Arduino/media/50b8a411811e86cb4204a2e0377282f4.png)

**按键：** 按键可以控制电路的通断，把按键接入电路中，不按下按键的时候电路是断开的，
一按下按键电路就通啦，但是松开之后就又断了。可是为什么按下才通电呢？这得从按键的内部构造说起。没按下之前，电流从按键的一端过不去另一端；按下的时候，按键内部的金属片把两边连接起来让电流通过。

按键内部结构如图：![图片不存在](./Arduino/media/013b1897a0308c71d7e5ed0eaf64198d.png)，未按下按键之前，1、2就是导通的，3、4也是导通的，但是1、3或1、4或2、3或2、4是断开（不通）的；只有按下按键时，1、3或1、4或2、3或2、4才是导通的。

在设计电路时，按键开关是最常用的一种元件。

**按键的原理图:**

![图片不存在](./Arduino/media/00096ba2b3cb95b8d02e075261acb181.png)
  
**什么是按键抖动？**

我们想象的开关电路是“按下按键-立刻导通”“再次按下-立刻断开”，而实际上并非如此。
按键通常采用机械弹性开关，而机械弹性开关在机械触点断开闭合的瞬间（通常 10ms左右），会由于弹性作用产生一系列的抖动，造成按键开关在闭合时不会立刻稳定的接通电路，在断开时也不会瞬时彻底断开。

![图片不存在](./Arduino/media/c4d829daa9d08e80d4538b901c700b8c.png)

**那又如何消除按键抖动呢？**

常用除抖动方法有两种：软件方法和硬件方法。这里重点讲讲方便简单的软件方法。
我们已经知道弹性惯性产生的抖动时间为10ms 左右，用延时命令推迟命令执行的时间就可以达到除抖动的效果。

所以我们在代码中加入了0.02秒的延时以实现按键防抖的功能。

![图片不存在](./Arduino/media/3591ca9171277a78bf782c32525e1812.png)

**4.项目接线图：**

![图片不存在](./Arduino/media/79c310407b3091e58739fda1c916f412.png)

<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Arduino/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻和五色环10KΩ电阻

![图片不存在](./Arduino/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

![图片不存在](./Arduino/media/2d3f0996515352c92c07d17e074e7308.png)

**5.项目代码：**



```
//**********************************************************************
/* 
 * 文件名  : 小台灯
 * 描述 : 做一个小台灯.
*/
#define PIN_LED    4
#define PIN_BUTTON 15
bool ledState = false;

void setup() {
  // 初始化数字引脚PIN_LED作为输出.
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON, INPUT);
}

// 循环函数永远重复运行
void loop() {
  if (digitalRead(PIN_BUTTON) == LOW) {
    delay(20);
    if (digitalRead(PIN_BUTTON) == LOW) {
      reverseGPIO(PIN_LED);
    }
    while (digitalRead(PIN_BUTTON) == LOW);
  }
}

void reverseGPIO(int pin) {
  ledState = !ledState;
  digitalWrite(pin, ledState);
}
//**********************************************************************

```


**6.项目现象：**

代码上传成功后，利用USB线上电，你会看到的现象是：按下按钮，LED亮起；当按钮松开时，LED仍亮着。再次按下按钮，LED熄灭；当按钮释放时，LED保持关闭。是不是很像个小台灯？

![图片不存在](./Arduino/media/cba65f3e78fc23732983efae1f0441e4.png)




















## 项目15 模拟沙漏

**1.项目介绍：**

古代人没有电子时钟，就发明了沙漏来测时间，沙漏两边的容量比较大，在一边装了细沙，中间有个很小的通道，将沙漏直立，有细沙的一边在上方，由于重力的作用，细沙就会往下流通过通道到沙漏的另一边，当细沙都流到下边了，就倒过来，把一天反复的次数记录下来，第二天就可以通过沙漏反复流动的次数而知道这一天大概的时间了。这一课我们将利用ESP32控制倾斜开关和LED灯来模拟沙漏，制作一个电子沙漏。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/01c1502f7cc76c09d4d77410dcdd31a6.png)|![图片不存在](./Arduino/media/b3484a63586f907a33f23fa001c874ee.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|倾斜开关*1|10KΩ电阻*1|
|![图片不存在](./Arduino/media/e8726e55ebfb8e7520e615575ce89204.png)|![图片不存在](./Arduino/media/11f324f82f890b0691f134e1ea7a3765.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|红色 LED*4|220Ω电阻*1|跳线若干|USB 线*1|

**3.元件知识：**

![图片不存在](./Arduino/media/966683cc81a185103df1862a16d7a844.png)

倾斜开关也叫数字开关或球形开关，里面有一个金属球。它用于检测小角度的倾斜。

原理很简单：当开关倾斜一定角度时，里面的球会向下滚动，接触到连接到外面引脚的两个触点，从而触发电路。否则，球将远离触点，从而断开电路。

这里用倾斜开关的内部结构来说明它是如何工作的，显示如下图：

![图片不存在](./Arduino/media/ed8fb48d5fbce7033fad9ffa5de67808.png)

**4.项目接线图：**

![图片不存在](./Arduino/media/02d5f7df75aa8062f7b9399a47ae4285.png)

<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Arduino/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻和五色环10KΩ电阻

![图片不存在](./Arduino/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

![图片不存在](./Arduino/media/2d3f0996515352c92c07d17e074e7308.png)

**5.项目代码：**



```
//**********************************************************************
/* 
 * 文件名  : 倾斜和LED
 * 描述 : 倾斜开关和四个led模拟沙漏.
*/
#define SWITCH_PIN  15  // 倾斜开关连接Pin15
byte switch_state = 0;
void setup()
{
  for(int i=16;i<20;i++)
  {
    pinMode(i, OUTPUT);
  } 
  pinMode(SWITCH_PIN, INPUT);
  for(int i=16;i<20;i++)
  {
    digitalWrite(i,0);
  } 
  Serial.begin(9600);
}
void loop()
{
switch_state = digitalRead(SWITCH_PIN); 
Serial.println(switch_state);
  if (switch_state == 0) 
  {
    for(int i=16;i<20;i++)
    {
      digitalWrite(i,1);
      delay(500);
    } 
}
 if (switch_state == 1) 
 {
   for(int i=19;i>15;i--)
   {
    digitalWrite(i,0);
    delay(500);
   }
  }
}
//**********************************************************************************

```


**6.项目现象：**

代码上传成功后，利用USB线上电，你会看到的现象是：将面包板倾斜到一定角度，led就会一个一个地亮起来。当回到上一个角度时，led会一个一个关闭。就像沙漏一样，随着时间的推移，沙子漏了出来。

![图片不存在](./Arduino/media/2db9ee9bf59debc53c46aa954da31d47.png)



































## 项目16 防窃警报器

**1.项目介绍：**

人体红外传感器测量运动物体发出的热的红外(IR)线。该传感器可以检测人、动物和汽车的运动，从而触发安全警报和照明。它们被用来检测移动，是安全的理想选择，如防盗警报和安全照明系统。在这个项目中，我们将使用ESP32控制人体红外传感器、蜂鸣器和LED来模拟防盗报警器。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/6f0780e5e12a2154c17a6310c13055a8.png)|![图片不存在](./Arduino/media/6c3a06627faa0d87dd69cbd361929240.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|人体红外传感器*1|NPN型晶体管(S8050)*1|
|![图片不存在](./Arduino/media/b05ac5e1de5da301b3dc8ef880d51de2.png)|![图片不存在](./Arduino/media/e8726e55ebfb8e7520e615575ce89204.png)|![图片不存在](./Arduino/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)|
|有源蜂鸣器*1|红色 LED*1|220Ω电阻*1|1KΩ电阻*1|
| ![图片不存在](./Arduino/media/1a190cfbfe81a1524e1d1ef681688a64.png) | ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| |
|3P转杜邦线公单*1|跳线若干|USB 线*1| |

**3.元件知识：**

**人体红外传感器：** 是一款基于热释电效应的人体红外传感器，能检测到人体或动物身上发出的红外线，配合菲涅尔透镜能使传感器探测范围更远更广。它主要采用RE200B-P传感器元件，当附近有人或者动物运动时，该模块会输出一个高电平1；否则输出低电平0。特别注意，这个传感器可以检测在运动中的人、动物和汽车，静止中的人、动物和汽车是检测不到的，检测最远距离大约为7米左右。

<span style="color: rgb(255, 76, 65);">注意：人体红外传感器应避开日光、汽车头灯、白炽灯直接照射，也不能对着热源(如暖气片、加热器)或空调，以避免环境温度较大的变化而造成误报。同时还易受射频辐射的干扰。</span>

**传感器技术参数：**

最大输入电压：DC 5-15V 

最大工作电流：50MA

最大功率：0.3W

静态电流: <50uA

工作温度：-20 ~ 85℃

控制信号：数字信号(1/0)

延迟时间：大约2.3到3秒钟

感应角度：小于100度锥角

检测最远距离：大约7米左右

**传感器原理图：**

![图片不存在](./Arduino/media/fb17fc7fc7bf46cd3b205a8fb3269dbf.png)

**4.项目接线图：**

![图片不存在](./Arduino/media/d9ebd36e3b6aae498872f2c6f6a3ee14.png)

**5.项目代码：**



```
//**********************************************************************
/* 
 * 文件名  : 防盗报警器
 * 描述 : 人体红外传感器蜂鸣器和LED模拟防盗报警.
*/
#define buzzerPin   2   // 蜂鸣器的引脚
#define ledPin   0     // LED的引脚
#define pirPin   15     // PIR运动传感器的引脚
byte pirStat = 0;   // PIR运动传感器的状态
void setup() {
 pinMode(buzzerPin, OUTPUT); 
 pinMode(ledPin, OUTPUT);    
 pinMode(pirPin, INPUT);     
}
void loop()
{
 pirStat = digitalRead(pirPin); 

 if (pirStat == HIGH)
 {            // 如果检测到人或移动的动物
   digitalWrite(buzzerPin, HIGH);  // 蜂鸣器嗡嗡作响
   digitalWrite(ledPin, HIGH);  // led灯亮
   delay(500);
   digitalWrite(buzzerPin, LOW);  // 蜂鸣器不响
   digitalWrite(ledPin, LOW);  // led关闭
   delay(500);
 } 
 else {  // 否则，没有检测到人或移动的动物，
   digitalWrite(buzzerPin, LOW); // 关闭蜂鸣器
   digitalWrite(ledPin, LOW);  // led关闭
 }
}
//*********************************************************************************

```


**6.项目现象：**

代码上传成功后，利用USB线上电，你会看到的现象是：如果人体红外传感器检测到附近有人移动时，蜂鸣器就会不断地发出警报，且LED不断地闪烁。





























## 项目17 I2C 128×32 LCD

**1.项目介绍：**

在生活中，我们可以利用显示器等模块来做各种实验。你也可以DIY各种各样的小物件。例如，用一个温度传感器和显示器做一个温度测试仪，或者用一个超声波模块和显示器做一个距离测试仪。下面，我们将使用LCD_128X32_DOT模块作为显示器，将其连接到ESP32控制板上。将使用ESP32主板控制LCD_128X32_DOT显示屏显示各种英文文字、常用符号和数字。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/c4b08ad87310ea27bc06383257cc7f8f.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|LCD_128X32_DOT*1|
|![图片不存在](./Arduino/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| |
|4P转杜邦线公单*1|USB 线*1| |

**3.元件知识：**

![图片不存在](./Arduino/media/c4b08ad87310ea27bc06383257cc7f8f.png)

**LCD_128X32_DOT：** 一个像素为128*32的液晶屏模块，它的驱动芯片为ST7567A。模块使用IIC通信方式，它不仅可以显示英文字母、符号，还可以显示中文文字和图案。使用时，还可以在代码中设置，让英文字母和符号等显示不同大小。

**LCD_128X32_DOT原理图：**

![图片不存在](./Arduino/media/a6f56f3c6481d37dc0dcf9cf74587781.png)

**LCD_128X32_DOT技术参数：**

显示像素：128*32 字符

工作电压：DC 5V

工作电流：100mA (5V)

模块最佳工作电压：5V

亮度、对比度可通过程序指令控制

**4.项目接线图：**

![图片不存在](./Arduino/media/229ce4e1ad8b01c71577d8f777e8195b.png)

**5.添加LCD_128×32库：**

本项目代码使用了一个名为“<span style="color: rgb(255, 76, 65);">LCD_128×32</span>”库。如果你已经添加好了“<span style="color: rgb(255, 76, 65);">LCD_128×32</span>”库，则跳过此步骤。如果你还没有添加，请在学习之前安装它。添加第三方库的步骤如下:

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\LCD_128X32.ZIP**的文件，先选中**LCD_128X32.ZIP** 文件，再单击“**打开**”。

![图片不存在](./Arduino/media/0a8f5aa82bea27a65f8455e9a180de96.png)

![图片不存在](./Arduino/media/d06be8e0f725c4d370cd7f10ae33e60c.png)

**6.项目代码：**


```
//**********************************************************************************
/*
 * 文件名  : LCD 128*32
 * 描述 : LCD 128*32显示字符串
*/
#include "lcd128_32_io.h"

//创建lCD128 *32引脚，sda--->21， scl--->22
lcd lcd(21, 22);

void setup() {
  lcd.Init(); //初始化
  lcd.Clear();  //清屏
}

void loop() {
  lcd.Cursor(0, 4); //设置显示位置
  lcd.Display("KEYESTUDIO"); //设置显示
  lcd.Cursor(1, 0);
  lcd.Display("ABCDEFGHIJKLMNOPQR");
  lcd.Cursor(2, 0);
  lcd.Display("123456789+-*/<>=$@");
  lcd.Cursor(3, 0);
  lcd.Display("%^&(){}:;'|?,.~\\[]");
}
//**********************************************************************************

```


**7.项目现象：**

代码上传成功后，利用USB线上电，你会看到的现象是：128X32LCD模块显示屏第一行显示“KEYESTUDIO”、第二行显示“ABCDEFGHIJKLMNOPQR”、第三行显示“123456789+-*/<>=$@”、第四行显示“%^&(){}:;'|?,.~\\[]”。

![图片不存在](./Arduino/media/eeada568b7ef98fefa27e9f22435befd.png)



























## 项目18 小风扇

**1.项目介绍：** 

在炎热的夏季，需要电扇来给我们降温，那么在这个项目中，我们将使用ESP32控制130电机模块和小扇叶来制作一个小电扇。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/2d879e56de94fbb14399ec17c0b10861.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|130电机模块*1|
|![图片不存在](./Arduino/media/c562656c96657983e724daed7c8d6202.png)|![图片不存在](./Arduino/media/3cc5c242c0f357b3dc496037a7d8bae8.png)|![图片不存在](./Arduino/media/ed228ff5627e0c8cc0c79fa04f1d4d16.png)|
|面包板专用电源模块*1|6节5号电池盒*1|风扇叶*1|
|  ![图片不存在](./Arduino/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Arduino/media/4c49cdffc9e5e6f1aad838120d35897a.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|4P转杜邦线公单*1|5号电池(<span style="color: rgb(255, 76, 65);">自备</span>)*6|USB 线*1|

**3.元件知识:**

![图片不存在](./Arduino/media/2d879e56de94fbb14399ec17c0b10861.png)

**130电机模块：** 该电机控制模块采用HR1124S电机控制芯片，HR1124S是应用于直流电机方案的单通道H桥驱动器芯片。HR1124S的H桥驱动部分采用低导通电阻的PMOS和NMOS功率管，低导通电阻保证芯片低的功率损耗，使得芯片安全工作更长时间。此外HR1124S拥有低待机电流，低静态工作电流，这些性能使130电机模块易用于玩具方案。

**130电机模块参数：**

工作电压：5V

工作电流：≤200MA

工作功率：2W

工作温度：-10℃~+50℃

**130电机模块原理：**

HR1124S芯片的作用是助于驱动电机，而电机所需电流较大，无法用三极管驱动更无法直接用IO口驱动。让电机转动起来的方法很简单，给电机两端添加电压即可。不同电压方向电机转向也不相同，在额度电压内，电压越大，电机转动得越快；反之电压越低，电机转动得越慢，甚至无法转动。控制方式有两种：一种是高低电平控制（控制转动和停止），一种是PWM控制（控制转速）。

![图片不存在](./Arduino/media/a2b424e6521208e49ab4140ffdeb00be.png)

**面包板专用电源模块：**

![图片不存在](./Arduino/media/c562656c96657983e724daed7c8d6202.png)

**说明：**

此模块，能方便的给面包板提供3.3V和5V的电源，具有DC2.1输入（DC7－12V），另外，具备USB Type C接口的电源输入。

**规格：** 

 输入电压：DC座：7-12V；Type C USB：5V 

 电流：3.3V：最大500mA；5V：最大500mA；

 最大功率: 2.5W

 尺寸: 53mmx26.3mm

 环保属性: ROHS

**接口说明：**

![图片不存在](./Arduino/media/9ab1fa7ff5eccecdc0fe6218fad6df79.png)

**原理图：**

![图片不存在](./Arduino/media/5139ee652d196f215b53c35d8ab24166.png)

**4.项目接线图：**

![图片不存在](./Arduino/media/cfe5281646edc0503c62ba8b79b16c6b.png)

(<span style="color: rgb(255, 76, 65);">注: 先接好线，然后在直流电机上安装一个小风扇叶片。</span>)


**5.项目代码：**


```
//**********************************************************************************
/*
 * 文件名  : 小风扇
 * 描述 : 风扇顺时针旋转，停止，逆时针旋转，停止，循环.
*/
#define Motorla    15  // 电机的Motor_IN+引脚
#define Motorlb     2  // 电机的Motor_IN引脚

void setup(){
  pinMode(Motorla, OUTPUT);//设置Motorla为OUTPUT
  pinMode(Motorlb, OUTPUT);//设置Motorlb为OUTPUT
}
void loop(){
//设置为逆时针旋转5s
  digitalWrite(Motorla,HIGH);
  digitalWrite(Motorlb,LOW);
  delay(5000);
//设置停止旋转2s 
  digitalWrite(Motorla,LOW);
  digitalWrite(Motorlb,LOW);
  delay(2000);
//设置为顺时针旋转5s
  digitalWrite(Motorla,LOW);
  digitalWrite(Motorlb,HIGH);
  delay(5000);
//设置停止旋转2s 
  digitalWrite(Motorla,LOW);
  digitalWrite(Motorlb,LOW);
  delay(2000);
}
//********************************************************************************

```


**6.项目现象：**

代码上传成功后，外接电源，上电后，你会看到的现象是：小风扇先逆时针转5秒，停止2秒，再顺时针转5秒，停止2秒，以此规律重复执行。

![图片不存在](./Arduino/media/6f829143f64bdf4a41f1e087e6ef456e.png)



## 项目19 舵机

**1.项目介绍：**

舵机是一种可以非常精确地旋转的电机。目前已广泛应用于玩具车、遥控直升机、飞机、机器人等领域。在这个项目中，我们将使用ESP32控制舵机转动。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/bf6d1660c4a52edca11f5a7763edfc19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|舵机*1|
|![图片不存在](./Arduino/media/e989c0ba5c3c1ea8c5fc08d02344da37.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| |
|跳线若干|USB 线*1| |

**3.元件知识：**

![图片不存在](./Arduino/media/bf6d1660c4a52edca11f5a7763edfc19.png)

**舵机：** 舵机是一种位置伺服的驱动器，主要是由外壳、电路板、无核心马达、齿轮与位置检测器所构成。其工作原理是由接收机或者单片机发出信号给舵机，其内部有一个基准电路，产生周期为20ms，宽度为1.5ms 的基准信号，将获得的直流偏置电压与电位器的电压比较，获得电压差输出。经由电路板上的IC 判断转动方向，再驱动无核心马达开始转动，透过减速齿轮将动力传至摆臂，同时由位置检测器送回信号，判断是否已经到达定位。适用于那些需要角度不断变化并可以保持的控制系统。当电机转速一定时，通过级联减速齿轮带动电位器旋转，使得电压差为0，电机停止转动。一般舵机旋转的角度范围是0度到180 度。

控制舵机的脉冲周期为20ms，脉冲宽度为0.5ms ~ 2.5ms，对应位置为-90°~ +90°。下面是以一个180°角的舵机为例：

![图片不存在](./Arduino/media/071ba0096e7cd92a87f61ee70523cd44.png)

舵机有多种规格，但它们都有三根连接线，分别是棕色、红色、橙色(不同品牌可能有不同的颜色)。棕色为GND，红色为电源正极，橙色为信号线。

![图片不存在](./Arduino/media/251008f9edd3fdcbf09f12deff53dd65.png)

**4.项目接线图：**

舵机供电时请注意，电源电压应为3.3V-5V。请确保在将舵机连接到电源时不会出现任何错误。
![图片不存在](./Arduino/media/14564e5e2e5255d49b96437753c0a402.png)

**5.添加ESP32Servo库：**

如果你已经添加好了“<span style="color: rgb(255, 76, 65);">ESP32Servo</span>”库，则跳过此步骤。如果你还没有添加“<span style="color: rgb(255, 76, 65);">ESP32Servo</span>”库，请在学习之前添加它。添加第三方库的步骤如下:

**如何安装库？**

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\ESP32Servo-0.8.0.ZIP**的文件，先选中**ESP32Servo-0.8.0.ZIP** 文件，再单击“**打开**”。

![图片不存在](./Arduino/media/e535e46eecfeba11bdd1ec660b17ca29.png)

![图片不存在](./Arduino/media/e210dbc7997c08500968c937965153ad.png)

**6.项目代码：**


```
//**********************************************************************
/*
 * 文件名  : 舵机转动
 * 描述 : 控制舵机进行清扫
*/
#include <ESP32Servo.h>

Servo myservo;  // 创建舵机对象来控制舵机

int posVal = 0;    // 变量来存储舵机位置
int servoPin = 15; // 舵机引脚

void setup() {
  myservo.setPeriodHertz(50);           // 标准50赫兹舵机
  myservo.attach(servoPin, 500, 2500);  // 将servoPin上的舵机附加到舵机对象上
}
void loop() {

  for (posVal = 0; posVal <= 180; posVal += 1) { // 从0°到180°
    // 以1度为阶梯
    myservo.write(posVal);       // 告诉舵机进入可变'posVal'位置
    delay(15);                   // 等待15ms舵机到达位置
  }
  for (posVal = 180; posVal >= 0; posVal -= 1) { // 从180°到0°
    myservo.write(posVal);       // 告诉舵机进入可变'posVal'位置
    delay(15);                   // 等待15ms舵机到达位置
  }
}
//********************************************************************************

```


**6.项目现象：**

代码上传成功后，利用USB线上电，你会看到的现象是：舵机将从0°旋转到180°，然后反转方向使其从180°旋转到0°，并在一个无限循环中重复这些动作。

![图片不存在](./Arduino/media/af31b301debd1476dc2720b9cf807720.png)








## 项目20 步进电机

**1.项目介绍：**

步进电机定位准确，是工业机器人、3D打印机、大型车床等机械设备中最重要的部件。在这个项目中，我们将使用ESP32控制ULN2003步进电机驱动板来驱动步进电机转动。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/dcb3c510e9b72a18f95a6f3480372d57.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|ULN2003步进电机驱动板*1|
|![图片不存在](./Arduino/media/c562656c96657983e724daed7c8d6202.png)|![图片不存在](./Arduino/media/3cc5c242c0f357b3dc496037a7d8bae8.png)|![图片不存在](./Arduino/media/40f12855a27fa322036dece349b905c1.png)|
|面包板专用电源模块*1|6节5号电池盒*1|步进电机*1|
|![图片不存在](./Arduino/media/25a2a8622647c1f1b576468786b0a762.png)|![图片不存在](./Arduino/media/4c49cdffc9e5e6f1aad838120d35897a.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|公对母杜邦线若干|5号电池(<span style="color: rgb(255, 76, 65);">自备</span>)*6|USB 线*1|

**3.项目知识：** 

![图片不存在](./Arduino/media/40f12855a27fa322036dece349b905c1.png)

**步进电机：** 是由一系列电磁线圈控制的电机。它可以根据需要旋转精确的度数(或步数)，允许你将它移动到一个精确的位置并保持该位置。它是通过在很短的时间内为电机内部的线圈供电来做到这一点的，但你必须一直为电机供电，以保持它在你想要的位置。有两种基本类型的步进电机，单极步进和双极步进。在本项目中，我们使用的是单极步进电机28-BYJ48。

 ![图片不存在](./Arduino/media/64e3feb3dd1b8002ab91cbc782d25580.png)
      
**28BYJ-48步进电机工作原理：**

步进电机主要由定子和转子组成，定子是固定不动的，如下图绕着A、B、C、D线圈组的部分，线圈组导通电就会产生磁场；转子就是转动的部分，如下图定子中间的部分，两极是永磁铁。
                         
单步4节拍的转动原理：开始A组线圈导通，转子两极正对着A组线圈；接着A组线圈断开，B组线圈导通，转子就会顺时针转到B组线圈，转子转了一步；B断开，C导通，转子转到C组；C断开，D导通，转子转到D组；D组断开，A组导通，转子转到A组线圈。这样转子就转了半圈180度，接着再重复一次，B-C-D-A，转子转回到A组线圈，这样转子就转了一圈，总共转动了8步。如下图所示，这就是步进电机单节拍转动的原理A - B - C - D - A ....。

 如果想让步进电机逆时针转动，那只要把节拍顺序反过来就行，D - C - B - A - D .....。

![图片不存在](./Arduino/media/ea05ab05a51c611cd9505b95d93e14a7.png)

半步8节拍转动原理：8节拍，采用的是单双拍的形式，A - AB - B - BC - C - CD - D - DA - A ...... ，这样运转一拍，转子只会转动半步，例如，A组线圈导通，转子转到正对着A组线圈；接着A和B组一起导通，这样产生的磁场最强的地方在AB组线圈中间，转子两极就会转到AB组线圈中间，也就是顺时针转了半步。

**步进电机参数：**

我们所提供的步进电机需要转动32步，转子才能转一圈，还经过了1:64的减速齿轮组带动输出轴，这样输出轴转动一圈需要：32 * 64 = 2048 步。

电压5V，4相步进电机 ，4节拍模式的步进角为11.25， 8节拍模式步进角为5.625， 减速比为1:64。

**ULN2003步进电机驱动板：** ULN2003型步进电机驱动器，将微弱信号转换为更强的控制信号，从而驱动步进电机。

下面的原理图显示了如何使用ULN2003步进电机驱动板接口将一个单极步进电机接到ESP32的引脚上，并显示了如何使用四个TIP120的接口。 

![图片不存在](./Arduino/media/d3daf4898dc3180bcdd66597ba6a33a0.png)

**4.项目接线图：**

![图片不存在](./Arduino/media/dcf650acd0c50ffbc2fa1ecc61c24a8e.png)

**5.项目代码：**



```
//**********************************************************************
/*
 * 文件名 : 步进电机
 * 描述 : 采用ULN2003驱动步进电机.
*/
// 连接步进电机驱动器接口
int outPorts[] = {15, 16, 17, 18};

void setup() {
  // 设置引脚输出
  for (int i = 0; i < 4; i++) {
    pinMode(outPorts[i], OUTPUT);
  }
}

void loop()
{
  // 转一整圈
  moveSteps(true, 32 * 64, 3);
  delay(1000);
  // 向另一个方向旋转一整圈
  moveSteps(false, 32 * 64, 3);
  delay(1000);
}

//建议:ms在3 ~ 20之间时，电机转动准确
void moveSteps(bool dir, int steps, byte ms) {
  for (unsigned long i = 0; i < steps; i++) {
    moveOneStep(dir); // 旋转一步
    delay(constrain(ms,3,20));        // 控制速度
  }
}

void moveOneStep(bool dir) {
  // 定义一个变量，用四个低位表示端口状态
  static byte out = 0x01;
  // 根据旋转方向确定换挡方向
  if (dir) {  // 环形左移
    out != 0x08 ? out = out << 1 : out = 0x01;
  }
  else {      // 环形右移
    out != 0x01 ? out = out >> 1 : out = 0x08;
  }
  // 输出信号到每个端口
  for (int i = 0; i < 4; i++) {
    digitalWrite(outPorts[i], (out & (0x01 << i)) ? HIGH : LOW);
  }
}

void moveAround(bool dir, int turns, byte ms){
  for(int i=0;i<turns;i++)
    moveSteps(dir,32*64,ms);
}
void moveAngle(bool dir, int angle, byte ms){
  moveSteps(dir,(angle*32*64/360),ms);
}
//********************************************************************************

```



**6.项目现象：**

代码上传成功后，外接电源，上电后，你会看到的现象是：ULN2003驱动模块上的D1,D2,D3,D4四个LED点亮，步进电机先逆时针旋转，再顺时针旋转，并保持此状态循环。

![图片不存在](./Arduino/media/f1a21b2560cf13c03120dd628d869dc2.png)

























## 项目21 继电器

**1.项目介绍：**

在日常生活中，我们一般使用交流来驱动电气设备，有时我们会用开关来控制电器。如果将开关直接连接到交流电路上，一旦发生漏电，人就有危险。从安全的角度考虑，我们特别设计了这款具有NO(常开)端和NC(常闭)端的继电器模块。在这节课我们将学习一个比较特殊，好用的开关，就是继电器模块。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/c910a7be7acddac1d2c4e4a1613524f4.png)|![图片不存在](./Arduino/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |:--: |
|ESP32*1|面包板*1|继电器模块*1|红色LED*1|
|![图片不存在](./Arduino/media/1a190cfbfe81a1524e1d1ef681688a64.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|
|3P转杜邦线公单*1|USB 线*1|220Ω电阻*1|跳线若干|

**3.元件知识：**

**继电器：** 它主要采用HK4100F-DC 5V-SHC继电器元件。继电器有3个接线柱用于外接电路，分别为NO、COM和NC端（背后丝印）。

常开（NO）：该引脚是常开的，除非向继电器模块的信号引脚提供信号，因此，普通接触针通过NC脚断开其连接，通过NO脚建立连接。

公共触点（COM）：此引脚用来连接其他模块/元器件，如LED。

LED：![图片不存在](./Arduino/media/325f351a1cc5c9af86988ddafd03fa19.png)

常闭（NC）：此NC引脚通过COM引脚连接，形成闭合电路，可以通过ESP32等开发板，控制继电器模块，来切换闭合或断开。

当继电器没有接控制信号时，COM端和NC端连通，COM端和NO端断开。
控制时，把G接控制板的GND，V接控制板的5V，S接控制板的数字口。当S信号端设置为高电平时，继电器开启，继电器COM端和NC端断开，COM端和NO端连通；S信号端设置为低电平时，继电器关闭，继电器COM端和NC端连通，COM端和NO端断开。

- 工作电压：5V（DC）
- 工作电流：≤50MA
- 最大功率：0.25W
- 输入信号：数字信号
- 触点电流：<3A

**继电器原理图：**

![图片不存在](./Arduino/media/69a582c7bb9bd40bafb1260e502e2b58.png)

**4.项目接线图：**

![图片不存在](./Arduino/media/8515f4684cfb19689fdd94da8e731f58.png)

**5.项目代码：**



```
//**********************************************************************************
/*
 * 文件名  : 继电器
 * 描述 : 继电器开与关.
*/
#define  Relay  15 // 定义数字15
void setup()
{
pinMode(Relay, OUTPUT); // 将“继电器”设置为“输出”
}
void loop()
{
digitalWrite(Relay, HIGH); // 打开继电器
delay(1000); //延时 1 s
digitalWrite(Relay, LOW); // 关闭继电器
delay(1000); // 延时 1 s
}
//**********************************************************************************

```


**6.项目现象：**

代码上传成功后，利用USB线上电，你会看到的现象是：继电器将循环开与关，开启1秒LED点亮1秒，关闭1秒LED熄灭1秒。同时可以听到继电器开与关的声音，还可以看到继电器上的指示灯指示状态的变化。

![图片不存在](./Arduino/media/ed4aeec7d8248caffd41c4788c3dde01.jpg)


























## 项目22 调光灯

**1.项目介绍：**

电位器是一个带有滑动或旋转触点的三端电阻器，它形成一个可调的分压器。它的工作原理是在均匀电阻上改变滑动触点的位置。在电位器中，整个输入电压被施加到电阻的整个长度上，输出电压是固定触点和滑动触点之间的电压值。在这个项目中，我们将学习使用ESP32读取电位器的值，并结合LED制作一个调光灯。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/75c2400a88559cf22295c22147625d98.png)|![图片不存在](./Arduino/media/e8726e55ebfb8e7520e615575ce89204.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|可调电位器*1|红色 LED*1|
|![图片不存在](./Arduino/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|![图片不存在](./Arduino/media/4107849550a2c6d09592b2a28e291b54.png) | |  
|220Ω电阻*1|USB 线*1|跳线若干 | |

**3.元件知识：**

![图片不存在](./Arduino/media/4a10a2fa7d595fb2683977c08657de34.png)

**可调电位器：** 可调电位器是电阻和模拟电子元件的一种，具有0和1两种状态(高电平和低电平)。模拟值不同，其数据状态呈现为1 ~ 1024等线性状态。

**ADC：** ADC是一种电子集成电路，用于将模拟信号(如电压)转换为由1和0组成的数字或二进制形式。我们在ESP32上的ADC的范围是12位，这意味着分辨率是2^12=4096，它表示一个范围(3.3V)将被平均划分为4096份。模拟值的范围对应于ADC值。因此，ADC拥有的比特越多，模拟的分区就越密集，最终转换的精度也就越高。

 ![图片不存在](./Arduino/media/8f067a222c20bd1a949bb504f34df15d.png)

分节1: 0V—(3.3/4095)V 范围内的模拟量对应数字0;

分节2: (3.3/4095)V—2*(3.3/4095)V 范围内的模拟量对应于数字1;

......

下面的模拟将被相应地划分。换算公式如下：

![图片不存在](./Arduino/media/66f4a644cdb895d4a7910a3f1ac90ccd.png)

**DAC：** 这一过程的可逆需要DAC，数字到模拟转换器。数字I/O端口可以输出高电平和低电平(0或1)，但不能输出中间电压值，这就是DAC有用的地方。ESP32有两个8位精度的DAC输出引脚GPIO25和GPIO26，可以将VCC(这里是3.3V)分成2^8=256个部分。例如，当数字量为1时，输出电压值为3.3/256×1V，当数字量为128时，输出电压值为3.3/256 ×128=1.65V, DAC的精度越高，输出电压值的精度就越高。

换算公式如下：

![图片不存在](./Arduino/media/0412cb6efce5c1d33e84aeac0931c402.png)

**ESP32主板上的ADC：** 

ESP32有16个引脚，可以用来测量模拟信号。GPIO引脚序列号和模拟引脚定义如下表所示：

![图片不存在](./Arduino/media/6e8bbcdf34c3bca663c73236fbb3f83f.png)

**ESP32主板上的DAC：**

![图片不存在](./Arduino/media/379d9c501ea4dfc829b6b52dba5a13e7.png)

**4.读取电位器的ADC值，DAC值和电压值：**

我们将电位器连接到ESP32的模拟IO口上来读取电位器的ADC值，DAC值和电压值。接线请参照以下接线图：

![图片不存在](./Arduino/media/669570530b1f544aea810426eff2c4c3.jpg)


```
//**********************************************************************************
/*  
 * 文件名   : 读取电位器模拟值
 * 描述 : ADC,DAC和电压的基本用法
*/
#define PIN_ANALOG_IN  36  //电位器的引脚

void setup() {
  Serial.begin(115200);
}

//在loop()中，使用analogRead()函数获取ADC值，
//然后使用map()函数将值转换为8位精度的DAC值。
//输入输出电压下式计算，
//信息最终被打印出来.

void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN);
  int dacVal = map(adcVal, 0, 4095, 0, 255);
  double voltage = adcVal / 4095.0 * 3.3;
  Serial.printf("ADC Val: %d, \t DAC Val: %d, \t Voltage: %.2fV\n", adcVal, dacVal, voltage);
  delay(200);
}
//**********************************************************************************

```

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为115200。可以看到的现象是：串口监视器窗口将打印出电位器的ADC值，DAC值和电压值，转动电位器手柄时，ADC值，DAC值和电压值发生变化。

![图片不存在](./Arduino/media/aad8411c35d568962735bf062ce54ee2.png)



**5.调光灯的接线图：**

在前面一步，我们读取了电位器的ADC值，DAC值和电压值，现在我们需要将电位器的ADC值转换成LED的亮度，来做成一个亮度可调的灯。见如下所示接线图：

![图片不存在](./Arduino/media/231f15fcdc1a50e5847ca582872499b6.jpg)

**6.项目代码：**


```
//**********************************************************************************
/*  
 * 文件名  : 调光灯
 * 描述 : 通过电位器控制LED的亮度.
*/
#define PIN_ANALOG_IN    36  //电位器的引脚
#define PIN_LED     15  // LED的引脚
#define CHAN            0
void setup() {
  ledcSetup(CHAN, 1000, 12);
  ledcAttachPin(PIN_LED, CHAN);
}

void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN); //读adc
  int pwmVal = adcVal;        // adcVal重映射到pwmVal
  ledcWrite(CHAN, pwmVal);    // 设置脉冲宽度.
  delay(10);
}
//**********************************************************************************

```

**7.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，你会看到的现象是：转动电位器手柄，LED的亮度会相应地改变。

![图片不存在](./Arduino/media/9bb5d9041ac5f0d5a4b20b31291457e6.png)
















## 项目23 火焰警报器

**1.项目介绍：**

火灾是一种可怕的灾害，火灾报警系统在房屋，商业建筑和工厂中是非常有用的。在本项目中，我们将使用ESP32控制火焰传感器，蜂鸣器和LED来模拟火灾报警装置。这是一个有意义的创客活动。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/41b3d98fdbcbfb06e20591b80a03d586.png)|![图片不存在](./Arduino/media/e8726e55ebfb8e7520e615575ce89204.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|火焰传感器*1|红色 LED*1|
|![图片不存在](./Arduino/media/a802ce7dc086858873e587c19b45578d.png)|![图片不存在](./Arduino/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Arduino/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Arduino/media/4107849550a2c6d09592b2a28e291b54.png) |
|有源蜂鸣器*1|220Ω电阻*1|10KΩ电阻*1|跳线若干 |
|![图片不存在](./Arduino/media/6c3a06627faa0d87dd69cbd361929240.png)|![图片不存在](./Arduino/media/d23956651d15073e880387c5a5419d80.png)|![图片不存在](./Arduino/media/2266d29566a875c35c2bd4be3e4a23f8.png)| |
|NPN型晶体管(S8050)*1|1kΩ 电阻*1 |USB 线*1| |

**3.元件知识：**

![图片不存在](./Arduino/media/41b3d98fdbcbfb06e20591b80a03d586.png)

**火焰传感器（红外接收三极管）：** 火焰会发出一定程度的IR光，这种光人眼是看不到的，但我们的红外接收三极管可以检测到它，并提醒微控制器（如ESP32）已经检测到火灾。红外接收三极管可以探测火焰，然后将火焰亮度转换为波动水平信号。红外接收三极管的短引脚是负极，另一个长引脚是正极。我们应该连接短引脚（负极)到5V，连接长引脚(正极)到模拟引脚，一个电阻和GND。如下图所示：

![图片不存在](./Arduino/media/dde086c54e0343400582892ae91d818a.png)

<span style="color: rgb(255, 76, 65);">注意：</span>火焰传感器应避开日光、汽车头灯、白炽灯直接照射，也不能对着热源(如暖气片、加热器)或空调，以避免环境温度较大的变化而造成误报。同时还易受射频辐射的干扰。

**4.读取火焰传感器的ADC值，DAC值和电压值：**

我们首先用一个简单的代码来读取火焰传感器的ADC值，DAC值和电压值并打印出来。接线请参照以下接线图：

![图片不存在](./Arduino/media/5c151d185e7967e77ff4a8d3e17331f2.png)



```
//**********************************************************************************
/*  
 * 文件名  : 读取火焰传感器的模拟值
 * 描述 : ADC,DAC和电压的基本用法
*/
#define PIN_ANALOG_IN  36  //火焰传感器的引脚

void setup() {
  Serial.begin(115200);
}

//在loop()中，使用analogRead()函数获取ADC值，
//然后使用map()函数将值转换为8位精度的DAC值。
//输入输出电压按下式计算，
//信息最终被打印出来.

void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN);
  int dacVal = map(adcVal, 0, 4095, 0, 255);
  double voltage = adcVal / 4095.0 * 3.3;
  Serial.printf("ADC Val: %d, \t DAC Val: %d, \t Voltage: %.2fV\n", adcVal, dacVal, voltage);
  delay(200);
}
//**********************************************************************************

```

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。可以看到的现象是：串口监视器窗口将打印火焰传感器读取的ADC值，DAC值和电压值，当火焰靠近火焰传感器时，ADC值，DAC值和电压值增大；反之，ADC值，DAC值和电压值减小。

![图片不存在](./Arduino/media/aad8411c35d568962735bf062ce54ee2.png)



**5.火焰报警的接线图：**

接下来，我们将使用火焰传感器和蜂鸣器、LED制作一个有趣的项目——火灾报警装置。当火焰传感器检测到火焰时，LED闪烁，蜂鸣器报警。

![图片不存在](./Arduino/media/056501565145dc46ce00dfb750d87e9f.png)

**6.项目代码：**

（<span style="color: rgb(255, 76, 65);">注意：代码中的阀值500可以根据实际情况自己重新设置</span>）



```
//**********************************************************************************
/*  
 * 文件名 : 火焰警报
 * 描述 : 通过火焰传感器控制蜂鸣器和LED.
*/
#define PIN_ADC0      36  //火焰传感器的引脚
#define PIN_LED       15  // LED的引脚
#define PIN_BUZZER    4  // 蜂鸣器的引脚

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUZZER, OUTPUT);
  pinMode(PIN_ADC0, INPUT);
}

void loop() {
  int adcVal = analogRead(PIN_ADC0); //读取火焰传感器的ADC值
  if (adcVal >= 500) {
    digitalWrite (PIN_BUZZER, HIGH); //蜂鸣器鸣叫
    digitalWrite(PIN_LED, HIGH); // 点亮 LED
    delay(500); // 延时0.5s.
    digitalWrite (PIN_BUZZER, LOW);
    digitalWrite(PIN_LED, LOW); // 熄灭 LED
    delay(500); // 延时0.5s.
  }
 else
 {
    digitalWrite(PIN_LED, LOW);  //熄灭 LED
    digitalWrite (PIN_BUZZER, LOW); //关闭蜂鸣器
  }
}
//**********************************************************************************

```
**7.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，你会看到的现象是：当火焰传感器检测到火焰时，LED闪烁，蜂鸣器报警；否则，LED不亮，蜂鸣器不响。

![图片不存在](./Arduino/media/1790b8a741eea4def3eac4e122049b01.png)












## 项目24 小夜灯

**1.项目介绍：**

传感器或元件在我们的日常生活中是无处不在的。例如，一些公共路灯在晚上会自动亮起，而在白天会自动熄灭。为什么呢? 事实上，这些都是利用了一种光敏元件，可以感应外部环境光强度的元件。晚上，当室外亮度降低时，路灯会自动打开；到了白天，路灯会自动关闭。这其中的原理是很简单的，在本实验中我们使用ESP32控制LED就来实现这个路灯的效果。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/72c1149c0cbd940aa8cf2356ba75ce6b.png)|![图片不存在](./Arduino/media/e8726e55ebfb8e7520e615575ce89204.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|光敏电阻*1|红色 LED*1|
|![图片不存在](./Arduino/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Arduino/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Arduino/media/4107849550a2c6d09592b2a28e291b54.png) |![图片不存在](./Arduino/media/2266d29566a875c35c2bd4be3e4a23f8.png)|
|220Ω电阻*1|10KΩ电阻*1|跳线若干 |USB 线*1|

**3.元件知识：**

![图片不存在](./Arduino/media/72c1149c0cbd940aa8cf2356ba75ce6b.png)

光敏电阻：是一种感光电阻，其原理是光敏电阻表面上接收亮度(光)降低电阻，光敏电阻的电阻值会随着被探测到的环境光的强弱而变化。有了这个特性，我们可以使用光敏电阻来检测光强。光敏电阻及其电子符号如下：

![图片不存在](./Arduino/media/1905cf730948d3735f192c184361e2a2.png)

下面的电路是用来检测光敏电阻电阻值的变化：

![图片不存在](./Arduino/media/7ad49eab2d60085716bb365d33f055bd.png)

在上述电路中，当光敏电阻的电阻因光强的变化而改变时，光敏电阻与电阻R2之间的电压也会发生变化。因此，通过测量这个电压就可以得到光的强度。本项目是采用上图左边的电路来接线的。 

**4.读取光敏电阻的ADC值，DAC值和电压值：**

我们首先用一个简单的代码来读取光敏电阻的ADC值，DAC值和电压值并打印出来。接线请参照以下接线图：

![图片不存在](./Arduino/media/c19e5b58e073c49a22dd0fdfdb38d7f7.png)



```
//**********************************************************************************
/*  
 * 文件名  : 读取光敏传感器的模拟值
 * 描述 : ADC的基本用法
*/
#define PIN_ANALOG_IN  36  //光敏传感器的引脚

void setup() {
  Serial.begin(115200);
}

//在loop()中，使用analogRead()函数获取ADC值，
//然后使用map()函数将值转换为8位精度的DAC值。
//输入输出电压按下式计算，
//信息最终被打印出来.

void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN);
  int dacVal = map(adcVal, 0, 4095, 0, 255);
  double voltage = adcVal / 4095.0 * 3.3;
  Serial.printf("ADC Val: %d, \t DAC Val: %d, \t Voltage: %.2fV\n", adcVal, dacVal, voltage);
  delay(200);
}
//**********************************************************************************

```
编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。可以看到的现象是：串口监视器窗口将打印光敏电阻读取的ADC值，DAC值和电压值，当逐渐减弱光敏电阻所处环境中的光线强度时，ADC值，DAC值和电压值逐渐增大；反之，ADC值，DAC值和电压值逐渐减小。

![图片不存在](./Arduino/media/aad8411c35d568962735bf062ce54ee2.png)



**5.光控灯的接线图：**

我们在前面做了一个小小的调光灯，现在我们来做一个光控灯。它们的原理是相同的，即通过ESP32获取传感器的模拟值，然后调节LED的亮度。

![图片不存在](./Arduino/media/eac0e08c0dde6b435907827d36eb1957.png)

**6.项目代码：**



```
//**********************************************************************************
/*  
 * 文件名  : 夜光灯
 * 描述 : 通过光敏传感器控制LED亮度.
*/
#define PIN_ANALOG_IN    36  // 光敏传感器的引脚
#define PIN_LED     15  // LED的引脚
#define CHAN            0
#define LIGHT_MIN       372
#define LIGHT_MAX       2048
void setup() {
  ledcSetup(CHAN, 1000, 12);
  ledcAttachPin(PIN_LED, CHAN);
}

void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN); //读取 adc
  int pwmVal = map(constrain(adcVal, LIGHT_MIN, LIGHT_MAX), LIGHT_MIN, LIGHT_MAX, 0, 4095);  // adcVal重映射到pwmVal
  ledcWrite(CHAN, pwmVal);    // 设置脉冲宽度.
  delay(10);
}
//**********************************************************************************

```
**7.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，你会看到的现象是：当减弱光敏电阻所处环境中的光线强度时，LED变亮，反之，LED变暗。

![图片不存在](./Arduino/media/b640e71ba0840d6f99fb089ab248ca4f.png)














## 项目25 人体感应灯

**1.项目介绍：**

人体感应灯一般都用在黑漆漆的楼道区域，随着科技的发展，人体感应灯的使用在我们现实生活中十分常见。小区的楼道，房间的卧室、地下城的车库、卫生间等区域都会用到人体感应灯。现实生活中的人体感应灯一般是由人体红外传感器、灯、光敏电阻传感器等组成的。

在本项目中，我们将学习如何利用人体红外传感器、LED、光敏电阻来制作一款人体感应灯。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/72c1149c0cbd940aa8cf2356ba75ce6b.png)|![图片不存在](./Arduino/media/e8726e55ebfb8e7520e615575ce89204.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|光敏电阻*1|红色 LED*1|
|![图片不存在](./Arduino/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Arduino/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Arduino/media/4107849550a2c6d09592b2a28e291b54.png) |![图片不存在](./Arduino/media/2266d29566a875c35c2bd4be3e4a23f8.png)|
|220Ω电阻*1|10KΩ电阻*1|跳线若干 |USB 线*1|
|![图片不存在](./Arduino/media/6f0780e5e12a2154c17a6310c13055a8.png)|![图片不存在](./Arduino/media/1a190cfbfe81a1524e1d1ef681688a64.png)| | |
|人体红外传感器*1|3P转杜邦线公单*1| | |

**3.项目接线图：**

![图片不存在](./Arduino/media/6ae9651dc841b151b5a09711b607a99a.png)

**4.项目代码：**


```
//**********************************************************************************
/*  
 * 文件名  : 人体感应灯
 * 描述 : 通过光敏传感器和PIR运动传感器控制LED.
*/
#define PIN_ADC0  36   //光敏传感器的引脚
#define PIN_LED   4  // LED的引脚
#define pirPin   15     // PIR传感器的引脚
byte pirStat = 0;   // PIR传感器的状态
void setup() {
  Serial.begin(115200);
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_ADC0, INPUT);
  pinMode(pirPin, INPUT);
}

void loop() {
  int adcVal = analogRead(PIN_ADC0); //读取光敏传感器的ADC值
  pirStat = digitalRead(pirPin); //读取PIR传感器的值
  if (adcVal >= 2000) {
      if (pirStat == HIGH){
         digitalWrite(PIN_LED, HIGH);//点亮 LED
         } 
      else{
         digitalWrite(PIN_LED, LOW);//关闭 LED   
        }
  }
   else{
      digitalWrite(PIN_LED, LOW);//关闭 LED
      }
}
//**********************************************************************************

```
**5.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，你会看到的现象是：当你的手覆盖光敏电阻的感光部分来模拟黑暗状态时，然后用另一只手在人体红外传感器前面晃动，LED也点亮。如果光敏电阻的感光部分没有被覆盖，这时候用手在人体红外传感器前面晃动，LED处于熄灭状态。

![图片不存在](./Arduino/media/4d8082b8c5002988fea39df40c09e1a5.png)

















## 项目26 声控风扇

**1.项目介绍：**

声音传感器有一个内置的电容驻极体麦克风和功率放大器。它可以用来检测环境的声音强度。在这个项目中，我们利用ESP32控制声音传感器和电机模块模拟一个声控风扇。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/2d879e56de94fbb14399ec17c0b10861.png)|![图片不存在](./Arduino/media/1a27646ca0ba9c5dc4d300edbab826c8.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|130电机模块*1|声音传感器*1 |
|![图片不存在](./Arduino/media/c562656c96657983e724daed7c8d6202.png)|![图片不存在](./Arduino/media/3cc5c242c0f357b3dc496037a7d8bae8.png)|![图片不存在](./Arduino/media/ed228ff5627e0c8cc0c79fa04f1d4d16.png)| ![图片不存在](./Arduino/media/1a190cfbfe81a1524e1d1ef681688a64.png) |
|面包板专用电源模块*1|6节5号电池盒*1|风扇叶*1|3P转杜邦线公单*1 |
|![图片不存在](./Arduino/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Arduino/media/4c49cdffc9e5e6f1aad838120d35897a.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| |
|4P转杜邦线公单*1|5号电池(<span style="color: rgb(255, 76, 65);">自备</span>)*6|USB 线*1| |

**3.元件知识：**

![图片不存在](./Arduino/media/c49408db3d24bf99b4731cd36cf9fd40.png)

**声音传感器:** 通常用于检测周围环境中的声音响度。微型控制板可以通过模拟输入接口采集其输出信号。传感器的S引脚是模拟输出，是麦克风电压信号的实时输出。传感器附带一个电位器，这样你就可以调整信号强度。你可以使用它来制作一些交互式作品，如语音操作的开关等。

**声音传感器参数：**

- 工作电压：3.3V-5V（DC）
- 工作电流：≤100mA
- 最大功率：0.5W
- 输出信号：模拟信号

**声音传感器原理图：**

它主要采用一个高感度麦克风元件和LM386芯片。高感度麦克风元件用于检测外界的声音。利用LM386芯片搭建合适的电路，我们对高感度麦克风检测到的声音进行放大，最大倍数为200倍。使用时我们可以通过旋转传感器上电位器，调节声音的放大倍数。调节时，顺时针调节电位器到尽头，放大倍数最大。

![图片不存在](./Arduino/media/c57ab278b6b9a96aa8236e95970ce481.png)

**4.读取声音传感器的ADC值，DAC值和电压值：**

我们首先使用一个简单的代码来读取声音传感器的ADC值，DAC值和电压值并将其打印出来，接线请参照以下接线图：

![图片不存在](./Arduino/media/8a39a8a15a7cfe5c210b6f0a74d0db7f.png)




```
//**********************************************************************************
/*  
 * 文件名 : 读取声音传感器模拟值
 * 描述 : ADC的基本用法
*/
#define PIN_ANALOG_IN  36  //声音传感器的引脚

void setup() {
  Serial.begin(115200);
}

//在loop()中，使用analogRead()函数获取ADC值，
//然后使用map()函数将值转换为8位精度的DAC值。
//输入输出电压按下式计算，
//信息最终被打印出来.

void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN);
  int dacVal = map(adcVal, 0, 4095, 0, 255);
  double voltage = adcVal / 4095.0 * 3.3;
  Serial.printf("ADC Val: %d, \t DAC Val: %d, \t Voltage: %.2fV\n", adcVal, dacVal, voltage);
  delay(200);
}
//**********************************************************************************

```

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。可以看到的现象是：串口监视器窗口将打印声音传感器读取的模拟值，当对着传感器拍拍手，声音传感器的模拟值发生了显著的变化。

![图片不存在](./Arduino/media/a5d14642c10b5b4b1bdbf638dad41d75.png)




**5.智能风扇的接线图：**

接下来，我们正式进入这个项目。我们用声音传感器、130电机模块和风叶片来模拟一个声控风扇。接线图如下：

![图片不存在](./Arduino/media/8e2f510e4622a1ac71304da9c6f28dcb.png)

(<span style="color: rgb(255, 76, 65);">注: 先接好线，然后在直流电机上安装一个小风扇叶片。</span>)

**6.项目代码：**

（<span style="color: rgb(255, 76, 65);">注意：</span>代码中的阀值600可以根据实际情况自己重新设置）




```
//**********************************************************************************
/*  
 * 文件名 : 声控风扇
 * 描述 : 通过声音传感器控制风扇.
*/
#define PIN_ADC0   36  //声音传感器的引脚
#define PIN_Motorla    15  // 电机的Motor_IN+引脚
#define PIN_Motorlb    2 // 电机的Motor_IN引脚

void setup() {
  pinMode(PIN_Motorla, OUTPUT);//设置Motorla为输出
  pinMode(PIN_Motorlb, OUTPUT);//设置Motorlb为输出
  pinMode(PIN_ADC0, INPUT);//设置PIN_ADC2为INPUT
}

void loop() {
  int adcVal = analogRead(PIN_ADC0); //读取声音传感器的ADC值
  if (adcVal > 600) {
    digitalWrite(PIN_Motorla,HIGH); //旋转
    digitalWrite(PIN_Motorlb,LOW);
    delay(5000); //延时 5S
  }
  else
  {
    digitalWrite(PIN_Motorla,LOW); //停止旋转
    digitalWrite(PIN_Motorlb,LOW); 
  }
}
//**********************************************************************************

```
**7.项目现象：**

编译并上传代码到ESP32，代码上传成功后，外接电源，上电后，你会看到的现象是：对着声音传感器拍拍手，当声音强度超过阈值时，小风扇旋转起来；反之，小风扇不旋转。

![图片不存在](./Arduino/media/0f246e724493848af4925a5155312fe7.png)












## 项目27 温度测量

**1.项目介绍：** 

LM35是一种常用且易于使用的温度传感器。它不需要其他硬件你只需要一个模拟端口就可以了。难点在于编译代码，将其读取的模拟值转换为摄氏温度。在这个项目中，我们使用一个温度传感器和3个LED灯来制作一个温度测试仪。当温度传感器接触不同的温度物体时，LED灯就会显示不同的颜色。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/325f351a1cc5c9af86988ddafd03fa19.png)|![图片不存在](./Arduino/media/36f39ba5899a86990d02500371bc0e77.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|黄色 LED*1|
|![图片不存在](./Arduino/media/f361df3b38005087cb22efc34689d554.png)|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)|![图片不存在](./Arduino/media/07ce12cc558e18e090477850bf5a1fbf.png)| ![图片不存在](./Arduino/media/1a190cfbfe81a1524e1d1ef681688a64.png) |
|绿色LED*1|220Ω电阻*3|LM35温度传感器*1|3P转杜邦线公单*1|
| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| | |
|跳线若干|USB 线*1| | |

**3.元件知识：**

![图片不存在](./Arduino/media/07ce12cc558e18e090477850bf5a1fbf.png)

**LM35温度传感器：** 是一种常用的LM35温度传感器，它主要采用LM35DZ传感器元件。该元件的输出电压与摄氏温标呈线性关系。在室温下，无需额外的校准处理即可达到1/4℃的精度。LM35温度传感器可以根据不同的温度产生不同的电压，当温度为0℃时输出0V；每升高1℃，输出电压将增加10mv。换算公式如下：

![图片不存在](./Arduino/media/1e00e0086f72e30d983131b0a38f8e92.png)

**4.读取LM35的温度值：**

我们首先使用一个简单的代码读取温度传感器的值并将其打印出来，，其接线图如下所示：

![图片不存在](./Arduino/media/596272fdfcab5e88e0844db4f8147d01.png)

这里，LM35输出给ESP32的模拟引脚是GPIO36。这个模拟电压被转换成数字形式，并经过处理得到温度读数。




```
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

```
编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为115200。可以看到的现象是：串口监视器窗口将打印LM35温度传感器读取的温度值。用手捏住LM35元件，LM35温度传感器读取的温度值在变化。

![图片不存在](./Arduino/media/4e7b119bfb73a29a88cd9e185399d0de.png)




**5.温度测量的接线图：** 

现在使用LM35温度传感器和3个led做一个温度测试。当LM35温度传感器感应到不同的温度时，不同的led会点亮。按照下图进行接线。

![图片不存在](./Arduino/media/ab43144f44c011ca563ea2baf87f2a7e.png)

**6.项目代码：**

（<span style="color: rgb(255, 76, 65);">注意：</span>代码中的阀值20和25可以根据实际情况自己重新设置）




```
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

```
**7.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，你会看到的现象是：打开串口监视器，设置波特率为115200。可以看到的现象是：串口监视器窗口将打印LM35温度传感器读取的温度值，当LM35温度传感器感应到不同的温度时，不同的led会点亮。

![图片不存在](./Arduino/media/e72fc196f226e6746ccf012588e13b39.png)













## 项目28 摇杆控制RGB灯

**1.项目介绍：**

摇杆模块是一个有两个模拟输入和一个数字输入的组件。广泛应用于游戏操作、机器人控制、无人机控制等领域。在这个项目中，我们使用ESP32和摇杆模块控制RGB。这样，你可以在实践中对摇杆模块的原理和操作有更深入的了解。 

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/3ee8831539e4abb6a61b76bda584202a.png)|![图片不存在](./Arduino/media/6de88c5b9c38d8ab879ae91eb51431b7.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|摇杆模块*1|RGB LED*1|
|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|![图片不存在](./Arduino/media/7172e3b16a2567aa57171cf42bbb3d49.png)|
|220Ω电阻*3|跳线若干|USB 线*1|5P转杜邦线公单*1|

**3.元件知识：**

![图片不存在](./Arduino/media/3ee8831539e4abb6a61b76bda584202a.png)

**摇杆模块：** 主要是采用PS2手柄摇杆元件，实际上摇杆模块有3个信号端引脚，模拟3维空间，摇杆模块的引脚分别是GND、VCC、信号端（B、X、Y），其中信号端X、Y模拟空间的X轴和Y轴，控制时，模块的X、Y信号端是连接控制板模拟口，通过控制2个模拟输入值来控制物体在空间X、Y轴的坐标。信号端B模拟空间Z轴，它一般是接数字口，做按键使用。

VCC接控制板的电源输出端V/VCC（3.3/5V），GND接控制板的G/GND，原始状态下读出电压大约为1.65V/2.5V左右，对于X轴方向，当随箭头方向逐渐移动，读出电压值随着增加，且可以达到最大电压；随箭头相反方向逐渐移动，读出电压值逐渐减少，减少到最小电压。对于Y轴方向，当沿着模块上的箭头方向逐渐按下，读出电压值随着增加，且可以达到最大电压；随箭头相反方向逐渐按下，读出电压值逐渐减少，减少到最小电压。对于Z轴方向，信号端B接数字口，原始状态下输出0，按下输出1。这样，我们可以读取两个模拟值和一个数字口的高低电平情况，来判断模块上摇杆的工作状态。

**模块参数：**

- 输入电压：DC 3.3V ~ 5V
- 输出信号：X/Y双轴模拟值+Z轴数字信号
- 适用范围：适用于控制点坐标在平面内的运动，双自由度舵机的控制等。
- 产品特点：外观精美，摇杆手感优越，操作简单，反应灵敏，使用寿命长。

**4.读取摇杆模块的值：**

我们必须使用ESP32的模拟IO口从摇杆模块的X/Y引脚读取值，并使用数字IO口读取按钮的数字信号。请按照下面的接线图进行接线：

![图片不存在](./Arduino/media/94ad37529f05fd4d7c72b15deaeec40f.png)




```
//**********************************************************************************
/*  
 * 文件名  : 读取摇杆值
 * 描述 : 从摇杆模块读取数据.
*/
int xyzPins[] = {36, 39, 14};   //引脚x,y,z
void setup() {
  Serial.begin(115200);
  pinMode(xyzPins[0], INPUT); //x 轴. 
  pinMode(xyzPins[1], INPUT); //y 轴. 
  pinMode(xyzPins[2], INPUT_PULLUP);   //z 轴是一个按键.
}

//在loop()中，使用analogRead()读取X轴和Y轴的值
//和使用digitalRead()读取Z轴的值，然后显示它们.

void loop() {
  int xVal = analogRead(xyzPins[0]);
  int yVal = analogRead(xyzPins[1]);
  int zVal = digitalRead(xyzPins[2]);
  Serial.println("X,Y,Z: " + String(xVal) + ", " +  String(yVal) + ", " + String(zVal));
  delay(500);
}
//**********************************************************************************

```
编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。可以看到的现象是：串口监视器窗口将打印当前摇杆的模拟值和数字值，移动摇杆或按下摇杆帽将改变串口监视器窗口中的模拟值和数字值。

![图片不存在](./Arduino/media/f48d3e1d83ae14dfbd03b66df459de82.png)

![图片不存在](./Arduino/media/c5f0c64b5c7ca20dd54a48e167bf835b.png)




**5.摇杆模块控制RGB的接线图：**

我们刚读了摇杆模块的值，这里我们需要用摇杆模块和RGB做一些事情，按照下图连接：

![图片不存在](./Arduino/media/f132bdfe058976a8a3f857100a799ef8.png)

**6.项目代码：**




```
//**********************************************************************************
/*  
 * 文件名  : 摇杆控制灯
 * 描述 : 通过摇杆控制RGB来点亮不同的颜色.
*/
int x_Pin = 36;   //x 引脚
int y_Pin = 39;   //y 引脚
int z_Pin = 14;   //z 引脚
int ledPins[] = {4, 0, 2};    //定义红、绿、蓝引脚
const byte chns[] = {0, 1, 2};        //定义PWM通道

void setup() {
  pinMode(x_Pin, INPUT); //x 轴. 
  pinMode(y_Pin, INPUT); //y 轴. 
  pinMode(z_Pin, INPUT_PULLUP);   //z 轴 是一个按键.
  for (int i = 0; i < 3; i++) {   //设置pwm通道，1KHz,8bit
    ledcSetup(chns[i], 1000, 8);
    ledcAttachPin(ledPins[i], chns[i]);
  }
}

//在loop()中，使用analogRead()读取X轴和Y轴的值
//和使用digitalRead()读取Z轴的值，然后显示它们.

void loop() {
  int xVal = analogRead(x_Pin);
  int yVal = analogRead(y_Pin);
  int zVal = digitalRead(z_Pin);
  if (xVal < 1000){
     ledcWrite(chns[0], 255); //普通阴极LED，高电平开启LED.
     ledcWrite(chns[1], 0);
     ledcWrite(chns[2], 0);
   }
  else if (xVal > 3000){
     ledcWrite(chns[0], 0); 
     ledcWrite(chns[1], 255);
     ledcWrite(chns[2], 0);
   }
  else if (yVal < 1000){
     ledcWrite(chns[0], 0);
     ledcWrite(chns[1], 0);
     ledcWrite(chns[2], 255);
   }
  else if (yVal > 3000){
     ledcWrite(chns[0], 255); 
     ledcWrite(chns[1], 255);
     ledcWrite(chns[2], 255);
   }
}
//**********************************************************************************

```
**7.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，你会看到的现象是：①如果摇杆在X方向上移动到最左边，RGB光变成红色; ②如果摇杆在X方向上移动到最右边，RGB光变为绿色; ③如果摇杆在Y方向上移动到最上面，RGB光变成白色; ④如果摇杆在Y方向上移动到最下面，RGB光变成蓝色。

![图片不存在](./Arduino/media/025992d68a7316e8649a5f3e654cc175.png)

![图片不存在](./Arduino/media/4dd85d9f76f24578031a806eec39fc34.png)







## 项目29 温湿度表

**1.项目介绍：**

在冬季时，空气中的湿度很低，就是空气很干燥，再加上寒冷，人体的皮肤就容易过于干燥而裂，所以需要在用加湿器给家里的空气增加湿度，但是怎么知道空气过于干燥了呢？那就需要检测空气湿度的设备，这节课就来学习温湿度传感器的使用。我们使用温湿度传感器制作一个温湿度计，并且还结合LCD 128X32 DOT来显示温度和湿度值。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/c4b08ad87310ea27bc06383257cc7f8f.png)|![图片不存在](./Arduino/media/7b166aa2bc58fd46700f92d9d49514a1.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|LCD_128X32_DOT*1|温湿度传感器*1|
| ![图片不存在](./Arduino/media/1a190cfbfe81a1524e1d1ef681688a64.png)|![图片不存在](./Arduino/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| |
|3P转杜邦线公单*1|4P转杜邦线公单*1|USB 线*1| |

**3.元件知识：**

![图片不存在](./Arduino/media/7b166aa2bc58fd46700f92d9d49514a1.png)

**温湿度传感器：** 是一款含有已校准数字信号输出的温湿度复合传感器，其精度湿度±5%RH，温度±2℃，量程湿度20-90%RH， 温度0~50℃。温湿度传感器应用专用的数字模块采集技术和温湿度传感技术，确保产品具有极高的可靠性和卓越的长期稳定性。温湿度传感器包括一个电阻式感湿元件和一个NTC测温元件，非常适用于对精度和实时性要求不高的温湿度测量场合。
工作电压在3.3V-5.5V范围内。

温湿度传感器有三个引脚，分别为VCC，GND和S。S为数据输出的引脚。使用的是串行通讯。

**温湿度传感器的单总线格式定义：**

| 名称 |单总线格式定义 |
| :--: | :--: |
| 起始信号| 微处理器把数据总线(SDA)拉低一段时间至少 18ms(最大不得超过 30ms)，通知传感器准备数据。 | 
| 响应信号 | 传感器把数据总线（SDA）拉低 83µs，再接高 87µs 以响应主机的起始信号。 |
| 湿度 | 湿度高位为湿度整数部分数据，湿度低位为湿度小数部分数据  |
| 温度 |温度高位为温度整数部分数据，温度低位为温度小数部分数据，且温度低位 Bit8 为 1 则表示负温度，否则为正温度 |
| 校验位 | 校验位＝湿度高位+湿度低位+温度高位+温度低位 |

**温湿度传感器数据时序图：** 

用户主机（MCU）发送一次开始信号后，温湿度传感器从低功耗模式转换到高速模式，待主机开始信号结束后，温湿度传感器发送响应信号，送出 40bit 的数据，并触发一次信采集。信号发送如图所示。 

![图片不存在](./Arduino/media/c40407c88735bc9564537352c20745fe.png)

温湿度传感器可以很容易地将温湿度数据添加到您的DIY电子项目中。它是完美的远程气象站，家庭环境控制系统，和农场或花园监测系统。

**温湿度传感器的参数：**

- 工作电压：+5 V
- 温度范围：0-50 °C ，误差：± 2 °C
- 湿度范围：20-90% RH ，误差：± 5% RH
- 数字接口

**温湿度传感器的原理图：**

![图片不存在](./Arduino/media/b89d7440b3a20051c5669bbdf512c619.png)

**4.读取温湿度值：**

![图片不存在](./Arduino/media/f03f8f124d26e2c632f2ec7f6d1b359d.png)

**如何添加xht11库：**

本项目代码使用了一个名为“<span style="color: rgb(255, 76, 65);">xht11</span>”库。如果你已经添加好了“<span style="color: rgb(255, 76, 65);">xht11</span>”库，则跳过此步骤。如果你还没有添加，请在学习之前添加它。添加第三方库的步骤如下:

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\xht11.ZIP** 的文件，先选中**xht11.ZIP**文件，再单击“**打开**”。

![图片不存在](./Arduino/media/6ff835d2528335b7f00acfb5a196b66d.jpg)

![图片不存在](./Arduino/media/241b68d2061444007abfe104eab9fefd.png)




```
//**********************************************************************************
/*
 * 文件名  : 温湿度传感器
 * 描述 : 使用XHT11测量温湿度。将结果打印到串口.
*/
#include "xht11.h"
//gpio13
xht11 xht(13);

unsigned char dht[4] = {0, 0, 0, 0};//只接收数据的前32位，不接收奇偶校验位
void setup() {
  Serial.begin(115200);//打开串口监视器，将波特率设置为115200
}

void loop() {
  if (xht.receive(dht)) { //正确选中时返回true
    Serial.print("RH:");
    Serial.print(dht[0]); //湿度的积分部分，DHT[0]为小数部分
    Serial.print("%  ");
    Serial.print("Temp:");
    Serial.print(dht[2]); //温度的积分部分，DHT[3]是分数部分
    Serial.println("C");
  } else {    //读取错误
    Serial.println("sensor error");
  }
  delay(1000);  //设备读取等待时间为1000ms
}
//**********************************************************************************

```
编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。你会看到的现象是：串口监视器窗口将打印当前显示当前环境中的温湿度数据，如下图。

![图片不存在](./Arduino/media/8dc70a6364ae88411eab3096238126f8.png)



**5.温湿度仪表的接线图：**

现在我们开始用LCD_128X32_DOT打印温湿度传感器的值，我们会在LCD_128X32_DOT的屏幕上看到相应的值。让我们开始这个项目吧。请按照下面的接线图进行接线：

![图片不存在](./Arduino/media/8e985ac07d8469baa791b9756a42f317.png)

**6.项目代码：**

前面已经添加过<span style="color: rgb(255, 76, 65);">xht11</span>和<span style="color: rgb(255, 76, 65);">LCD_128×32</span>库，可以不用重复添加。如果没有添加，就需要添加<span style="color: rgb(255, 76, 65);">xht11</span>和<span style="color: rgb(255, 76, 65);">LCD_128×32</span>库，添加<span style="color: rgb(255, 76, 65);">xht11</span>库的方法请参照本项目的上面方法，添加<span style="color: rgb(255, 76, 65);">LCD_128×32</span>库的方法请参照**项目17 I2C 128×32 LCD**中的方法。


```
//**********************************************************************************
/*
 * 文件名  : 温湿度计
 * 描述 : LCD显示温度和湿度的数值.
*/
#include "xht11.h"
#include "lcd128_32_io.h"

//gpio13
xht11 xht(13);
unsigned char dht[4] = {0, 0, 0, 0};//只接收数据的前32位，不接收奇偶校验位

lcd lcd(21, 22); //创建lCD128 *32引脚，sda->21， scl->22

void setup() {
  lcd.Init(); //初始化
  lcd.Clear();  //清屏
}
char string[10];

//LCD显示湿度和温度值
void loop() {
  if (xht.receive(dht)) { //正确选中时返回true
    }
  lcd.Cursor(0,0); //设置显示位置
  lcd.Display("Temper:"); //设置显示
  lcd.Cursor(0,8);
  lcd.DisplayNum(dht[2]);
  lcd.Cursor(0,11);
  lcd.Display("C");
  lcd.Cursor(2,0); 
  lcd.Display("humid:");
  lcd.Cursor(2,8);
  lcd.DisplayNum(dht[0]);
  lcd.Cursor(2,11);
  lcd.Display("%");
  delay(200);
}
//**********************************************************************************

```
**7.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，你会看到的现象是：LCD 128X32 DOT的屏幕上显示温湿度传感器检测环境中相应的温度值和湿度值。

![图片不存在](./Arduino/media/95585f276ffa5f74d4af40650ed852f5.png)




## 项目30 测距仪表

**1.项目介绍：**

HC-SR04超声波传感器是一种非常实惠的距离传感器，主要用于各种机器人项目中的物体躲避。它也被用于水位传感器，甚至作为一个停车传感器。我们把超声波传感器当作蝙蝠的眼睛，在黑暗中，蝙蝠仍然可以通过超声波识别前方的物体和方向。在本项目中，我们使用ESP32控制超声波传感器和LED模拟超声波测距仪。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/28c9fe25104d16cc0ed7da8c80c443ea.png)|![图片不存在](./Arduino/media/4191d5454859076aa2a6c069185be177.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|超声波传感器*1|4P转杜邦线公单*1
|![图片不存在](./Arduino/media/e8726e55ebfb8e7520e615575ce89204.png)|![图片不存在](./Arduino/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|
|红色 LED*4|220Ω电阻*4|跳线若干|USB 线*1|

**3.元件知识：**

**HC-SR04超声波传感器：** 像蝙蝠一样使用声纳来确定与物体的距离，它提供了精准的非接触范围检测、高精度和稳定的读数。它的操作不受阳光或黑色材料的影响，就像精密的照相机(在声学上像布料这样比较软的材料很难被探测到)。它带有超声波发射器和接收器。

![图片不存在](./Arduino/media/714ec39c0aca1fe5faa21660afa4f584.png)

在超声波传感器的前面是两个金属圆筒，这些是转换器。转换器将机械能转换成电信号。在超声波传感器中，有发射转换器和接收转换器。发射转换器将电信号转换为超声波脉冲，接收转换器将反射的超声波脉冲转换回电信号。如果你看超声波传感器的背面，你会看到的发射转换器后面有一个IC。这是控制发射转换器的IC。在接收转换器后面也有一个IC，这是一个四运算放大器，它将接收转换器产生的信号放大成足以传输到微控制器的信号。

**时序图：**

图示HC-SR04的时序图。为了开始测量，SR04的Trig必须接受至少10us的高(5V)脉冲，这将启动传感器将发射出8个周期的40kHz的超声波脉冲，并等待反射的超声波脉冲。当传感器从接收器检测到超声波时，它将设置回波引脚为高(5V)和延迟一个周期(宽度)，与距离成比例。为了获得距离，测量Echo引脚的宽度。

![图片不存在](./Arduino/media/0ef4e6d4eeb8fcda4c3414414cb2ff42.png)

时间=回波脉冲宽度，单位为us(微秒)

距离厘米=时间/ 58

距离(英寸)=时间/ 148

**4.读取超声波传感器距离值**  

我们将从一个简单的超声波测距开始，并打印测量的距离。 

![图片不存在](./Arduino/media/88695ec0baa6f351fabceb67888a85b0.png)

HC-SR04超声波传感器有四个引脚：Vcc、Trig、Echo和GND。Vcc引脚提供产生超声波脉冲的电源，接Vcc/+5V。GND引脚接地/GND。Trig引脚是控制板发送信号来启动超声波脉冲的地方。Echo引脚是超声波传感器向控制板发送关于超声波脉冲行程持续时间的信息的地方。按下图接线：

![图片不存在](./Arduino/media/b6bca4b1243254d8a499d52eacb8e372.png)




```
//**********************************************************************************
/*  
 * 文件名  : 超声波测距
 * 描述 : 使用超声波模块测量距离.
*/
const int TrigPin = 13; // 定义TrigPin
const int EchoPin = 14; // 定义EchoPin.
int duration = 0; // 定义持续时间的初始值为0
int distance = 0;//定义距离的初始值为0
void setup() 
{
  pinMode(TrigPin , OUTPUT); // 设置trigPin为输出模式
  pinMode(EchoPin , INPUT); // 设置echoPin为输入模式
  Serial.begin(115200);  // 设置波特率为115200的串口监视器.
}
void loop()
{
 // 使trigPin输出高电平持续10μs触发HC_SR04 
  digitalWrite(TrigPin , HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin , LOW);
  // 等待HC-SR04回到高电平，测量这个等待时间
  duration = pulseIn(EchoPin , HIGH);
  // 根据时间计算距离
  distance = (duration/2) / 28.5 ;
  Serial.print("Distance: ");
  Serial.print(distance); //串口打印距离值
  Serial.println("cm");
  delay(300); // 等待300ms.
}
//**********************************************************************************

```

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。可以看到的现象是：串口监视器窗口将打印超声波传感器和物体之间的距离值。

![图片不存在](./Arduino/media/c6e06e29f0189b2d9fd4c15e9566be57.png)




**5.超声波测距仪的接线图：**

接下来，我们将使用ESP32控制超声波传感器和4个LED模拟超声波测距仪。按如下图接好线：

![图片不存在](./Arduino/media/6fbf83282f8afdbf127d675cf1cb7aab.png)

**6.项目代码：**




```
//**********************************************************************************
/*  
 * 文件名  : 超声波测距仪
 * 描述 : 四个led由超声波测距控制.
*/
const int TrigPin = 13;    // 定义TrigPin
const int EchoPin = 14;    // 定义EchoPin.
const int PIN_LED1 = 4;    // 定义PIN_LED1
const int PIN_LED2 = 0;    // 定义PIN_LED2
const int PIN_LED3 = 2;    // 定义PIN_LED3
const int PIN_LED4 = 15;    // 定义PIN_LED4
int duration = 0;    // 定义持续时间的初始值为0
int distance = 0;   // 定义距离的初始值为0
void setup() 
{
  pinMode(TrigPin , OUTPUT); // 设置trigPin为输出模式
  pinMode(EchoPin , INPUT); // 设置echoPin为输入模式
  pinMode(PIN_LED1 , OUTPUT);  // 设置PIN_LED1为输出模式
  pinMode(PIN_LED2 , OUTPUT);  // 设置PIN_LED2为输出模式
  pinMode(PIN_LED3 , OUTPUT);  // 设置PIN_LED3为输出模式
  pinMode(PIN_LED4 , OUTPUT);  // 设置PIN_LED4为输出模式
  Serial.begin(115200);  //设置波特率为115200的串口监视器.
}
void loop()
{
// 使trigPin输出高电平持续10μs触发HC_SR04  
  digitalWrite(TrigPin , HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin , LOW);
// 等待HC-SR04回到高电平，测量这个等待时间
  duration = pulseIn(EchoPin , HIGH);
// calculate the distance according to the time
  distance = (duration/2) / 28.5 ;
  Serial.print("Distance: ");
  Serial.print(distance); //串口打印距离值
  Serial.println("cm");
  if ( distance <= 5 )
  {
    digitalWrite(PIN_LED1, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED1, LOW);
  }
  if ( distance <= 10 )
  {
    digitalWrite(PIN_LED2, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED2, LOW);
  }
  if ( distance <= 15 )
  {
    digitalWrite(PIN_LED3, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED3, LOW);
  }
  if ( distance <= 20 )
  {
    digitalWrite(PIN_LED4, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED4, LOW);
  }
}     
//**********************************************************************************

```
**7.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为115200。可以看到的现象是：串口监视器窗口将打印超声波传感器和物体之间的距离值。另外，当我们用手在超声波传感器前移动时，相应的LED会亮起来。

![图片不存在](./Arduino/media/2477ab30a017c161f9b5ea58dd66fa80.png)









## 项目31 温度仪表

**1.项目介绍：**

热敏电阻是一种电阻，其阻值取决于温度和温度的变化，广泛应用于园艺、家庭警报系统等装置中。因此，我们可以利用这一特性来制作温度仪表。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/c4b08ad87310ea27bc06383257cc7f8f.png)|![图片不存在](./Arduino/media/4b024c34465b366d3067277b397e5fc0.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|LCD_128X32_DOT*1|热敏电阻*1|
|![图片不存在](./Arduino/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Arduino/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| ![图片不存在](./Arduino/media/4107849550a2c6d09592b2a28e291b54.png) |
|10KΩ电阻*1|4P转杜邦线公单*1|USB 线*1|跳线若干 |

**3.元件知识：**

**热敏电阻：** 热敏电阻是一种温度敏感电阻。当热敏电阻感应到温度的变化时，它的电阻就会发生变化。我们可以利用热敏电阻的这种特性来检测温度强度。热敏电阻及其电子符号如下所示。

![图片不存在](./Arduino/media/4da14068ab4c20e5e807fdd08a82466f.png)

热敏电阻的电阻值与温度的关系为：

![图片不存在](./Arduino/media/4efb34b50f2cdb5b2ed6f351ce475474.png)

式中：

Rt为热敏电阻在T2温度下的电阻；

R为热敏电阻在T1温度下的标称阻值；

EXP[n]是e的n次幂；

B为温度指数；

T1，T2是开尔文温度(绝对温度)，开尔文温度=273.15 +摄氏温度。对于热敏电阻的参数，我们使用：B=3950, R=10KΩ，T1=25℃。热敏电阻的电路连接方法与光敏电阻类似，如下所示：

![图片不存在](./Arduino/media/1ac82d185d19f35348be2eec7717d721.png)

我们可以利用ADC转换器测得的值来得到热敏电阻的电阻值，然后利用公式来得到温度值。因此，温度公式可以推导为：

![图片不存在](./Arduino/media/7a610a5fe8f27e2000432bcef2f765e9.png)

**4.读取热敏电阻的值：**

首先我们学习热敏电阻读取当前的ADC值、电压值和温度值并将其打印出来。请按下面的接线图接好线：

![图片不存在](./Arduino/media/aa12d903640a4b579c986272f0f7e163.png)



```
//**********************************************************************************
/*  
 * 文件名 : 热敏电阻
 * 描述 : 读取热敏电阻的阻值.
*/
#define PIN_ANALOG_IN   36
void setup() {
  Serial.begin(115200);
}

void loop() {
  int adcValue = analogRead(PIN_ANALOG_IN);                       //读ADC引脚
  double voltage = (float)adcValue / 4095.0 * 3.3;                // 计算电压
  double Rt = 10 * voltage / (3.3 - voltage);                     //计算热敏电阻电阻值
  double tempK = 1 / (1 / (273.15 + 25) + log(Rt / 10) / 3950.0); //计算温度(开尔文)
  double tempC = tempK - 273.15;                                  //计算温度(摄氏)
  Serial.printf("ADC value : %d,\tVoltage : %.2fV, \tTemperature : %.2fC\n", adcValue, voltage, tempC);
  delay(1000);
}
//**********************************************************************************

```
编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。你会看到的现象是：串口监视器窗口将不断显示热敏电阻当前的ADC值、电压值和温度值。试着用食指和拇指捏一下热敏电阻(不要碰触导线)一小段时间，你应该会看到温度值增加。

![图片不存在](./Arduino/media/590d50d10fd26eb05197edbf498ee7f4.png)



**5.温度仪表的接线图：**

![图片不存在](./Arduino/media/5b77fc42f5fa8ab213447116da53f777.png)

**6.添加LCD_128×32库：**

本项目代码使用了一个名为“<span style="color: rgb(255, 76, 65);">LCD_128×32</span>”库。如果你已经添加好了“<span style="color: rgb(255, 76, 65);">LCD_128×32</span>”库，则跳过此步骤。如果你还没有添加，请在学习之前安装它。添加第三方库的步骤如下:

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\LCD_128X32.ZIP**的文件，先选中**LCD_128X32.ZIP** 文件，再单击“**打开**”。

![图片不存在](./Arduino/media/40e02685a4526777cb2c436cb5434af5.jpg)

![图片不存在](./Arduino/media/d06be8e0f725c4d370cd7f10ae33e60c.png)

**7.项目代码：**



```
//**********************************************************************************
/*  
 * 文件名  : 温度仪表
 * 描述 : LCD显示热敏电阻的温度.
*/
#include "lcd128_32_io.h"

#define PIN_ANALOG_IN   36

lcd lcd(21, 22); //创建lCD128 *32引脚，sda->21， scl->22

void setup() {
  lcd.Init(); //初始化
  lcd.Clear();  //清屏
}
char string[10];

void loop() {
  int adcValue = analogRead(PIN_ANALOG_IN);                       //读ADC引脚
  double voltage = (float)adcValue / 4095.0 * 3.3;                // 计算电压
  double Rt = 10 * voltage / (3.3 - voltage);                     //计算热敏电阻电阻值
  double tempK = 1 / (1 / (273.15 + 25) + (log(Rt / 10) / 3950.0)); //计算温度(开尔文)
  double tempC = tempK - 273.15;                                  //计算温度(摄氏)
  lcd.Cursor(0,0); //设置显示位置
  lcd.Display("Voltage:"); //设置显示
  lcd.Cursor(0,8);
  lcd.DisplayNum(voltage);
  lcd.Cursor(0,11);
  lcd.Display("V");
  lcd.Cursor(2,0); 
  lcd.Display("tempC:");
  lcd.Cursor(2,8);
  lcd.DisplayNum(tempC);
  lcd.Cursor(2,11);
  lcd.Display("C");
  delay(200);
}
//**********************************************************************************

```
**7.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，你会看到的现象是：LCD 128X32 DOT的屏幕上显示热敏电阻的电压值和当前环境中的温度值。

![图片不存在](./Arduino/media/073463d882655fe6ab03fdf8ed4c537b.png)









## 项目32 RFID

**1.实验介绍：**

现在很多小区的门使用了刷卡开门这个功能，非常的方便。这节课我们将学习使用RFID(射频识别)无线通信技术和对卡（钥匙扣/白色磁卡）进行读、写操作及RFID-MFRC522模块控制舵机转动。   

**2.实验元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/fe4b5092b1dad906a629e878216e0bc2.png)|![图片不存在](./Arduino/media/bf6d1660c4a52edca11f5a7763edfc19.png)|![图片不存在](./Arduino/media/f717e9e3b952d9c0ea88e83493b82165.png)|
| :--: | :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|RFID-RC522模块*1|舵机*1|白色磁卡*1|
|![图片不存在](./Arduino/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Arduino/media/e989c0ba5c3c1ea8c5fc08d02344da37.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| ![图片不存在](./Arduino/media/c42bb7177aeaa351a30fd0570c479064.png)| |
|4P转杜邦线公单*1|跳线若干|USB 线*1|钥匙扣*1 | |

**3.元件知识：**

**RFID：** 无线射频识别，读卡器由频射模块及高平磁场组成。Tag应答器为待感应设备，此设备不包含电池。他只包含微型集成电路芯片及存储数据的介质以及接收和发送信号的天线。读取tag中的数据，首先要放到读卡器的读取范围内。读卡器会产生一个磁场，因为磁能生电由楞次定律，RFID Tag就会供电，从而激活设备。

**RFID-RC522模块：** 采用Philips MFRC522原装芯片设计读卡电路，使用方便，成本低廉，适用于设备开发、读卡器开发等高级应用的用户、需要进行射频卡终端设计/生产的用户。本模块可直接装入各种读卡器模具。模块采用电压为5V,通过SPI接口简单的几条线就可以直接与用户任何CPU主板或单片机相连接通信。

![图片不存在](./Arduino/media/fe4b5092b1dad906a629e878216e0bc2.png)

**规格参数：**

- 工作电压：DC 5V
- 工作电流：13—100mA/DC 5V
- 空闲电流：10-13mA/DC 5V
- 休眠电流：<80uA
- 峰值电流：<100mA
- 工作频率：13.56MHz
- 最大功率：0.5W
- 支持的卡类型：mifare1 S50、mifare1 S70、mifare UltraLight、mifare Pro、mifare Desfire
- 环境工作温度：摄氏-20—80℃
- 环境储存温度：摄氏-40—85℃
- 环境相对湿度：相对湿度5%—95%
- 数据传输速率：最大10Mbit/s

**4.RFID 读取 UID：**

我们将读取RFID卡的唯一ID号(UID)，识别RFID卡的类型，并通过串口显示相关信息，其接线图如下所示：

![图片不存在](./Arduino/media/126658f003272a4e8822113111327d81.png)

**添加MFRC522_I2C和Wire库：**

如果你已经添加好了“<span style="color: rgb(255, 76, 65);">MFRC522_I2C</span>”和“<span style="color: rgb(255, 76, 65);">Wire</span>”库, 则跳过此步骤。如果你还没有添加“<span style="color: rgb(255, 76, 65);">MFRC522_I2C</span>”和“<span style="color: rgb(255, 76, 65);">Wire</span>”库，请在学习之前添加它们。添加第三方库的步骤如下:

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\MFRC522_I2C.ZIP**的文件，先选中**MFRC522_I2C.ZIP** 文件，再单击“**打开**”。

![图片不存在](./Arduino/media/84d1aca9aa7ce5664e12d0dca12fc9db.jpg)

![图片不存在](./Arduino/media/45ce89cdac321946b7dc008fc343b3b8.png)

接着在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\Wire.ZIP**的文件，先选中**Wire.ZIP**文件，再单击“ **打开** ”

![图片不存在](./Arduino/media/9449ab10285a49a3696e3bc88e51e177.png)



```
//**********************************************************************************
/*  
 * 文件名 : RFID
 * 描述 : RFID阅读UID
*/
#include <Wire.h>
#include "MFRC522_I2C.h"
// IIC引脚默认为ESP32的GPIO21和GPIO22
// 0x28是SDA的i2c地址，如果不匹配，请用i2c检查你的地址.
MFRC522 mfrc522(0x28);   // 创建MFRC522.

void setup() {
  Serial.begin(115200);           // 初始化与PC机的串行通信
  Wire.begin();                   // 初始化I2C
  mfrc522.PCD_Init();             // 初始化MFRC522
  ShowReaderDetails();            // 显示PCD - MFRC522读卡器
  Serial.println(F("Scan PICC to see UID, type, and data blocks..."));
}

void loop() {
  // 
  if ( ! mfrc522.PICC_IsNewCardPresent() || ! mfrc522.PICC_ReadCardSerial() ) {
    delay(50);
    return;
  }
  
  // 选择一张门卡。UID和SAK为mfrc522.uid.
  
  // 保存UID
  Serial.print(F("Card UID:"));
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
  } 
  Serial.println();
}

void ShowReaderDetails() {
  //  运行或调用MFRC522软件
  byte v = mfrc522.PCD_ReadRegister(mfrc522.VersionReg);
  Serial.print(F("MFRC522 Software Version: 0x"));
  Serial.print(v, HEX);
  if (v == 0x91)
    Serial.print(F(" = v1.0"));
  else if (v == 0x92)
    Serial.print(F(" = v2.0"));
  else
    Serial.print(F(" (unknown)"));
  Serial.println("");
  // 当返回到0x00或0xFF时，可能无法传输通信信号
  if ((v == 0x00) || (v == 0xFF)) {
    Serial.println(F("WARNING: Communication failure, is the MFRC522 properly connected?"));
  }
}
//**********************************************************************************

```
编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为115200。你会看到的现象是：将白卡和钥匙扣分别靠近模块感应区，串口监视器窗口将分别显示白色磁卡和钥匙扣的卡号值。如下图所示：

![图片不存在](./Arduino/media/62b7783929a342734e4a0fed04096756.png)


<span style="color: rgb(255, 76, 65);">特别注意：对于不同的RFID-RC522的白色磁卡和钥匙扣，其白色磁卡值和钥匙扣值可能都不一样。</span>

**5.RFID MFRC522的接线图：**

现在使用RFID-RC522模块、白色磁卡/钥匙扣和舵机模拟做一个智能门禁系统。当白色磁卡/钥匙扣靠近RFID-RC522模块感应区舵机转动。按照下图进行接线。

![图片不存在](./Arduino/media/c39c768548f74c5d02917906dad73bfa.png)

**6.添加MFRC522_I2C，Wire和ESP32Servo库：**

前面已经添加过<span style="color: rgb(255, 76, 65);">MFRC522_I2C</span>，<span style="color: rgb(255, 76, 65);">Wire</span>和<span style="color: rgb(255, 76, 65);">ESP32Servo</span>库，可以不用重复添加。如果没有添加，就需要添加<span style="color: rgb(255, 76, 65);">MFRC522_I2C</span>，<span style="color: rgb(255, 76, 65);">Wire</span>和<span style="color: rgb(255, 76, 65);">ESP32Servo</span>库，添加第三方库的步骤如下:

**先添加ESP32Servo库：**

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\ESP32Servo-0.8.0.ZIP** 的文件，先选中**ESP32Servo-0.8.0.ZIP**文件，再单击“**打开**”。

![图片不存在](./Arduino/media/611afdeb9c90d70563d9c1b1d2859566.png)

![图片不存在](./Arduino/media/e210dbc7997c08500968c937965153ad.png)

**再添加MFRC522_I2C和Wire库：**

如果在本项目的上面实验（<span style="color: rgb(255, 76, 65);">RFID 读取 UID</span>）已经添加过**MFRC522_I2C**和**Wire**库，就可以不用重复添加；如果还没有添加MFRC522_I2C和Wire库，就参照本项目的上面实验（<span style="color: rgb(255, 76, 65);">RFID 读取 UID</span>）添加方法添加。

**7.项目代码：**

<span style="color: rgb(255, 76, 65);">特别注意：对于不同的RFID-RC522的白色磁卡和钥匙扣，其RFID-RC522读取的白色磁卡和钥匙扣值可能都不一样。你们将自己的RFID-RC522模块读取的白卡和钥匙扣的值替换程序代码中对应的白色磁卡和钥匙扣的值，要不然可能会导致白色磁卡和钥匙扣控制不了舵机。</span>
<br>

<span style="color: rgb(255, 76, 65);">例如: 你把程序代码![图片不存在](./Arduino/media/a091416908ab6203263ba3063da6f35d.png)中的rfid_str字符串替换成自己的RFID-RC522模块读取的白色磁卡和钥匙扣的值。</span>
<br>


```
//*************************************************************************************
/* 
 * 文件名  : RFID mfrc522控制点击
 * 描述 : RFID控制舵机模拟开门
*/
#include <Wire.h>
#include "MFRC522_I2C.h"
// IIC引脚默认为ESP32的GPIO21和GPIO22
// 0x28是SDA的i2c地址，如果不匹配，请用i2c检查你的地址。
MFRC522 mfrc522(0x28);   // 创建MFRC522.

#include <ESP32Servo.h>
Servo myservo;  // 创建舵机对象来控制舵机
int servoPin = 15; // 舵机引脚

String rfid_str = "";

void setup() {
  Serial.begin(115200);
  Wire.begin();
  mfrc522.PCD_Init();
  ShowReaderDetails();            // 显示PCD - MFRC522读卡器
  Serial.println(F("Scan PICC to see UID, type, and data blocks..."));
  
  myservo.setPeriodHertz(50);           // 标准50赫兹舵机
  myservo.attach(servoPin, 500, 2500);  // 将servoPin上的舵机附加到舵机对象上
  myservo.write(0); 
  delay(500);
}

void loop() {
   if ( ! mfrc522.PICC_IsNewCardPresent() || ! mfrc522.PICC_ReadCardSerial() ) {
    delay(50);
    return;
  }
  
  // 选择一张门卡。UID和SAK为mfrc522.uid.
  
  // 保存UID
  rfid_str = ""; //字符串清空
  Serial.print(F("Card UID:"));
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    rfid_str = rfid_str + String(mfrc522.uid.uidByte[i], HEX);  //转换为字符串
    //Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    //Serial.print(mfrc522.uid.uidByte[i], HEX);
  } 
  Serial.println(rfid_str);
  
  if (rfid_str == "d963d3b3" || rfid_str == "d4e8e5e9") {
    myservo.write(180);
    delay(500);
    Serial.println("  open the door!");
    }
}

void ShowReaderDetails() {
  //  运行或调用MFRC522软件
  byte v = mfrc522.PCD_ReadRegister(mfrc522.VersionReg);
  Serial.print(F("MFRC522 Software Version: 0x"));
  Serial.print(v, HEX);
  if (v == 0x91)
    Serial.print(F(" = v1.0"));
  else if (v == 0x92)
    Serial.print(F(" = v2.0"));
  else
    Serial.print(F(" (unknown)"));
  Serial.println("");
  // 当返回到0x00或0xFF时，可能无法传输通信信号
  if ((v == 0x00) || (v == 0xFF)) {
    Serial.println(F("WARNING: Communication failure, is the MFRC522 properly connected?"));
  }
}
//*************************************************************************************

```

**8.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为115200；你会看到的现象是：当我们使用白色磁卡或者钥匙卡刷卡时，串口监视器显示出白色磁卡或者钥匙卡信息和“open the door”，如下图，舵机转动到对应的角度模拟开门。

![图片不存在](./Arduino/media/6109585b8094a039f38dde0e4237228c.png)

![图片不存在](./Arduino/media/6a8a9ff0dfcda5ec9cc6df8902cde905.png)







## 项目33 密码锁

**1.项目介绍：**

常用的数字按钮传感器，一个按钮就使用一个IO口，而有时我们需要的按钮比较多时，就会占用过多的IO口，为了节省IO口的使用，把多个按钮做成了矩阵类型，通过行列线的控制，实现少IO口控制多个按钮。在本项目中，我们将来学习ESP32和薄膜4*4矩阵键盘控制舵机和蜂鸣器。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/bf6d1660c4a52edca11f5a7763edfc19.png)|
| :--: | :--: | :--: | 
|ESP32*1|面包板*1|舵机*1|
|![图片不存在](./Arduino/media/f24b38efbf074e280038b7cc3584a197.png)|![图片不存在](./Arduino/media/2266d29566a875c35c2bd4be3e4a23f8.png)|![图片不存在](./Arduino/media/4107849550a2c6d09592b2a28e291b54.png) |
|薄膜4×4矩阵键盘*1|USB 线*1| 跳线若干| 
|![图片不存在](./Arduino/media/6c3a06627faa0d87dd69cbd361929240.png)|![图片不存在](./Arduino/media/a802ce7dc086858873e587c19b45578d.png)|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)|
|NPN型晶体管(S8050)*1|有源蜂鸣器*1|1KΩ电阻*1|

**3.元件知识：**

**4×4矩阵键盘：** 键盘是一种集成了许多键的设备。如下图所示，一个4x4键盘集成16个键。

![图片不存在](./Arduino/media/f24b38efbf074e280038b7cc3584a197.png)

与LED矩阵集成一样，在4x4键盘中，每排键都是用一根引脚连接，每一列键都是一样的。这样的连接可以减少处理器端口的占用。内部电路如下所示。

![图片不存在](./Arduino/media/45d094d91edf32da8270ad56605aaf3d.png)  

使用方法类似于矩阵LED，即使用行扫描或列扫描方法检测每列或每行上的键的状态。以列扫描法为例，向第4列(Pin4)发送低电平，检测第1、2、3、4行电平状态，判断A、B、C、D键是否按下。然后依次将低电平发送到列3、2、1，检测是否有其它键被按下。然后，你可以获得所有键的状态。

**4.读取4*4矩阵键盘的键值：**

我们首先使用一个简单的代码读取4*4矩阵键盘的键值并将其打印出来，其接线图如下所示：

![图片不存在](./Arduino/media/32c62713f683fa76387e0e601584d300.png)

**如何安装Keypad库：**

本项目代码使用了一个名为“<span style="color: rgb(255, 76, 65);">Keypad</span>”库。如果已经添加好了“<span style="color: rgb(255, 76, 65);">Keypad</span>”库，则跳过此步骤。如果你还没有添加，请在学习之前安装它。添加第三方库的步骤如下:

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\Keypad.ZIP**的文件，先选中**Keypad.ZIP** 文件，再单击“**打开**”。

![图片不存在](./Arduino/media/6bc5433f35f028715e34f685cdce5ab6.png)

![图片不存在](./Arduino/media/18d5f282716b9980358c1ae3a314a598.png)


```
//**********************************************************************************
/*  
 * 文件名  : 4x4矩阵键盘显示 
 * 描述 : 获取矩阵键盘的值
*/
#include <Keypad.h>

//定义键盘按钮上的符号
char keys[4][4] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[4] = {22, 21, 19, 18}; // 连接到键盘的行引脚
byte colPins[4] = {17, 16, 4, 0};   // 连接到键盘的列引脚

// 初始化myKeypad类的实例
Keypad myKeypad = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);

void setup() {
  Serial.begin(115200); // 初始化串口，波特率设置为115200
  Serial.println("ESP32 is ready!");  // 打印字符串“ESP32 is ready!”
}

void loop() {
  // 获取字符输入
  char keyPressed = myKeypad.getKey();
  // 如果有字符输入，则发送到串口
  if (keyPressed) {
    Serial.println(keyPressed);
  }
}
//**********************************************************************************

```
编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。你会看到的现象是：按下键盘，串口监视器窗口将打印对应的键值，如下图所示。

![图片不存在](./Arduino/media/0b9b33d68c369214b14673183bb61b40.png)



**5.密码锁的接线图：**

在上一实验中，我们已经知道了4×4矩阵键盘的键值，接下来，我们使用4×4矩阵键盘作为键盘来控制舵机和蜂鸣器。

![图片不存在](./Arduino/media/ff56adda27d93207163377bd85861a84.png)

**6.添加Keypad和ESP32Servo库：**

前面已经添加过<span style="color: rgb(255, 76, 65);">Keypad</span>和<span style="color: rgb(255, 76, 65);">ESP32Servo</span>库，可以不用重复添加。如果没有添加，就需要添加<span style="color: rgb(255, 76, 65);">Keypad</span>和<span style="color: rgb(255, 76, 65);">ESP32Servo</span>库，添加第三方库的步骤如下:

**先添加ESP32Servo库：**

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\ESP32Servo-0.8.0.ZIP**的文件，先选中**ESP32Servo-0.8.0.ZIP** 文件，再单击“**打开**”。

![图片不存在](./Arduino/media/3ce31d5c11af95e4ba2c7f06299c0852.png)

![图片不存在](./Arduino/media/e210dbc7997c08500968c937965153ad.png)

**再添加Keypad库：**

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为**..\库文件\Arduino_C_Windows系统\Keypad.ZIP**的文件，先选中**Keypad.ZIP**文件，再单击“**打开**”。

![图片不存在](./Arduino/media/3ce31d5c11af95e4ba2c7f06299c0852.png)

![图片不存在](./Arduino/media/18d5f282716b9980358c1ae3a314a598.png)

**7.项目代码：**

```
//**********************************************************************************
/*  
 * 文件名 : 密码锁
 * 描述 : 制作一个简单的密码锁.
*/
#include <Keypad.h>
#include <ESP32Servo.h>

// 定义键盘按钮上的符号
char keys[4][4] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[4] = {22, 21, 19, 18};   // 连接到键盘的行引脚
byte colPins[4] = {17, 16, 4, 0};   // 连接到键盘的列引脚

// 初始化myKeypad类的实例
Keypad myKeypad = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);

Servo  myservo;     // 创建舵机对象来控制舵机
int servoPin = 15;  // 定义舵机引脚
int buzzerPin = 2; // 定义蜂鸣器引脚

char passWord[] = {"1234"}; // 保存正确密码

void setup() {
  myservo.setPeriodHertz(50);           // 标准50赫兹舵机
  myservo.attach(servoPin, 500, 2500);  // 将servoPin上的舵机附加到舵机对象上
                                        // 设置舵机的高电平时间范围，以实现精确的从0到180°转动
  myservo.write(0);                     // 设置舵机的初始角度
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  static char keyIn[4];     // 保存输入字符
  static byte keyInNum = 0; // 保存输入的字符数
  char keyPressed = myKeypad.getKey();  // 获取字符输入
  // 处理输入字符
  if (keyPressed) {
    // 每次按下该键时发出提示音
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    // 保存输入字符
    keyIn[keyInNum++] = keyPressed;
    // 输入后判断正确性
    if (keyInNum == 4) {
      bool isRight = true;            // 保存密码是否正确
      for (int i = 0; i < 4; i++) {   // 判断每个字符的密码是否正确
        if (keyIn[i] != passWord[i])
          isRight = false;            // 如有错字，请标记错字.
      }
      if (isRight) {                  // 如果输入的密码正确
        myservo.write(90);           // 打开开关
        delay(2000);                  // 推迟一段时间
        myservo.write(0);            // 关闭开关
        Serial.println("passWord right!");
      }
      else {                          // 输入密码错误
        digitalWrite(buzzerPin, HIGH);// 密码错误提示音
        delay(1000);
        digitalWrite(buzzerPin, LOW);
        Serial.println("passWord error!");
      }
      keyInNum = 0; // 将输入字符数重置为0
    }
  }
}
//**********************************************************************************

```
**8.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，你会看到的现象是：按键盘输入4个字符的密码，如果输入正确（**正确密码：1234**），舵机会转动一定角度，然后回到原来的位置。如果输入错误，将发出输入错误警报。

![图片不存在](./Arduino/media/d0bd64ec0283d670b3eae0dc99c63720.png)



## 项目34 红外遥控控制声音和LED

**1.项目介绍：**

红外遥控是一种低成本、易于使用的无线通信技术。IR光与可见光非常相似，除了它的波长稍长一点。这意味着红外线是人眼无法检测到的，这对于无线通信来说是完美的。例如，当你按下电视遥控器上的一个按钮时，一个红外LED会以每秒38000次的频率反复开关，将信息(如音量或频道控制)传送到电视上的红外感光器。

我们将首先解释常见的红外通信协议是如何工作的。然后我们将从一个遥控器和一个红外接收组件开始这个项目。

**2.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/dc6163b527b2977fd9f897b541383a08.png)|![图片不存在](./Arduino/media/6de88c5b9c38d8ab879ae91eb51431b7.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|红外接收器*1|RGB LED*1|
|![图片不存在](./Arduino/media/a802ce7dc086858873e587c19b45578d.png)|![图片不存在](./Arduino/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Arduino/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Arduino/media/e209a5e6d89e9b4fab30e607922d769b.png) |
|有源蜂鸣器*1|220Ω电阻*3|10KΩ电阻*1|红外遥控器*1|
|![图片不存在](./Arduino/media/6c3a06627faa0d87dd69cbd361929240.png)|![图片不存在](./Arduino/media/d23956651d15073e880387c5a5419d80.png)|![图片不存在](./Arduino/media/2266d29566a875c35c2bd4be3e4a23f8.png)|![图片不存在](./Arduino/media/4107849550a2c6d09592b2a28e291b54.png) |
|NPN型晶体管(S8050)*1|1kΩ电阻*1 |USB 线*1| 跳线若干|

**3.元件知识：**   

**红外(IR)遥控器：** 是一种可以发射红外光信号的设备。按下不同的按钮，位于遥控器前端的红外发射管会发出不同指令的红外线。红外遥控技术应用广泛，如电视、空调等。因此，在当今科技发达社会，红外遥控技术使你切换电视节目和调节空调温度都很方便。

我们使用的遥控器如下所示：

![图片不存在](./Arduino/media/1e106ffcce219ed8acee00a1586fd473.png)

该红外遥控器采用NEC编码。

**红外(IR)接收器：** 它是一种元件，可以接收红外光，所以可以用它来接收红外遥控器发出的红外光信号。红外接收器解调接收到的红外光信号，并将其转换回二进制，然后将信息传递给微控制器。

红外信号调制过程图：

![图片不存在](./Arduino/media/4b390c4b310f1184bbcd46b601fb953f.png)

**4.解码红外信号：**

我们按照下面接线图将红外接收元件连接到ESP32。

![图片不存在](./Arduino/media/725871f174783cfa77a87a90f9dece9d.png)

**如何安装IRremoteESP8266库：**

本项目代码使用了一个名为“<span style="color: rgb(255, 76, 65);">IRremoteESP8266</span>”库。如果已经添加好了“<span style="color: rgb(255, 76, 65);">IRremoteESP8266</span>”库，则跳过此步骤。如果你还没有添加，请在学习之前安装它。添加第三方库的步骤如下:

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\IRremoteESP8266-2.7.4.ZIP**的文件，先选中**IRremoteESP8266-2.7.4.ZIP** 文件，再单击“**打开**”。

![图片不存在](./Arduino/media/91addaa8de14e156b14acad522ea8165.png)

![图片不存在](./Arduino/media/cd8887afe8b89477808c3c2c7ef5f9e8.png)



```
//**********************************************************************************
/*  
 * 文件名  : 解码的红外信号
 * 描述 : 红外遥控器解码后通过串口打印出来.
*/
#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

const uint16_t recvPin = 0; // 红外接收引脚
IRrecv irrecv(recvPin);      // 创建用于接收器的类对象
decode_results results;       // 创建解码结果类对象

void setup() {
  Serial.begin(115200);       // 初始化串口，波特率设置为115200
  irrecv.enableIRIn();        // 启动接收器
  Serial.print("IRrecvDemo is now running and waiting for IR message on Pin ");
  Serial.println(recvPin);   //打印红外接收引脚接收到的信号
}

void loop() {
  if (irrecv.decode(&results)) {          // 等待解码
    serialPrintUint64(results.value, HEX);// 打印出解码结果
    Serial.println("");
    irrecv.resume();                      // 释放IRremote。接收下一个值
  }
  delay(1000);
}
//**********************************************************************************

```
编译并上传代码到ESP32，代码上传成功后，利用USB线上电，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。你会看到的现象是：将红外遥控器发射器对准红外接收头，按下红外控制器上的按键，串口监视器将打印当前接收到的按键编码值。多次按下相同的按键以确保你拥有该按键的正确编码值。如果看到FFFFFFFF，请忽略它。

![图片不存在](./Arduino/media/a1ca9b3c61b83d5fa18e8db042189d0d.png)



写下红外遥控器与每个按键相关联的按键编码值，因为你稍后将需要这些信息。

![图片不存在](./Arduino/media/f5abdd5de7bb6a716a3b15ee29a4d023.png)

**5. 红外遥控的接线图：**

![图片不存在](./Arduino/media/eb78662bb9f933558fba6f55c7aa67ea.png)

**6.项目代码：**

前面已经添加过<span style="color: rgb(255, 76, 65);">IRremoteESP8266</span>库，可以不用重复添加。如果没有添加，就需要添加IRremoteESP8266库，添加方法如本项目上面所示。IRremoteESP8266库添加完成后，你可以打开我们提供的代码：


```
//**********************************************************************************
/*  
 * 文件名  : 红外控制声音和LED
 * 描述 : 红外遥控控制RGB和有源蜂鸣器.
*/
#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRrecv.h>
#include <IRutils.h>

const uint16_t recvPin = 0; // 红外接收引脚
IRrecv irrecv(recvPin);      // 创建用于接收器的类对象
decode_results results;       // 创建解码结果类对象

int ledPins[] = {22, 21, 4};    //定义红、绿、蓝引脚
const byte chns[] = {0, 1, 2};        //定义PWM通道
int buzzerPin = 15;  // 蜂鸣器引脚的引脚

void setup() {
  irrecv.enableIRIn();                  // 启动接收器
  pinMode(buzzerPin, OUTPUT);
  for (int i = 0; i < 3; i++) {   //设置pwm通道，1KHz,8bit
    ledcSetup(chns[i], 1000, 8);
    ledcAttachPin(ledPins[i], chns[i]);
  }
}

void loop() {
  if(irrecv.decode(&results)) {        // 等待解码
    handleControl(results.value);       // 处理来自远程控制的命令
    irrecv.resume();                    // 接收下一个值
  }
}

void handleControl(unsigned long value) {
  // 当它接收到命令时发出声音
  digitalWrite(buzzerPin, HIGH);
  delay(100);
  digitalWrite(buzzerPin, LOW);
  // 处理命令
  if (value == 0xFF6897) // 收到数字“1”
  { 
      ledcWrite(chns[0], 255); //普通阴极LED，高电平开启LED.
      ledcWrite(chns[1], 0);
      ledcWrite(chns[2], 0);
      delay(1000);
  }
   else if (value == 0xFF9867) // 收到数字 '2'
   { 
      ledcWrite(chns[0], 0); 
      ledcWrite(chns[1], 255);
      ledcWrite(chns[2], 0);
      delay(1000);
   }
    else if (value == 0xFFB04F) // 收到数字 '3'
   { 
      ledcWrite(chns[0], 0);
      ledcWrite(chns[1], 0);
      ledcWrite(chns[2], 255);
      delay(1000);
    }
    else if (value == 0xFF30CF) // 收到数字 '4'
   {  
      ledcWrite(chns[0], 255);
      ledcWrite(chns[1], 255);
      ledcWrite(chns[2], 0);
      delay(1000);
    }
    else if (value == 0xFF18E7) // 收到数字 '5'
   {  
      ledcWrite(chns[0], 255);
      ledcWrite(chns[1], 0);
      ledcWrite(chns[2], 255);
      delay(1000);
    }
    else if (value == 0xFF7A85)  // 收到数字 '6'
   {  
      ledcWrite(chns[0], 0);
      ledcWrite(chns[1], 255);
      ledcWrite(chns[2], 255);
      delay(1000);
    }
    else if (value == 0xFF10EF)  // 收到数字 '7'
   {   
      ledcWrite(chns[0], 255);
      ledcWrite(chns[1], 255);
      ledcWrite(chns[2], 255);
      delay(1000);
    }
    else{
      ledcWrite(chns[0], 0);
      ledcWrite(chns[1], 0);
      ledcWrite(chns[2], 0);
      delay(1000);
      }
  }
//**********************************************************************************

```
**8.项目现象：**

编译并上传代码到ESP32，代码上传成功后，利用USB线上电，你会看到的现象是：按红外遥控器的1~7键，蜂鸣器都会鸣响一次，同时RGB分别亮红灯，绿灯，蓝灯，黄灯，洋红灯，蓝绿灯，白灯。按其他另一按键（除1-7键以外），RGB熄灭。

![图片不存在](./Arduino/media/419ac23044525271d4824d4ecb78b727.png)






























## 项目35 蓝牙

本章主要介绍如何通过ESP32的蓝牙与手机进行简单的数据传输。项目35.1 是常规蓝牙，项目35.2 是蓝牙控制LED。

**项目35.1 常规蓝牙**

**1. 项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|![图片不存在](./Arduino/media/4d0be04892e2038c372f82caba521f64.png)|
| :--: | :--: |:--: |
| ESP32*1 | USB 线*1 |智能手机/平板电脑（<span style="color: rgb(255, 76, 65);">自备</span>）*1|

在本项目中，我们需要使用一个名为串口蓝牙终端的蓝牙应用程序来协助实验。如果您还没有安装它，请点击安装：[https://www.appsapk.com/serial-bluetooth-terminal/](https://www.appsapk.com/serial-bluetooth-terminal/) 。
下面是它的标志。

![图片不存在](./Arduino/media/4d6bebf2b0859865e28b426bd3477fac.png)

**2.元件知识：**

蓝牙是一种短距离通信系统，可分为两种类型，即低功耗蓝牙(BLE)和经典蓝牙。简单的数据传输有两种模式：主模式和从模式。

**主模式：** 在这种模式下，工作在主设备上完成，并且可以与从设备连接。我们可以搜索和选择附近的从设备来连接。当设备在主模式下发起连接请求时，需要其他蓝牙设备的地址和配对密码等信息。配对完成后，可直接与它们连接。

**从模式：** 处于从模式的蓝牙模块只能接受来自主机的连接请求，但不能发起连接请求。与主机设备连接后，可以向主机设备发送数据，也可以从主机设备接收数据。蓝牙设备之间可以进行数据交互，一个设备处于主模式，另一个设备处于从模式。当它们进行数据交互时，处于主模式的蓝牙设备会搜索并选择附近要连接的设备。在建立连接时，它们可以交换数据。当手机与ESP32进行数据交换时，手机通常处于主模式，ESP32为从模式。

![图片不存在](./Arduino/media/086194049ec20b12b1a7cda437023331.png)

**3.项目接线：**

使用USB线将ESP32主板连接到电脑上的USB口。

![图片不存在](./Arduino/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

**4.项目代码：**


![图片不存在](./Arduino/media/37cb879b7c5485ba2544d27d6407e4bb.png)

```
//**********************************************************************************
/*
 * 文件名 : 经典的蓝牙
 * 描述 : ESP32通过蓝牙与手机通信，并通过串口打印手机数据
*/
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;
String buffer;
void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32test"); //蓝牙设备名称
  Serial.println("\nThe device started, now you can pair it with bluetooth!");
}

void loop() {
  if (Serial.available()) {
    SerialBT.write(Serial.read());
  }
  if (SerialBT.available()) {
    Serial.write(SerialBT.read());
  }
  delay(20);
}
//**********************************************************************************

```

**5.项目现象：**

编译并上传代码到ESP32，上传成功后，打开串行监视器，波特率设置为<span style="color: rgb(255, 76, 65);">115200</span>。当您看到串行打印出字符串，如下所示，表示ESP32的蓝牙已就绪，等待与手机连接。(如果打开串口监视器且设置波特率为115200之后，串口监视器窗口没有显示如下信息，可以按下ESP32的复位键![图片不存在](./Arduino/media/515a31c10d414cae43980905e7df1879.jpg)）

![图片不存在](./Arduino/media/d0a0c882ace0c67de3ee19b193da139b.png)



请确认你的手机已开启手机蓝牙，且已安装“**串口蓝牙终端**”的蓝牙应用程序。

![图片不存在](./Arduino/media/a934651544f086913a236e35568f7cd3.png)

![图片不存在](./Arduino/media/4959397f4ab4f8f2e4c06ad6f29573a0.png)

手机自动搜索附近的蓝牙设备，点击“ESP32 test”进行配对，出现配对对话框，点击“**配对**”，这样“ESP32 test”设备就连接好了。

![图片不存在](./Arduino/media/d20253dd32917c9854ba20039af99f2d.png)

![图片不存在](./Arduino/media/2c2aad793f4aa811e5bcc90cd303db85.png)

![图片不存在](./Arduino/media/8d2671b30598c93329ac52ad6d757f60.png)

打开软件APP，点击终端左侧。选择 "Devices"。

![图片不存在](./Arduino/media/48b660760c72d0e5ed654a8265875d16.png)

![图片不存在](./Arduino/media/72831d7e8b780025c88537b3236bfca3.png)

选择经典蓝牙模式下的ESP32test，会出现如下图所示的连接成功提示。

![图片不存在](./Arduino/media/6e718c2e2c99c80c557b5c4941305a7d.png)

![图片不存在](./Arduino/media/023dba247c7da46105e2d68363ee443c.png)

现在，数据可以通过ESP32在你的手机和电脑之间传输。

在IDE中的文本框输入“Hi!”,当手机收到它的时候，给你的手机回复“Hi!”；手机发送“Hello!”，当电脑收到它的时候，给你的电脑回复“Hello!”。

![图片不存在](./Arduino/media/3fcd5c21a9910f976d0b36d4bc625075.png)

![图片不存在](./Arduino/media/cbce154e5bbe1dc985183b3ed2125191.png)



**项目35.2 蓝牙控制LED**

**1.项目元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/325f351a1cc5c9af86988ddafd03fa19.png)|![图片不存在](./Arduino/media/4d0be04892e2038c372f82caba521f64.png)|
| :--: | :--: | :--: |:--: |
|ESP32*1|面包板*1|红色LED*1|智能手机/平板电脑（<span style="color: rgb(255, 76, 65);">自备</span>）*1|
|![图片不存在](./Arduino/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Arduino/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| |
|220Ω电阻*1|跳线*2|USB 线*1| |

**2.项目接线：**

![图片不存在](./Arduino/media/6d79aa47daab6bc5dc46b1e62215d9c8.png)

**3.项目代码：**

![图片不存在](./Arduino/media/a806cadfcb5ec63f4d1525302bb02332.png)

```
//**********************************************************************************
/*
 * 文件名  : 蓝牙控制LED
 * 描述 : 手机通过蓝牙控制esp32指示灯.
          当手机发送“LED_on”时，ESP32的LED灯就会亮起.
          当手机发送“LED_off”时，ESP32的LED灯将关闭.
*/
#include "BluetoothSerial.h"
#include "string.h"
#define LED 15
BluetoothSerial SerialBT;
char buffer[20];
static int count = 0;
void setup() {
  pinMode(LED, OUTPUT);
  SerialBT.begin("ESP32test"); //蓝牙设备名称
  Serial.begin(115200);
  Serial.println("\nThe device started, now you can pair it with bluetooth!");
}

void loop() {
  while(SerialBT.available())
  {
    buffer[count] = SerialBT.read();
    count++;
  }
  if(count>0){
    Serial.print(buffer);
    if(strncmp(buffer,"led_on",6)==0){
      digitalWrite(LED,HIGH);
    }
    if(strncmp(buffer,"led_off",7)==0){
      digitalWrite(LED,LOW);
    }
    count=0;
    memset(buffer,0,20);
  }
}
//**********************************************************************************

```

**4.项目现象：**

编译并上传代码到ESP32。APP的操作与**项目35.1**相同，要使外接LED亮灭，只需将发送内容更改为"led_on" 和 "led_off" 即可。移动APP发送的数据：

![图片不存在](./Arduino/media/c0ecab67ea0f72fdb709ae5ee8c54dbe.png)

![图片不存在](./Arduino/media/135a79adbe1c029257b69700b278d67c.png)

LED的现象：

![图片不存在](./Arduino/media/53a0996330055250ffa3b190dede97bb.png)



<span style="color: rgb(255, 76, 65);">注意：</span> 如果发送的内容不是 "led_on'或"led_off"，那么LED的状态不会改变。如果LED是亮的，当接收到不相关内容时，LED继续亮；与之对应的是，如果LED是灭的，当接收到不相关内容时，LED继续熄灭。










## 项目36 WiFi 工作模式

在如今科技高速发展的时代，人们的生活质量越来越好，生活节奏越来越快，开始有人觉得复杂多样的智能化设备控制起来十分麻烦，通过手机统一控制智能化设备这种方法逐渐得到了人们的青睐。这种方法是利用单片机通过wifi模块和Internet网络建立手机和智能化设备之间的连接以此来实现对智能化设备的远程控制。在本章中，我们将重点关注ESP32的WiFi基础设施。ESP32有3种不同的WiFi工作模式：Station模式、AP模式和AP+Station模式。所有WiFi编程项目在使用WiFi前必须配置WiFi运行模式，否则无法使用WiFi。

**项目36.1: WIFI Station 模式**

**1.实验元件：**

|![图片不存在](./Arduino/media/2266d29566a875c35c2bd4be3e4a23f8.png)|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|
| :--: | :--: |
| USB 线 x1|ESP32x1|

**2.实验接线：**

使用USB线将ESP32主板连接到电脑上的USB口。

![图片不存在](./Arduino/media/3e0498944fc51e44b30bb90e2ae86b35.png)

**3.元件知识：** 

**Station 模式：** 当ESP32选择Station模式时，它作为一个WiFi客户端。它可以连接路由器网络，通过WiFi连接与路由器上的其他设备通信。如下图所示，PC和路由器已经连接，ESP32如果要与PC通信，需要将PC和路由器连接起来。

![图片不存在](./Arduino/media/227039c89f94a5ffbc04bca9f9e61e40.png)


**4.项目代码：**


```
//**********************************************************************************
/*
 * 文件名  : WiFi Station 模式
 * 模式 : 使用ESP32连接到路由器
*/
#include <WiFi.h> //包含ESP32的WiFi Library头文件.

//请输入正确的路由器名称和密码.
const char *ssid_Router     = "ChinaNet-2.4G-0DF0"; //输入路由器名称
const char *password_Router = "ChinaNet@233"; //输入路由器密码

void setup(){
  Serial.begin(115200);
  delay(2000);
  Serial.println("Setup start");
  WiFi.begin(ssid_Router, password_Router);//将ESP32设置为“Station 模式”，并连接到路由器。
  Serial.println(String("Connecting to ")+ssid_Router);
//每0.5s检查ESP32是否连接路由器成功.  
  while (WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected, IP address: ");
  Serial.println(WiFi.localIP());//串行监视器打印出分配给ESP32的IP地址.
  Serial.println("Setup End");
}
 
void loop() {
}
//**********************************************************************************

```
由于各地的WiFi名称和密码是不同，所以在程序代码运行之前，用户需要在下图所示的框中输入正确的WiFi名称和密码。

![图片不存在](./Arduino/media/1da0eccd7be73449280674508c7fba72.png)

**5.项目现象：**

确认正确输入WiFi名称和密码后，编译并上传代码到ESP32主板，上传成功后，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。当ESP32成功连接到ssid_Router时，串行监视器将打印出WiFi分配给ESP32的IP地址。然后串口监视器窗口将显示如下：(如果打开串口监视器且设置波特率为115200之后，串口监视器窗口没有显示如下信息，可以按下ESP32的复位键![图片不存在](./Arduino/media/515a31c10d414cae43980905e7df1879.jpg)）

![图片不存在](./Arduino/media/538e56d1f4cded360c56f6db9852f7f3.png)




**项目36.2：WIFI AP 模式**

**1.实验元件&接线：**

实验元件和实验接线与上面的**项目36.1: WIFI Station 模式**相同。

**2.元件知识：**

**AP模式：** 当ESP32选择AP模式时，会创建一个独立于Internet的热点网络，等待其他WiFi设备连接。如下图所示，以ESP32为热点。如果手机或PC需要与ESP32通信，则必须连接到ESP32的热点。只有通过ESP32建立连接后才能进行通信。

![图片不存在](./Arduino/media/9117763df4e25fdca6bc7e576bc91ded.png)

**3.项目代码：**




```
//**********************************************************************************
/*
 * 文件名  : WiFi AP
 * 描述 : 设置ESP32打开接入点
*/
#include <WiFi.h> //包含ESP32的WiFi Library头文件.

const char *ssid_AP     = "ESP32_Wifi"; //输入AP名称
const char *password_AP = "12345678"; //输入AP密码

IPAddress local_IP(192,168,1,108);//设置ESP32本身的IP地址
IPAddress gateway(192,168,1,1);   //设置ESP32本身的网关
IPAddress subnet(255,255,255,0);  //设置ESP32本身的子网掩码

void setup(){
  Serial.begin(115200);
  delay(2000);
  Serial.println("Setting soft-AP configuration ... ");
  WiFi.disconnect();
  WiFi.mode(WIFI_AP);
  Serial.println(WiFi.softAPConfig(local_IP, gateway, subnet) ? "Ready" : "Failed!");
  Serial.println("Setting soft-AP ... ");
  boolean result = WiFi.softAP(ssid_AP, password_AP);
  if(result){
    Serial.println("Ready");
    Serial.println(String("Soft-AP IP address = ") + WiFi.softAPIP().toString());
    Serial.println(String("MAC address = ") + WiFi.softAPmacAddress().c_str());
  }else{
    Serial.println("Failed!");
  }
  Serial.println("Setup End");
}
 
void loop() {
}
//**********************************************************************************

```
在程序代码运行之前，你可以像下图所示对框中ESP32的AP名称和密码进行任何更改。当然，在默认情况下，你也可以不修改它。

![图片不存在](./Arduino/media/d0d763f915a23c72e97611126d19e548.png)


**4.项目现象：**

正确输入ESP32的AP名称和密码，编译并上传代码到ESP32主板，上传成功后，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。然后串口监视器窗口将显示如下：(如果打开串口监视器且设置波特率为115200之后，串口监视器窗口没有显示如下信息，可以按下ESP32的复位键![图片不存在](./Arduino/media/515a31c10d414cae43980905e7df1879.jpg)）

![图片不存在](./Arduino/media/fada6409bd5fde4ace40c74e3404d414.png)




观察串口监视器打印信息时，打开手机WiFi扫描功能，可以看到ESP32上的ssid_AP被调用，在本程序代码中称为“ESP32_Wifi”。你可以输入密码“12345678”连接它，也可以通过修改程序代码来修改它的AP名称和密码。

![图片不存在](./Arduino/media/29b419a83fcc3ddcfa32f08296d8e9f7.png)


**项目36.3：WIFI AP+Station模式**

**1.实验元件&接线：**

实验元件和实验接线与上面的**项目36.1: WIFI Station 模式**和**项目36.2: WIFI AP 模式**相同。

**2.元件知识：**

**AP+Station模式：** ESP32除AP模式和Station模式外，还可以同时使用AP模式和Station模式。此模式包含前两种模式的功能。打开ESP32的Station模式，将其连接到路由器网络，它可以通过路由器与Internet通信。同时开启其AP模式，创建热点网络。其他WiFi设备可以选择连接路由器网络或热点网络与ESP32通信。

**3.项目代码：**


```
//**********************************************************************************
/*
 * 文件名 : WiFi AP+Station
 * 描述 : ESP32连接到用户的路由器，打开一个接入点
*/
#include <WiFi.h>
 
const char *ssid_Router     =  "ChinaNet-2.4G-0DF0";  //输入路由器名称
const char *password_Router =  "ChinaNet@233";  //输入路由器密码
const char *ssid_AP         =  "ESP32_Wifi"; //输入AP名称
const char *password_AP     =  "12345678";  //输入AP密码

void setup(){
  Serial.begin(115200);
  Serial.println("Setting soft-AP configuration ... ");
  WiFi.disconnect();
  WiFi.mode(WIFI_AP);
  Serial.println("Setting soft-AP ... ");
  boolean result = WiFi.softAP(ssid_AP, password_AP);
  if(result){
    Serial.println("Ready");
    Serial.println(String("Soft-AP IP address = ") + WiFi.softAPIP().toString());
    Serial.println(String("MAC address = ") + WiFi.softAPmacAddress().c_str());
  }else{
    Serial.println("Failed!");
  }
  
  Serial.println("\nSetting Station configuration ... ");
  WiFi.begin(ssid_Router, password_Router);
  Serial.println(String("Connecting to ")+ ssid_Router);
  while (WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected, IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println("Setup End");
}

void loop() {
}
//**********************************************************************************

```
它类似于上面的**项目36.1**和**项目36.2**。在运行代码之前，你需要修改ssid_Router、password_Router、ssid_AP和password_AP，如下图中的红色框所示。

![图片不存在](./Arduino/media/b4a7b34e7438d88c83001aefda84a7f2.png)

**4.项目现象：**

确认程序代码修改正确后，编译并上传代码到 ESP32主板上，上传成功后，打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>。然后串口监视器窗口将显示如下：(如果打开串口监视器且设置波特率为115200之后，串口监视器窗口没有显示如下信息，可以按下ESP32的复位键![图片不存在](./Arduino/media/515a31c10d414cae43980905e7df1879.jpg)）

![图片不存在](./Arduino/media/0a0b4e200d48018ee19edcde6b27ec9c.png)

打开手机的WiFi搜索功能，可以在ESP32上看到ssid_AP被调用。

![图片不存在](./Arduino/media/29b419a83fcc3ddcfa32f08296d8e9f7.png)








## 项目37 WiFi 测试

**1.实验简介：**

在本实验中，我们先使用ESP32的WiFi Station模式读取WiFi的IP地址，然后通过APP连接WiFi来读取APP上各功能按钮发送的字符。

**2.实验元件：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)|![图片不存在](./Arduino/media/4d0be04892e2038c372f82caba521f64.png)|
| :--: | :--: | :--: |
| ESP32*1 | USB 线*1 |智能手机/平板电脑(<span style="color: rgb(255, 76, 65);">自备</span>)*1|

**3.实验接线：**

使用USB线将ESP32主板连接到电脑上的USB口。

![图片不存在](./Arduino/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

**4.安装APP:**

(1) 安卓系统设备（手机/平板）APP：

我们提供了Android APP 的安装包：

![图片不存在](./Arduino/media/bd1eb78d8b5a99c776cad52ecad76f42.png)

**安装步骤：**

A. 现将文件夹中的**keyes wifi.apk**文件转移到安卓系统手机或平板电脑上。

或者用安卓系统手机/平板电脑的浏览器中的扫码功能扫下面的二维码。

![图片不存在](./Arduino/media/f59967cba580bc752cd628dbd274e886.png)

B. 点击keyes wifi.apk文件进入安装页面，点击“**允许**”按钮，然后点击“**安装**”按钮，过一会儿，安装完成后点击“**打开**”按钮就可以进入APP界面。

![图片不存在](./Arduino/media/e15c916fc960d7abbba15a3c2a95b325.png)

![图片不存在](./Arduino/media/c4df6d064c1819cf0ab703bd6917bc54.png)

![图片不存在](./Arduino/media/d7034b3177f4ff96779641bf2a278248.png)

![图片不存在](./Arduino/media/89d8312749d5fc0aa584f4542aeb132b.png)

![图片不存在](./Arduino/media/2da4df243f0b9c2425681625d77f7f52.png)

![图片不存在](./Arduino/media/7cddf433df535865414cddbb52c2d672.png)

(2) IOS系统设备（手机/iPad）APP

a. 打开App Store。

![图片不存在](./Arduino/media/0d6b6944ea693ebe5d6b939a66104462.png)

b.在搜索框输入**keyes link**，点击搜索，出现下载界面，点击“![图片不存在](./Arduino/media/a9c7179df093d9f6eb1d39906cc2b90d.png)”，就可以下载安装**keyes link**的APP。接下来的操作和安卓系统类似的，可以参考上面安卓系统的步骤进行操作。

**5.项目代码：**

<span style="background: rgb(255, 251, 0);"><span style="color: rgb(255, 76, 0);">**特别注意：**<span style="color: rgb(255, 76, 0);"></span>确保计算机网络，手机/平板的网络，ESP32主板，路由器，代码中输入你自己的WiFi名称和密码都必须是在同一个局域网（WiFi）下。</span></span>

![Img](./media/img-202411180844190.png)


```
//**********************************************************************************
/*
 * 文件名   : WIFI 测试
 * 描述 : Wifi模块测试Wifi ip
*/

#include <Arduino.h>
#include <WiFi.h>
#include <ESPmDNS.h>
#include <WiFiClient.h>

String item = "0";
const char* ssid = "ChinaNet-2.4G-0DF0";
const char* password = "ChinaNet@233";
WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();
  Serial.println("TCP server started");
  MDNS.addService("http", "tcp", 80);
}

void loop() {
  WiFiClient client = server.available();
  if (!client) {
      return;
  }
  while(client.connected() && !client.available()){
      delay(1);
  }
  String req = client.readStringUntil('\r');
  int addr_start = req.indexOf(' ');
  int addr_end = req.indexOf(' ', addr_start + 1);
  if (addr_start == -1 || addr_end == -1) {
      Serial.print("Invalid request: ");
      Serial.println(req);
      return;
  }
  req = req.substring(addr_start + 1, addr_end);
  item=req;
  Serial.println(item);
  String s;
  if (req == "/")
  {
      IPAddress ip = WiFi.localIP();
      String ipStr = String(ip[0]) + '.' + String(ip[1]) + '.' + String(ip[2]) + '.' + String(ip[3]);
      s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n<!DOCTYPE HTML>\r\n<html>Hello from ESP32 at ";
      s += ipStr;
      s += "</html>\r\n\r\n";
      Serial.println("Sending 200");
      client.println(s);
  }
  //client.print(s);
  client.stop();
}
//**********************************************************************************

```
<span style="color: rgb(255, 76, 65);">特别注意：</span>需要先将实验代码![图片不存在](./Arduino/media/e738c0e72f68d100db4f47b8772c9a4a.png)中的用户Wifi名称和用户Wifi密码改成你们自己的Wifi名称和Wifi密码。

**6.实验现象**

<span style="background: rgb(255, 251, 0);"><span style="color: rgb(255, 76, 0);">**特别注意：**<span style="color: rgb(255, 76, 0);"></span>确保计算机网络，手机/平板的网络，ESP32主板，路由器，代码中输入你自己的WiFi名称和密码都必须是在同一个局域网（WiFi）下。</span></span>

![Img](./media/img-202411180844190.png)

确认程序代码中的Wifi名称和Wifi密码修改正确后，编译并上传代码到ESP32主板上。

打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>，这样，串口监视器打印检测到的WiFi IP地址，然后打开WiFi APP。 在WIFI按钮前面的文本框中输入检测到的WIFI IP地址（<span style="color: rgb(255, 76, 65);">例如，下上面串口监视器检测到的IP地址：192.168.1.136</span>），再点击WIFI按钮，“403 Forbidden”或“网页无法打开”就会变成“192.168.1.136”。这样，就说明APP已经连接上了WIFI。

![图片不存在](./Arduino/media/b42be62a79b4b9639584699eb6bd1e06.png)

用手分别点击APP上的各个功能按钮，然后串口监视器会打印接收到的对应字符。

![图片不存在](./Arduino/media/e2844e48850242aa0b5bcf191d5ef28a.png)

**注意：** 如果打开串口监视器且设置波特率为115200之后，串口监视器窗口没有显示如下信息，可以按下ESP32的复位键![图片不存在](./Arduino/media/515a31c10d414cae43980905e7df1879.jpg)）


## 项目38 WiFi 智能家居

**1.实验说明：**

在前面的实验中，我们已经了解了ESP32的WiFi Station模式，WiFi AP模式和WiFi AP+Station模式等三种模式。那么在本章实验中，我们将使用ESP32的WiFi Station模式通过APP连接WIFI来控制多个传感器/模块工作，实现WiFi智能家居的效果。

**2.实验器材：**

|![图片不存在](./Arduino/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Arduino/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Arduino/media/2d879e56de94fbb14399ec17c0b10861.png)|![图片不存在](./Arduino/media/c910a7be7acddac1d2c4e4a1613524f4.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1| 130直流电机模块*1|继电器模块*1|
|![图片不存在](./Arduino/media/bf6d1660c4a52edca11f5a7763edfc19.png)|![图片不存在](./Arduino/media/7b166aa2bc58fd46700f92d9d49514a1.png)|![图片不存在](./Arduino/media/28c9fe25104d16cc0ed7da8c80c443ea.png)|![图片不存在](./Arduino/media/4191d5454859076aa2a6c069185be177.png)|
| 舵机*1 |温湿度传感器*1| 超声波传感器*1|4P转杜邦线公单*2|
|![图片不存在](./Arduino/media/4d0be04892e2038c372f82caba521f64.png)|![图片不存在](./Arduino/media/c562656c96657983e724daed7c8d6202.png)|![图片不存在](./Arduino/media/3cc5c242c0f357b3dc496037a7d8bae8.png)|![图片不存在](./Arduino/media/ed228ff5627e0c8cc0c79fa04f1d4d16.png)|
|智能手机/平板电脑(<span style="color: rgb(255, 76, 65);">自备</span>)*1|面包板专用电源模块*1|6节5号电池盒*1|风扇叶*1|
|![图片不存在](./Arduino/media/4c49cdffc9e5e6f1aad838120d35897a.png)|![图片不存在](./Arduino/media/b4421594adeb4676d63581a1047c6935.png)| ![图片不存在](./Arduino/media/1a190cfbfe81a1524e1d1ef681688a64.png)|![图片不存在](./Arduino/media/e989c0ba5c3c1ea8c5fc08d02344da37.png)|
|5号电池(<span style="color: rgb(255, 76, 65);">自备</span>)*6|MicroUSB线*1|3P转杜邦线公单*2|跳线若干|

**3.实验接线图：**

| 继电器| ESP32主板 | 温湿度传感器 | ESP32主板 |
| :--: | :--: | :--: | :--: |
| G | G| G | G |
| V | 5V | V | 5V |
| S | IO32 | S | IO15 |


| 超声波传感器| ESP32主板 | 130 风扇模块 | ESP32主板 |
| :--: | :--: | :--: | :--: |
| Vcc | 5V| G | G |
| Trig | IO14 | V | 5V |
| Echo | IO27 | IN+ | IO19 |
|Gnd|G|IN-|IO18|


| 舵机| ESP32主板 |
| :--: | :--: | 
| 红色线 | 5V|
| 棕色线 | G |
| 橙色线 | IO4 |


![图片不存在](./Arduino/media/344eb73d8060a421457efecce1ec0f4e.png)

(<span style="color: rgb(255, 76, 65);">注:</span> 先接好线，然后在直流电机上安装一个小风扇叶片。)

**4.安装APP:**

安装APP的方法请参照 <span style="color: rgb(255, 76, 65);">**项目37 WiFi测试**</span> 。这里就不重复讲解。

**5.添加xht11和ESP32Servo库：**

本项目代码使用了名为“<span style="color: rgb(255, 76, 65);">xht11</span>”和“<span style="color: rgb(255, 76, 65);">ESP32Servo</span>”库。如果你还没有添加，请在学习之前添加它们。添加第三方库的步骤如下:

**先添加xht11库：**

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\xht11.ZIP**的文件，先选中**xht11.ZIP** 文件，再单击“**打开**”。

![图片不存在](./Arduino/media/58222111b35fa4250914e49aa3e20826.png)

![图片不存在](./Arduino/media/241b68d2061444007abfe104eab9fefd.png)

**再添加ESP32Servo库：**

打开Arduino IDE，单击“**项目**”→“**包含库**”→“**添加.ZIP库...**”。在弹出窗口中找到该目录下名为 **..\库文件\Arduino_C_Windows系统\ESP32Servo-0.8.0.ZIP** 的文件，先选中**ESP32Servo-0.8.0.ZIP**文件，再单击“**打开**”。

![图片不存在](./Arduino/media/58222111b35fa4250914e49aa3e20826.png)

![图片不存在](./Arduino/media/e210dbc7997c08500968c937965153ad.png)

**6.项目代码：**

```
//**********************************************************************************
/*  
 * 文件名  : WiFi 智能家居.
 * 描述 : WiFi APP控制多个传感器/模块工作，实现WiFi智能家居的效果.
*/
#include <Arduino.h>
#include <WiFi.h>
#include <ESPmDNS.h>
#include <WiFiClient.h>

#include "xht11.h"
//gpio15
xht11 xht(15);
unsigned char dht[4] = {0, 0, 0, 0};

#include <ESP32Servo.h>
Servo myservo;
int servoPin = 4;
#define Relay  32
#define IN1 19  //IN1对应IN+
#define IN2 18 //IN2对应于IN-
#define trigPin  14
#define echoPin  27

int distance1;
String dis_str;
int ip_flag = 1;
int ultra_state = 1;
int temp_state = 1;
int humidity_state = 1;

String item = "0";
const char* ssid = "ChinaNet-2.4G-0DF0"; //用户wifi的名称
const char* password = "ChinaNet@233";  //用户wifi的密码
WiFiServer server(80);
String unoData = "";

void setup() {
  Serial.begin(115200);
  pinMode(Relay, OUTPUT);
  myservo.setPeriodHertz(50);   
  myservo.attach(servoPin, 500, 2500);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();
  Serial.println("TCP server started");
  MDNS.addService("http", "tcp", 80);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(Relay, LOW);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  WiFiClient client = server.available();
  if (!client) {
      return;
  }
  while(client.connected() && !client.available()){
      delay(1);
  }
  String req = client.readStringUntil('\r');
  int addr_start = req.indexOf(' ');
  int addr_end = req.indexOf(' ', addr_start + 1);
  if (addr_start == -1 || addr_end == -1) {
      Serial.print("Invalid request: ");
      Serial.println(req);
      return;
  }
  req = req.substring(addr_start + 1, addr_end);
  item=req;
  Serial.println(item);
  String s;
  if (req == "/")
  {
      IPAddress ip = WiFi.localIP();
      String ipStr = String(ip[0]) + '.' + String(ip[1]) + '.' + String(ip[2]) + '.' + String(ip[3]);
      s = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n<!DOCTYPE HTML>\r\n<html>Hello from ESP32 at ";
      s += ipStr;
      s += "</html>\r\n\r\n";
      Serial.println("Sending 200");
      client.println(s);
  }
  else if(req == "/btn/0")
  {
    Serial.write('a');
    client.println(F("turn on the relay"));
    digitalWrite(Relay, HIGH);
  }
  else if(req == "/btn/1")
  {
    Serial.write('b');
    client.println(F("turn off the relay"));
    digitalWrite(Relay, LOW);
  }
  else if(req == "/btn/2")
  {
    Serial.write('c');
    client.println("Bring the steering gear over 180 degrees");
    myservo.write(180); 
    delay(200);
  }
  else if(req == "/btn/3")
  {
    Serial.write('d');
    client.println("Bring the steering gear over 0 degrees");
    myservo.write(0); 
    delay(200);
  }
  else if(req == "/btn/4")
  {
    Serial.write('e');
    client.println("esp32 already turn on the fans");
    digitalWrite(IN1, LOW); 
    digitalWrite(IN2, HIGH);
  }
  else if(req == "/btn/5")
  {
    Serial.write('f');
    client.println("esp32 already turn off the fans");
    digitalWrite(IN1, LOW); 
    digitalWrite(IN2, LOW);
  }
  else if(req == "/btn/6")
  {
    Serial.write('g');
    while(Serial.available() > 0)
    {
      unoData = Serial.readStringUntil('#');
      client.println("Data");
    }
    while(ultra_state>0)
       {
          Serial.print("Distance = "); 
          Serial.print(checkdistance());
          Serial.println("#");
          Serial1.print("Distance = "); 
          Serial1.print(checkdistance());
          Serial1.println("#");  
          int t_val1 = checkdistance();
          client.print("Distance(cm) = ");
          client.println(t_val1); 
          ultra_state = 0;
        }
  }
  else if(req == "/btn/7")
  {
    Serial.write('h');
    client.println("turn off the ultrasonic");
    ultra_state = 1;
  }
  else if(req == "/btn/8")
  {
    Serial.write('i');
    while(Serial.available() > 0)
     {
      unoData = Serial.readStringUntil('#');
      client.println(unoData);
     }
    while(temp_state>0)
      {
        if (xht.receive(dht)) {
          Serial.print("Temperature = "); 
          Serial.print(dht[2],1);
          Serial.println("#");
          Serial1.print("Temperature = "); 
          Serial1.print(dht[2],1);
          Serial1.println("#");
          int t_val2 = dht[2];
          client.print("Temperature(℃) = ");
          client.println(t_val2);
        }
        temp_state = 0;
      }
  }
  else if(req == "/btn/9")
  {
    Serial.write('j');
    client.println("turn off the temperature");
    temp_state = 1;
  }
  else if(req == "/btn/10")
  {
    Serial.write('k');
    while(Serial.available() > 0)
     {
       unoData = Serial.readStringUntil('#');
       client.println(unoData);
     }
    while(humidity_state > 0)
      {
        if (xht.receive(dht)) {
          Serial.print("Humidity = "); 
          Serial.print(dht[0],1);
          Serial.println("#");
          Serial1.print("Humidity = "); 
          Serial1.print(dht[0],1);
          Serial1.println("#");
          int t_val3 = dht[0];
          client.print("Humidity(%) = ");
          client.println(t_val3);
        }
        humidity_state = 0;
      }
  }
  else if(req == "/btn/11")
  {
    Serial.write('l');
    client.println("turn off the humidity");
    humidity_state = 1;
    }
  //client.print(s);
  client.stop();
}

int checkdistance() {
  digitalWrite(14, LOW);
  delayMicroseconds(2);
  digitalWrite(14, HIGH);
  delayMicroseconds(10);
  digitalWrite(14, LOW);
  int distance = pulseIn(27, HIGH) / 58;
  
  delay(10);
  return distance;
}
//**********************************************************************************

```
<span style="color: rgb(255, 76, 65);">特别注意：</span>需要先将实验代码![图片不存在](./Arduino/media/e738c0e72f68d100db4f47b8772c9a4a.png)中的用户Wifi名称和用户Wifi密码改成你们自己的Wifi名称和Wifi密码。

**7.实验现象：**

<span style="background: rgb(255, 251, 0);"><span style="color: rgb(255, 76, 0);">**特别注意：**<span style="color: rgb(255, 76, 0);"></span>确保计算机网络，手机/平板的网络，ESP32主板，路由器，代码中输入你自己的WiFi名称和密码都必须是在同一个局域网（WiFi）下。</span></span>

![Img](./media/img-202411180844190.png)

确认程序代码中的Wifi名称和Wifi密码修改正确后，编译并上传代码到ESP32主板上。


打开串口监视器，设置波特率为<span style="color: rgb(255, 76, 65);">115200</span>，这样，串口监视器打印检测到的WiFi IP地址。（**注意：** 如果打开串口监视器且设置波特率为115200之后，串口监视器窗口没有显示如下信息，可以按下ESP32的复位键![图片不存在](./Arduino/media/515a31c10d414cae43980905e7df1879.jpg)）

![图片不存在](./Arduino/media/ccb617c22f708cc0cbe3623fba34c533.png)

然后打开WiFi APP，在WIFI按钮前面的文本框中输入检测到的WIFI IP地址（<span style="color: rgb(255, 76, 65);">例如，上面串口监视器检测到的IP地址：192.168.0.156</span>），接着点击WIFI按钮来连接WiFi，同时WiFi IP地址前的文本框中会显示对应的WiFi IP地址“Hello from ESP32 at <span style="color: rgb(255, 76, 65);">192.168.0.156</span>”。这样，就说明APP已经连接上了WiFi。（<span style="color: rgb(255, 76, 65);">WiFi的IP地址有时候会改变，如果原来的IP地址不行，需要重新检测WiFi的IP地址</span>）

![图片不存在](./Arduino/media/cd665b31cb39521d2f0d6f4054c1269f.png)

**APP已经连接上了WiFi后，开始进行如下操作：**

![图片不存在](./Arduino/media/0fda40d84316e4b01ffbc71f0061ae61.png)

（1）点击![图片不存在](./Arduino/media/bb79be97b679a1cb8281a7c496f283ff.png)按钮，继电器打开，APP上显示，模块上的指示灯点亮；再次点击![图片不存在](./Arduino/media/bb79be97b679a1cb8281a7c496f283ff.png)按钮，继电器关闭，APP上显示，模块上的指示灯不亮。

（2）点击![图片不存在](./Arduino/media/76543daeb680c2a1c2d683b090bcb40f.png)按钮，舵机转动180°，APP上显示![图片不存在](./Arduino/media/831496ab01c0280a07c3a5bf59122b2d.png)；再次点击![图片不存在](./Arduino/media/76543daeb680c2a1c2d683b090bcb40f.png)按钮，APP上显示![图片不存在](./Arduino/media/adf9577be47a7e948b587e99958539f0.png)，舵机转动0°。

（3）点击![图片不存在](./Arduino/media/1c7de5dcf1bc26c05aa6776876007fb7.png)按钮，电机（带小风扇叶）转动，APP上显示![图片不存在](./Arduino/media/60600c6635f525fbf4d8ce900334bfb2.png)；再次点击![图片不存在](./Arduino/media/1c7de5dcf1bc26c05aa6776876007fb7.png)按钮，关闭电机，APP上显示![图片不存在](./Arduino/media/3e58100ba052cf74a4316722a4a5d619.png)；

（4）点击![图片不存在](./Arduino/media/333c0081491bda5b140b2ed1e365e015.png)按钮，超声波传感器测距，在超声波传感器前放一个物体，APP上显示![图片不存在](./Arduino/media/7fc3f828806fba31c0c9b6ffaabf7ef9.png)（<span style="color: rgb(255, 76, 65);">不同的距离显示不同的数字</span>），说明此时物体离超声波传感器的距离为6cm；再次点击![图片不存在](./Arduino/media/333c0081491bda5b140b2ed1e365e015.png)按钮，关闭超声波，APP上显示![图片不存在](./Arduino/media/818c349610b39ea08e11a94007c662af.png)。

（5）点击![图片不存在](./Arduino/media/ba27f5c4eb27223a8293f112037fd219.png)按钮，温湿度传感器测量环境中的温度，APP上显示![图片不存在](./Arduino/media/6dc30aff44af4f55bfbcf0a52c54dfea.png)（<span style="color: rgb(255, 76, 65);">不同的温度条件下显示不同的温度值</span>），说明此时环境中的温度为30℃；再次点击![图片不存在](./Arduino/media/ba27f5c4eb27223a8293f112037fd219.png)按钮，关闭温湿度传感器，APP上显示![图片不存在](./Arduino/media/7e11047cab89f30e4409c99c1d289897.png)。

（6）点击![图片不存在](./Arduino/media/100e3e7685ce761e53f5b80d76d80c73.png)按钮，温湿度传感器测量环境中的湿度，APP上显示![图片不存在](./Arduino/media/e8972d08565f0f355af76a3454536edb.png)（<span style="color: rgb(255, 76, 65);">不同的湿度条件下显示不同的湿度值</span>），说明此时环境中的湿度为55%；再次点击![图片不存在](./Arduino/media/100e3e7685ce761e53f5b80d76d80c73.png)按钮，关闭温湿度传感器，APP上显示![图片不存在](./Arduino/media/9829bf9b9c6bef7f09449e113c6169a2.png)。




