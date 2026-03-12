## Arduino 开发环境

### **1. Arduino IDE 下载**

首先，进入Arduino官方网站：[Software | Arduino](https://www.arduino.cc/en/software) ，下载Arduino IDE。

Arduino 软件有很多版本，有Windows，Mac，Linux系统的（如下图），而且还有过去老的版本，你只需要下载一个适合自己计算机系统的版本即可。这里是以下载 **Windows Win 10 or newer(64-bit)** 为例，你也可以根据自己所需，选择下载 **Windows ZIP file**。选择如下图：

![Img](./media/1f975a2153559093d34b23afd73d3e7e.png)

这里我们以Windows系统的为例给大家介绍下载和安装的步骤。Windows系统的也有两个版本，一个版本是安装版：**Windows Win 10 or newer(64-bit)** ；另一个版本是下载版：**Windows ZIP file**，是不用安装，直接下载文件到电脑，解压就可以用了。

### **2. Arduino IDE 安装** 

1\. 保存从软件页面下载的 "**.exe文件**" 到硬盘驱动器，然后简单地运行该文件，

![Img](./media/a5.png)

2\. 当你收到操作系统的警告时，请点击 “**Allow access**” 允许驱动程序安装。

![Img](./media/15bcc3e3f13e89a7a3eaf2d6e9ca5b2c.png)

3\. 点击 “**I Agree**” 阅读许可协议并同意。

![Img](./media/72f9cfe86a9e89aeb3431ed66d9df5bf.png)

4\. 选择安装选项为 “**Anyone who uses this computer(all users)**” 后再点击 "**Next**"。

![Img](./media/74bde0fbec2a9a15c14435633eb7b864.png)

5\. 如果又出现下面页面，请点击 “**I Agree**”。

![Img](./media/72f9cfe86a9e89aeb3431ed66d9df5bf.png)

6\. 选择安装目录(我们建议保持默认目录)，然后点击 “**Install**”。

![Img](./media/6c66ee9c7b948a27341de4f5d5e59ab1.png)

7\. 如果出现以下界面，则应选择 “**Install**”。

![Img](./media/68ddbb0c391855fd7213d5d9269eebb8.png)

该过程将提取并安装所有必需的文件，以正确执行Arduino软件(IDE)。

![Img](./media/235841a13809e8c131e0471e1c90f54a.png)

8\. 安装完成后，会在桌面上生成一个Arduino IDE软件快捷方式，单击 “**Finish**” 并运行 Arduino IDE。

![Img](./media/9152131aa663c6c5723a96c9e6f7a9a1.png)

### **3. Arduino IDE工具栏介绍**

点击电脑桌面上的图标 ![Img](./media/edbce928e27d6f6d26e0a6df960421da.png)，打开 Arduino IDE。

![Img](./media/29c35817885841cbbc9385b4c8544290.png)

![Img](./media/752c9d4cfd38937d8b7ac496bf66d96d.png) -- 用于 检查是否存在任何编译错误。

![Img](./media/84910ad669ba1c2669ec402831fbf46d.png) -- 用于 将程序上传到Arduino板。

![Img](./media/8d72475c82afbebb1edf0f1fc12da524.png) -- 用于 编写程序时的单步调试。

![Img](./media/c5e52211c8c8b64345c420211a2fd2ee.png) -- 用于 从板接收串行数据并将串行数据发送到板的串行监视器。

![Img](./media/f97189a9ca8ff237dc41194ed5c28188.png) -- 用于 串口接收的数据转换成动态曲线图。

![Img](./media/4f1db32e023aa9d575b641cd83f93b38.png) -- 用于 打开最近保存的示例草图。

![Img](./media/f33fa6565913b109c0111e39340ad201.png) -- 用于 手动安装开发板。

**语言切换功能：**

（1）单击 “**File**” → “**Preferences**”，在 Preferences 页面中将语言 “**English**” 切换成 “**简体中文**”，点击 “**OK**” 就可以了。

![Img](./media/d44b87180f422631e697fea296cd5582.png)

![Img](./media/d77dd3ef192740d9e3d321ea94eaa105.png)

![Img](./media/9f65a26855c17f2e34252ffab28c51d7.png)

### **4. 在Arduino IDE上安装ESP32**

上面已经学习了怎么下载ArduinoIDE和怎么安装驱动，那下面就要在Arduino IDE上安装ESP32，请执行以下步骤：

<span style="color: rgb(255, 76, 65);">特别注意：请选择1.8.5及以上版本的Arduino IDE进行安装，以确保ESP32环境可以安装成功。</span>

(1) 点击电脑桌面上的图标 ![Img](./media/edbce928e27d6f6d26e0a6df960421da.png)，打开Arduino IDE。

![Img](./media/e50b14820c3bb291108dc8b9c0c12843.png)

(2) 点击 “**文件**” → “**首选项**”，如下图：

![Img](./media/339b8fc0220890b15cac94e7fefd8e7f.png)

(3) 打开下图标出的按钮。

![Img](./media/dd6d3ea8b8ab77977ff2b2af74dbcdab.png)

(4) 将这个地址：`https://espressif.github.io/arduino-esp32/package_esp32_index.json` 复制粘贴到里面去，再点击 “**确定**” 保存这个地址，如下图：

![Img](./media/0f4697f40d0e4c73cdaa36a15034e63b.png)

(5) 再点击 “**确定**”。

![Img](./media/11dd827f1f17588419bf7be03a47211d.png)

（6）先点击 “**工具**” → “**开发板:**”，再点击 “**开发板管理器...**” 按钮进入 “**开发板管理器**” 页面，在文本框中输入 “**esp32**”，选择 <span style="color: rgb(255, 76, 65);">1.0.6</span> 版本进行安装，安装包不大，点击 “**安装**” 按钮开始安装相关安装包。如下图：**<span style="color: rgb(255, 76, 0);">（特别提醒：如果选择更高版本或最新版本，在后续课程上传代码中可能会报错。）</span>**

![Img](./media/486d22dca3d5007c0866fe0dd4b3075e.png)

![Img](./media/fe7700b0fc213248a7b2d09cd6fc20ae.png)

![Img](./media/26766efa26cbdaa8d507e52e40317158.png)

（7）点击 “**工具**” → “**开发板:**”，就可以看到安装好的 **ESP32 Arduino**，你可以在里面查看到各种不同型号ESP32开发板，选择对应的ESP32开发板型号。

![Img](./media/7d924f3a05df1addfd61d26a4b1f9eff.png)

![Img](./media/07bbc456b0cfb6f5393701025233b38b.png)

### **5. 添加arduino库文件（以Windows系统为例）**

<span style="color: rgb(0, 209, 0); background: rgb(255, 251, 0);">特别提醒：库文件在上面 **<span style="color: rgb(255, 76, 65);">资料下载</span>** 处提供有，请下载并且安装好库文件。</span>

找到前面下载的资料，如下图：

![Img](./media/3246c24f086499d7a4acf7aed84e44b7.png)

（1）打开Arduino IDE![Img](./media/edbce928e27d6f6d26e0a6df960421da.png)，在Arduino IDE界面点击 “**项目**” → “**包含库**” → “**添加.ZIP库...**”。

![Img](./media/f82d63c799a10f799b43831596ea78cc.png)

（2）找到库文件存放的位置，选中对应的库文件，点击 “**打开**” 添加即可。库文件只能一个一个的添加。（<span style="color: rgb(255, 76, 65);">注意：库文件需要压缩为 **.ZIP** 格式，我们在文件夹中是以 **.ZIP** 格式提供有；这里以 “**ESP32Servo-0.8.0.ZIP**” 为演示，其他库文件的添加方法是一样的。</span>）。

![Img](./media/4cfe33d7feaf2a225dbb4b8ff87af6ee.png)

到这，正常是安装成功的了。



