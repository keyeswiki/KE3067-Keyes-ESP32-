# Python 教程

## 开发环境设置

在开始构建项目之前，你需要首先做一些准备，这是非常重要的，你不能跳过。

**一、安装Thonny(重要)：**

Thonny是一个免费、开源的软件平台，体积小，界面简单，操作简单，功能丰富，是一个适合初学者的Python IDE。在本教程中，我们使用这个IDE在整个过程中开发ESP32。Thonny支持多种操作系统，包括Windows, Mac OS,  Linux。

**1.下载Thonny软件：**

(1) 进入软件官网：[https://thonny.org](https://thonny.org) 下载Thonny软件，最好下载最新版的，否则可能不支持ESP32.

(2) Thonny的开源代码库：[https://github.com/thonny/thonny](https://github.com/thonny/thonny)

请按照官网的指导安装或点击下面的链接下载安装。(请根据您的操作系统选择相应的选项.)

|操作系统|下载链接/方法|
| :--: | :--: |
|MAC OS：|[https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.pkg](https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.pkg)|
|Windows：|[https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.exe](https://github.com/thonny/thonny/releases/download/v3.2.7/thonny-3.2.7.exe)|
|Linux：|最新版本:(如下)|
```
Binary bundle for PC (Thonny+Python): 
bash <(wget -O - https://thonny.org/installer-for-linux) 
With pip:
pip3 install thonny
Distro packages (may not be the latest version):
Debian, Rasbian, Ubuntu, Mint and others:
sudo apt install thonny
Fedora:
sudo dnf install thonny
```

![图片不存在](./Python/media/691aee88a6f0771c7416be3547acd6ce.png)

![图片不存在](./Python/media/d577f429469daa3e36f0270f6f14be9c.png)

**2.Windows上安装Thonny软件：**

A.下载后的Thonny图标如下。

![图片不存在](./Python/media/8391c0dcc090cdbee910616f125c4a27.png)

B.双击“thonny-4.0.2.exe”，会出现下面对话框，我这里是选择“![图片不存在](./Python/media/b893aed32cde73b09cdb948d5588eccf.png)”进行操作的。你也可以选择“![图片不存在](./Python/media/86721bc54bd171a95e76e140d6216733.png)”进行操作的。

![图片不存在](./Python/media/25937888ff93553e85fa1d0ba89df5d8.png)

C.如果您不熟悉电脑软件安装，您可以一直单击“**Next**”直到安装完成。

![图片不存在](./Python/media/35cb8372fa4264fffd276a23ac041779.png)

![图片不存在](./Python/media/a30d1d505b110d16c3a4304108ed47fa.png)

D.如果您需要更改Thonny软件的安装路径，可以单击“**Browse...**”进行修改。选择安装路径后，单击“**OK**”。

如果您不想更改安装路径，只需单击“**Next**”；然后又继续单击“**Next**”。

![图片不存在](./Python/media/087d0515e40f7926c250482a352000a1.png)

![图片不存在](./Python/media/4d6b986f8e5e45ebf5ea981d0bd8779b.png)

E.选中“**Create desktop icon**”，Thonny软件会在你的桌面上生成一个快捷方式，方便你稍后打开Thonny软件。

![图片不存在](./Python/media/7e624c096b03fe4de2a81d8f45daf7a1.png)

F.单击“**Install**”安装软件。

![图片不存在](./Python/media/47917e20d7b062993d29c1ba485af9b1.png)

G.在安装过程中，您只需等待安装完成，千万不要点击“**Cancel**”，否则将无法安装成功。

![图片不存在](./Python/media/86f0178f6de6b3588bd6c5d58bcba927.png)

H.一旦看到如下界面，就表示已经成功安装了Thonny软件，点击“**Finish**”就可以。

![图片不存在](./Python/media/509aa2c1bbda49b81e2e5c40eae16cec.png)

I.如果你在安装过程中选择了“**Create desktop icon**”，则可以在桌面上看到如下图标。

![图片不存在](./Python/media/c6058db9b9639b732e8addec644f1220.png)

**二、Thonny软件基本配置** 

A.双击Thonny软件的桌面图标，可以看到如下界面，同时还可以进行语言选择(<span style="color: rgb(255, 76, 65);">这里选择简体中文</span>)和初始设置。设置完了点击“**Let’s go！**”。

![图片不存在](./Python/media/20e07e892206f4851f5d20e48bebd4a4.png)

![图片不存在](./Python/media/12af365d1396796f599b6dfe30919e57.png)

![图片不存在](./Python/media/8efbe0a5775b66f7c79d27dc7ca196e0.png)

![图片不存在](./Python/media/d3ad2e747e3a8d93006bf65142c19801.png)

![图片不存在](./Python/media/1b36b52a8a0e036c6d42177706588dd7.png)

B.选择“**视图**”→“**文件**”和“**Shell**”。

![图片不存在](./Python/media/610b462833d8282fb05958d2cd6f3ec5.png)

![图片不存在](./Python/media/c27f1203c244e5b4b8f912a218aa2ab5.png)

![图片不存在](./Python/media/00a23e714ffd72f5d4fcb50bf4e5af3e.png)

**三、安装CP2102驱动：**

ESP32通过CP2102驱动下载代码。所以在使用它之前，我们需要在计算机中安装CP2102驱动程序。

**Windows 系统**

检查CP2102驱动是否已经安装

1.用USB线连接计算机和ESP32。

![图片不存在](./Python/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

2.进入计算机主界面，选择“**此电脑**”，右键单击选择“**管理**”。

![图片不存在](./Python/media/94d329cb6c1b4e473da1c3efaa2ff1b4.png)

3.单击“**设备管理器**”。如果你的计算机已经安装了CP2102驱动，则可以看到“**Silicon Labs CP210x USB to UART Bridge(COMx)**”。

![图片不存在](./Python/media/26257c4da22869d81c9a5795a3f86768.png)

**安装CP2102驱动**

1.如果未安装CP2102驱动，界面显示如下。

![图片不存在](./Python/media/0fe123111f8eaa410a8475f9f889da21.png)

2.单击“**CP2102 USB to UART Bridge Controller**”，右键选择“**更新驱动程序(P)**”。

![图片不存在](./Python/media/1bb381872c77f0ea8da2f3184da164be.png)

3.单击 “**浏览我的电脑以查找驱动程序(R)**”.

![图片不存在](./Python/media/70fb71e2b93d86b87e640ca2eb94b3ae.png)

4.单击“浏览(R)...”选择CP210x_6.7.4(驱动路径：**..\其他重要资料\CP2102驱动文件\CP2102 驱动文件-Windows**)，单击“**下一页**”

![图片不存在](./Python/media/684ee28b12b9f0e8e92ed402f9cfabd8.jpg)

5.等待CP2102驱动安装完成。当界面显示如下时，表示已安装CP2102驱动。你可以关闭该界面。

![图片不存在](./Python/media/b2529cab7d8766c0622d14280e18b39c.png)

6.ESP32与计算机连接时，界面显示如下。

![图片不存在](./Python/media/dbf6accbe744c1625042c7164379a748.png)

<span style="color: rgb(0, 209, 0);">MAC 系统</span>

<br>

安装CP2102驱动方法请参照 “**<span style="background: rgb(255, 251, 0);">Arduino C 教程 Windows系统</span>**” 教程中 “<span style="color: rgb(255, 76, 65);">开发环境设置</span>” 部分。

**四、烧入Micropython固件(重要)**

要在ESP32主板上运行Python程序，我们需要先将固件烧入到ESP32主板。

**下载Micropython固件**

microPython官方网站：[http://micropython.org/](http://micropython.org/)

网页列出microPython的ESP32固件：[https://micropython.org/download/esp32/](https://micropython.org/download/esp32/)

![图片不存在](./Python/media/e104b567a7591c6ee38fa034c105ea67.png)

本教程中使用的固件是：<span style="color: rgb(0, 209, 0);">esp32-20210902-v1.19.bin</span>

我们的文件夹中也提供了这个固件：“**..\其他重要资料\Python固件和软件\Python_固件**”。

![图片不存在](./Python/media/3a22fb4f8238bacea9a880cc04461368.png)

**烧入Micropython固件**

用USB线连接计算机和ESP32主板。

![图片不存在](./Python/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

确保驱动程序已成功安装，并能正确识别COM端口。打开设备管理器并展开“**端口(COM和LPT)**”。

![图片不存在](./Python/media/9520c883fda5ad7907b23114abf7dd34.png)

<span style="color: rgb(255, 76, 65);">注意：不同的电脑，COM端口可能不同，这是正常情况。</span>

<br>
<br>

1.打开Thonny，点击“**运行**” ，选择 “**配置解释器**”。

![图片不存在](./Python/media/188fd4cf61083403f7d8bd9f96814814.png)

2.选中“**MicroPython (ESP32)**”，选中“**Silicon Labs CP210x USB to UART Bridge(COM7)**”，然后点击“**安装或更新MicroPython**”。

![图片不存在](./Python/media/33f47e1085dd98fe7a1a87c955e3fa4c.png)

![图片不存在](./Python/media/7553f3dadd7528fd9d0c1a493a34282c.png)

![图片不存在](./Python/media/3560ea7fdd94b1c9e9fc6c118d51ca3b.png)

3.弹出如下对话框，“**Port**”选择“**Silicon Labs CP210x USB to UART Bridge(COM7)**”，单击“**Browse...**”选择之前准备好的microPython固件<span style="color: rgb(0, 209, 0);">esp32-20220618-v1.19.1.bin</span>。检查“Erase flash before installing”和“Flash mode”，然后点击“**安装**”，等待安装完成提示。（<span style="color: rgb(255, 76, 65);">注意：如果安装固件失败，请再次点击“**安装**”，然后按住ESP32主板上的Boot键![图片不存在](./Python/media/a3ce49fbd6f40f09869aa7e1d9f902f8.png)，出现上传进度百分比再松开Boot键。</span>）

![图片不存在](./Python/media/31a813b6aee6c97d1e3c1ad823afb959.png)

![图片不存在](./Python/media/3a22fb4f8238bacea9a880cc04461368.png)

![图片不存在](./Python/media/624fd845172c4f61093b03a1e8b994be.png)

4.等待安装完成。安装完成后先点击“**关闭**”再点击“**好的**”就行。

![图片不存在](./Python/media/f9412943c23e89b54d77943762375c74.png)

![图片不存在](./Python/media/ddf2a71d50fc5c5702cccc0516992c19.png)

![图片不存在](./Python/media/e697ce4e1d111990473cad4a56007888.png)

5.关闭所有对话框，转到主界面，点击“![图片不存在](./Python/media/7b5fe8311cc696a95e2436fcda1f2a41.png)”。如下图所示：

![图片不存在](./Python/media/7ddff7c501118105a347040e257382de.png)

6.到目前为止，一切准备工作都已就绪。

**五、测试代码：**

**测试Shell命令**

在“Shell”窗口中输入“print('hello world')”并按Enter键。

![图片不存在](./Python/media/a62c6c3fe3a805826b02251b5ede2233.png)

**在线运行**

ESP32需要连接到计算机时，它是在线运行。用户可以使用Thonny编写和调试程序。

1.打开Thonny并单击![图片不存在](./Python/media/15ef882707c025fcceb5fc78f624c946.png)“打开”。

![图片不存在](./Python/media/dbbcc54db4e22627a5b15c8155c46e53.png)

2.在新弹出的窗口中，单击“**此电脑**”。

![图片不存在](./Python/media/423687ce5fedb4a31b6b415b02d08871.png)

在新的对话框中，在路径：“<span style="color: rgb(255, 76, 65);">..\程序代码\Python_代码\项目01 Hello World</span>” 中选择 “**Project_01_HelloWorld.py**” 。

![图片不存在](./Python/media/d91f0f708b1a7f16a5552ca3b0934fe7.png)

![图片不存在](./Python/media/74b7bfdb8175388b3c34a50bcce37bad.png)

单击![图片不存在](./Python/media/5c05febdb56bb5ef370e897c012c1b91.png), “Hello World”将在“Shell”窗口中打印出来。

![图片不存在](./Python/media/b6fbe337a8053653dc74e1a567fddb8c.png)

<span style="color: rgb(255, 76, 65);">注意：</span>在线运行时，如果按下ESP32的复位键，用户的代码将不会再次执行。

**六、Thonny常见的操作：**

本教程中使用的代码保存在（即路径）：“**..\程序代码\Python_代码**”。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

**上传代码到ESP32**

为了方便起见，我们以“**项目10 8×8点阵屏**”为例。在“**项目10 8×8点阵屏**”文件夹中选择“ht16k33\.py”，右键单击鼠标，选择“**上传到/**”将代码上传到ESP32的根目录中。

![图片不存在](./Python/media/b59522c9e350086e1980bf8ba1568119.png)

![图片不存在](./Python/media/74ab5078a1262bd4f1bff83f083f32b0.png)

**下载代码到电脑**

在“MicroPython 设备”中选择“boot\.py”，右键选择“**下载到…**”把代码下载到你的电脑里。

![图片不存在](./Python/media/3c953bef089cabcdf4de9aff02a09f22.png)

**删除ESP32根目录下的文件**

在“MicroPython 设备”中选择“ht16k33\.py”，右键单击它且选择“**删除**”，将“ht16k33\.py”从ESP32的根目录中删除。

![图片不存在](./Python/media/3ce9b959ade0435281746d3cc92c153b.png)

![图片不存在](./Python/media/2960ef008d41f5bc69478c1eb100aa81.png)

![图片不存在](./Python/media/c839bcea2f72ab27dcdd57965a7fbdc2.png)














## 项目01 Hello World

**1.项目介绍：**

对于ESP32的初学者，我们将从一些简单的东西开始。在这个项目中，你只需要一个ESP32主板，USB线和电脑就可以完成“Hello World!”项目。它不仅是ESP32主板和电脑的通信测试，也是ESP32的初级项目。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
| :--: | :--: |
| ESP32*1 | USB 线*1 |

**3.项目接线：**

在本项目中，我们通过USB线将ESP32和电脑连接起来。

![图片不存在](./Python/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

**4.在线运行代码：**

要在线运行ESP32，你需要把ESP32连接到电脑上。这样就可以使用Thonny软件编译或调试程序。

**优点：** 

1. 你们可以使用Thonny软件编译或调试程序。

3. 通过“Shell”窗口，你们可以查看程序运行过程中产生的错误信息和输出结果，并可以在线查询相关功能信息，帮助改进程序。

**缺点：**

1. 要在线运行ESP32，你必须将ESP32连接到一台电脑上并和Thonny软件一起运行。

2. 如果ESP32与电脑断开连接，当它们重新连接时，程序将无法再次运行。

**基本操作：**

1. 打开Thonny软件，并且单击![图片不存在](./Python/media/de77de1c3006b25f2a8f3dfcec326cdb.png)“**打开...**”。

![图片不存在](./Python/media/b2e34da970c01c1aa076fcf62fff55e9.png)

2. 在新弹出的窗口中，单击“**此电脑**”。

![图片不存在](./Python/media/f3919d4dce2da59b52e50ca730e5fdd7.png)

3. 在新的对话框中，选中“Project_01_HelloWorld.py”,单击“**打开**”。

![图片不存在](./Python/media/c79103a8f8df62027d9c2f8444f97444.png)

![图片不存在](./Python/media/cf92c3a825ea8f8c0a6acc40114154ad.png)

<span style="color: rgb(255, 76, 65);">**注意：**</span>

本教程中使用的代码保存在（即路径）：“**..\程序代码\Python_代码**”。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

4. 单击![图片不存在](./Python/media/5c05febdb56bb5ef370e897c012c1b91.png)来执行程序“Hello World!”, "Welcome Keyestudio" 并将打印在“Shell”窗口。

![图片不存在](./Python/media/50db2dd9938bd0554a1971fb33f02f7a.png)

5. 退出在线运行

当在线运行时，单击Thonny软件上![图片不存在](./Python/media/555a25f055ba1b4c56ee4c3a28ffe5af.png)或按Ctrl+C退出程序。

![图片不存在](./Python/media/4f907261ba0835c09c29c1cf20b80b53.png)

## 项目02 点亮LED

**1.项目介绍：**

在这个项目中，我们将向你展示点亮LED。我们使用ESP32的数字引脚打开LED，使LED被点亮。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*1|跳线*2|USB 线*1|

**3.元件知识：**

**（1）LED**

![图片不存在](./Python/media/32369e035f09fa12898e90cd3f916cbe.png)

LED是一种被称为“发光二极管”的半导体，是一种由半导体材料(硅、硒、锗等)制成的电子器件。它有正极和负极。短腿为负极，接GND，长腿为正极，接3.3V或5V。

![图片不存在](./Python/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

**（2）五色环电阻**

电阻是电路中限制或调节电流流动的电子元件。左边是电阻器的外观，右边是电阻在电路中表示的符号。电阻(R)的单位为欧姆(Ω)，1 mΩ= 1000 kΩ，1kΩ= 1000Ω。
   
我们可以使用电阻来保护敏感组件，如LED。电阻的强度（以Ω为单位）用小色环标记在电阻器的主体上。每种颜色代表一个数字，你可以用电阻对照卡查找。

![图片不存在](./Python/media/e60472f717ced1cc0bd94f4972ef0cd0.png)

在这个套件中，我们提供了3个具有不同电阻值的五色环电阻。这里以3个五色环电阻为例：
220Ω电阻×10

![图片不存在](./Python/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

10KΩ电阻×10

![图片不存在](./Python/media/2d3f0996515352c92c07d17e074e7308.png)

1KΩ电阻×10

![图片不存在](./Python/media/931d1535563f6d817300f97c0946a01c.png)

在相同的电压下，会有更小的电流和更大的电阻。电流、电压、电阻之间的联系可以用公式表示：I=U/R。在下图中，目前通过R1的电流: I = U / R = 3 V / 10 KΩ= 0.0003A= 0.3mA。

![图片不存在](./Python/media/997accddd11490d13b769b9f3477daa7.png)

不要把电阻值很低的电阻直接连接在电源两极，这样会使电流过高而损坏电子元件。电阻是没有正负极之分。

**（3）面包板**

面包板是实验室中用于搭接电路的重要工具。面包板上有许多孔，可以插入集成电路和电阻等电路元件。熟练掌握面包板的使用方法是提高实验效率，减少实验故障出现几率的重要基础之一。下面就面包板的结构和使用方法做简单介绍。一个典型的面包板如下所示：

![图片不存在](./Python/media/d4cb46e6b01d820bb150f0e8a122417e.png)

 面包板的外观和内部结构如上图所示，常见的最小单元面包板分上、中、下三部分，上面和下面部分一般是由一行或两行的插孔构成的窄条，中间部分是由中间一条隔离凹槽和上下各5 行的插孔构成的条。

![图片不存在](./Python/media/2e9ef45f88652609af40b031ed0f0084.png)

在面包板的两个窄条分别有两行插孔，两行之间是不连通的，一般是作为电源引入的通路。上方第一行标有“+”的一行有10组插孔（内部都是连通），均为正极；上方第二行标有“-”的一行有10组插孔，（内部都是连通），均为接地。面包板下方的第一行与第二行结构同上。如需用到整个面包板，通常将“+”与“+”用导线连接起来，“-”与“-”用导线连接起来。

中间部分宽条是由中间一条隔离凹槽和上下各5 行的插孔构成。在同一列中的5 个插孔是互相连通的，列和列之间以及凹槽上下部分则是不连通的。外观及结构如下图：

![图片不存在](./Python/media/8690e125a8f918f5e2b7950526e98ebb.png)

中间部分宽条的连接孔分为上下两部分，是面包板的主工作区，用来插接原件和跳线。在同一列中的5个插孔（即a-b-c-d-e，f-g-h-i-j）是互相连通的；列和列之间以及凹槽上下部分是不连通的。在做实验的时候，通常是使用两窄一宽组成的小单元，在宽条部分搭接电路的主体部分，上面的窄条取一行做电源，下面的窄条取一行做接地。中间宽条用于连接电路，由于凹槽上下是不连通的，所以集成块一般跨插在凹槽上。

**(4)电源**

ESP32需要3.3V-5V电源，在本项目中，我们通过用USB线将ESP32和电脑连起来。

![图片不存在](./Python/media/46cf3a8a1c79e456ac0f02da5ef38aec.png)

**4.项目接线图：**

首先，切断ESP32的所有电源。然后根据接线图搭建电路。电路搭建好并验证无误后，用USB线将ESP32连接到电脑上。

<span style="color: rgb(255, 76, 65);">注意：</span>避免任何可能的短路(特别是连接3.3V和GND)!

<span style="color: rgb(255, 76, 65);">警告：短路可能导致电路中产生大电流，造成元件过热，并对硬件造成永久性损坏。  
</span>

![图片不存在](./Python/media/6d79aa47daab6bc5dc46b1e62215d9c8.png)

<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Python/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻

![图片不存在](./Python/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。
![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)
你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目02 点亮LED”。并鼠标左键双击“Project_02_Turn_On_LED.py”。

![图片不存在](./Python/media/8c6add6b860d8657febf1e0af8d09e13.png)

```
from machine import Pin
import time

led = Pin(15, Pin.OUT)   # 创建引脚15为LED对象，设置引脚15为输出

led.value(1)    # led点亮
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/6ee37e7037e94f4e21cc11669bba6303.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：电路中的LED被点亮。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/6027e93ef7d0554b4d34d962dbf5f78d.png)

![图片不存在](./Python/media/c1de80712829b80aa4ee6d77c6907e4e.png)





## 项目03 LED闪烁

**1.项目介绍：**

在这个项目中，我们将向你展示LED闪烁效果。我们使用ESP32的数字引脚打开LED，让它闪烁。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*1|跳线*2|USB 线*1|

**3.项目接线图：**

首先，切断ESP32的所有电源。然后根据电路图和接线图搭建电路。电路搭建好并验证无误后，用USB线将ESP32连接到电脑上。

<span style="color: rgb(255, 76, 65);">注意：</span>避免任何可能的短路(特别是连接3.3V和GND)!

<span style="color: rgb(255, 76, 65);">警告：短路可能导致电路中产生大电流，造成元件过热，并对硬件造成永久性损坏。 </span>

![图片不存在](./Python/media/6d79aa47daab6bc5dc46b1e62215d9c8.png)


<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Python/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻

![图片不存在](./Python/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

**4.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目03 LED闪烁”。并鼠标左键双击“Project_03_LED_Flashing.py”。

![图片不存在](./Python/media/6280394313e1222f34d266a558eb4e6c.png)

```
from machine import Pin
import time

led = Pin(15, Pin.OUT)   # 创建引脚15为LED对象，设置引脚15为输出

try:
    while True:
        led.value(1)    # LED点亮
        time.sleep(0.5) # 延时 0.5s
        led.value(0)    # LED熄灭
        time.sleep(0.5) # 延时 0.5s
except:
    pass

```
**5.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/bc216463e15b9b9a17a267106b76b8e8.png)

单击“![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)”，代码开始执行，你会看到的现象是：电路中的LED开始闪烁。按“Ctrl+C”或单击“![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)”退出程序。

![图片不存在](./Python/media/cc82f4f88dca5cfde7f66b76f2a508ed.png)

![图片不存在](./Python/media/cf58420229598d0f9b902b73b380e79b.png)











## 项目04 呼吸灯

**1.项目介绍：**

在之前的研究中，我们知道LED有亮/灭状态，那么如何进入中间状态呢?如何输出一个中间状态让LED“半亮”?这就是我们将要学习的。呼吸灯，即LED由灭到亮，再由亮到灭，就像“呼吸”一样。那么，如何控制LED的亮度呢? 在这个项目中，我们将使用ESP32的PWM来实现这个目标。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*1|跳线*2|USB 线*1|

**3.元件知识：**

![图片不存在](./Python/media/e739a6e4a95fa8bbbefb26ef955dc465.png)

**模拟信号 & 数字信号** 

模拟信号在时间和数值上都是连续的信号。相反，数字信号或离散时间信号是由一系列数字组成的时间序列。生活中的大多数信号都是模拟信号，一个熟悉的模拟信号的例子是: 全天的温度是连续不断变化的，而不是突然从0到10的瞬间变化。然而，数字信号的值可以瞬间改变，这个变化用数字表示为1和0(二进制代码的基础)。如下图所示，我们可以更容易地看出它们的差异。

![图片不存在](./Python/media/550c1d587189ce5ac3678f44b08ac888.png)

在实际应用中，我们经常使用二进制作为数字信号，即一系列的0和1。由于二进制信号只有两个值(0或1)，因此具有很大的稳定性和可靠性。最后，可以将模拟信号和数字信号相互转换。

**PWM：**

脉宽调制(PWM)是一种利用数字信号控制模拟电路的有效方法，普通处理器不能直接输出模拟信号，而PWM技术使这种转换(将数字信号转换为模拟信号)非常方便。PWM技术利用数字引脚发送一定频率的方波，即高电平和低电平的输出，交替持续一段时间，每一组高电平和低电平的总时间一般是固定的，称为周期(注:周期的倒数是频率)。高电平输出的时间通常称为脉宽，占空比是脉宽(PW)与波形总周期(T)之比的百分比。高电平输出持续时间越长，占空比越长，模拟信号中相应的电压也就越高。下图显示了对应于脉冲宽度0%-100%的模拟信号电压在0V-3.3V(高电平为3.3V)之间的变化情况.

![图片不存在](./Python/media/0c29da4ca7a2fee2f5a0078eacc9e88a.png)

PWM占空比越长，输出功率越高。既然我们了解了这种关系，我们就可以用PWM来控制LED的亮度或直流电机的速度等等。从上面可以看出，PWM并不是真实的模拟信号，电压的有效值等于相应的模拟信号。因此，我们可以控制LED和其他输出模块的输出功率，以达到不同的效果。

**ESP32 与 PWM**

几乎所有ESP32输入/输出引脚都可用于PWM（脉冲宽度调制）。使用这些引脚可以控制电机和LED灯等。

**4.项目接线图：** 

![图片不存在](./Python/media/6d79aa47daab6bc5dc46b1e62215d9c8.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目04 呼吸灯”。并鼠标左键双击“Project_04_Breathing_LED.py”。

![图片不存在](./Python/media/9738659594bf2791978a13628dd5ae42.png)

```
import time
from machine import Pin,PWM

## ESP32 PWM引脚输出的方式与传统控制器不同。
## 它可以改变频率和占空比通过配置PWM的参数在初始化阶段。
## 定义GPIO15的输出频率为10000Hz，分配给PWM。

pwm =PWM(Pin(15,Pin.OUT),10000)

try:
    while True:
## 占空比范围为0-1023，因此我们使用第一个for回路控制PWM改变占空比值，使PWM输出0% -100%;
## 使用第二个for回路使PWM输出100%-0%。 
        for i in range(0,1023):
            pwm.duty(i)
            time.sleep_ms(1)
            
        for i in range(0,1023):
            pwm.duty(1023-i)
            time.sleep_ms(1)  
except:
## 每次使用PWM时，硬件定时器将打开以配合它。
## 因此，每次使用PWM后，都需要调用deinit()来关闭定时器。否则，下次PWM可能无法工作.
    pwm.deinit()
```

**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/9c1c956e61015c180d8742162327ad16.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：电路中的LED从暗逐渐变亮，再从亮逐渐变暗，就像呼吸一样。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/af597d2a47b8d896897ab8078af2dce5.png)

![图片不存在](./Python/media/7a0d2717b48056cbef36f880212d8e07.png)




## 项目05 交通灯

**1.项目介绍：**

交通灯在我们的日常生活中很普遍。根据一定的时间规律，交通灯是由红、黄、绿三种颜色组成的。每个人都应该遵守交通规则，这可以避免许多交通事故。在这个项目中，我们将使用ESP32和一些led(红，黄，绿)来模拟交通灯。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|![图片不存在](./Python/media/36f39ba5899a86990d02500371bc0e77.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|黄色 LED*1|
|![图片不存在](./Python/media/f361df3b38005087cb22efc34689d554.png)|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|绿色LED*1|220Ω电阻*3|跳线若干|USB 线*1|

**3.项目接线图：**

![图片不存在](./Python/media/6122c8ef01c7a01dc5491df1c73a00b1.png)

**4.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目05 交通灯”。并鼠标左键双击“Project_05_Traffic_Lights.py”。

![图片不存在](./Python/media/666e9735d60bf0453757691c95e20fe5.png)

```
from machine import Pin
import time

led_red = Pin(0, Pin.OUT)  # 创建引脚0为红色led对象，设置引脚0为输出
led_yellow = Pin(2, Pin.OUT)  # 创建引脚2为黄色led对象，设置引脚2为输出
led_green = Pin(15, Pin.OUT) # 创建引脚15为绿色led对象，设置引脚15为输出

while True:
    led_red.value(1)  # 红色LED点亮
    time.sleep(5)   # 延时 5s
    led_red.value(0) # 红色LED熄灭
    led_yellow.value(1)
    time.sleep(0.5)
    led_yellow.value(0)
    time.sleep(0.5)
    led_yellow.value(1)
    time.sleep(0.5)
    led_yellow.value(0)
    time.sleep(0.5)
    led_yellow.value(1)
    time.sleep(0.5)
    led_yellow.value(0)
    time.sleep(0.5)
    led_green.value(1)
    time.sleep(5) 
    led_green.value(0) 
```
**5.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/8dcbf8aa22d2894969bf233829bb80f8.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：1.首先，红灯会亮5秒，然后熄灭；2.其次，黄灯会闪烁3次，然后熄灭；3.然后，绿灯会亮5秒，然后熄灭；4.继续运行上述1-3个步骤。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/9757f967a98385626d8588f64eab0c18.png)

![图片不存在](./Python/media/88468668fc5f1d198863c79778862194.png)









 
## 项目06 RGB LED

![图片不存在](./Python/media/bd43dadde69fa133646046983ca30f0f.png)

**1.项目介绍：**

RGB led由三种颜色(红、绿、蓝)组成，通过混合这三种基本颜色可以发出不同的颜色。在这个项目中，我们将向你介绍RGB LED，并向你展示如何使用ESP32控制RGB LED发出不同的颜色光。即使RGB LED是非常基本的，但这也是一个介绍自己或他人电子和编码基础的伟大方式。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/6de88c5b9c38d8ab879ae91eb51431b7.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|RGB LED*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*3|跳线若干|USB 线*1|

**3.元件知识：**

显示器大多遵循RGB颜色标准，电脑屏幕上的所有颜色都是由红、绿、蓝三种颜色以不同比例混合而成。  

![图片不存在](./Python/media/ae51546482ff149a5cd40ead3d110bc8.png)

这个RGB LED有4个引脚，每个颜色(红，绿，蓝)和一个共同的阴极。为了改变RGB led的亮度，我们可以使用ESP的PWM引脚，PWM引脚会给RGB led不同占空比的信号以获得不同的颜色。

如果我们使用3个10位PWM来控制RGBLED，理论上我们可以通过不同的组合创建2^10 ×2^10 ×2^10= 1,073,741,824(10亿)种颜色。

**4.项目接线图：**

![图片不存在](./Python/media/a89020210f9ff33ca99ddf347cc86a21.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目06 RGB LED”。并鼠标左键双击“Project_06_RGB_LED.py”。

![图片不存在](./Python/media/03361d1c4f6ee83bac60498c2f726dfa.png)

```
## 导入Pin、PWM和random库.
from machine import Pin, PWM
from random import randint
import time

## 配置GPIO15, GPIO2, GPIO0的输出方式为PWM输出，PWM频率为10000Hz.
pins = [0, 2, 15]

pwm0 = PWM(Pin(pins[0]),10000)  
pwm1 = PWM(Pin(pins[1]),10000)
pwm2 = PWM(Pin(pins[2]),10000)

##定义一个函数来设置RGBLED的颜色.
def setColor(r, g, b):
    pwm0.duty(1023-r)
    pwm1.duty(1023-g)
    pwm2.duty(1023-b)
    
try:
    while True:
        red   = randint(0, 1023) 
        green = randint(0, 1023)
        blue  = randint(0, 1023)
        setColor(red, green, blue)
        time.sleep_ms(200)
except:
    pwm0.deinit()
    pwm1.deinit()
    pwm2.deinit()
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/5639a5afa70312c8b0d170ce566d11f4.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：RGB LED开始显示随机颜色。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/6e4410e89094a9feaab5a83b37195503.png)

![图片不存在](./Python/media/b926527c01e66d984f86facdb97e10fc.png)

























## 项目07 流水灯

**1.项目介绍：**

在日常生活中，我们可以看到许多由不同颜色的led组成的广告牌。他们不断地改变灯光(像流水一样)来吸引顾客的注意。在这个项目中，我们将使用ESP32控制10个leds实现流水的效果。 

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*10|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*10|跳线若干|USB 线*1|

**3.项目接线图:**

![图片不存在](./Python/media/5a5c21da428df050a30ce9947810486a.png)

**4.项目代码：**

本项目是设计制作一个流水灯。这是这些行动：首先打开LED #1，然后关闭它。然后打开LED #2，然后关闭…并对所有10个LED重复同样的操作，直到最后一个LED关闭。这一过程反复进行，以实现流水的“运动”。

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目07 流水灯”。并鼠标左键双击“Project_07_Flowing_Water_Light.py”。

![图片不存在](./Python/media/a07f90f82ca639a214b04710cf134ee6.png)

```
from machine import Pin
import time

## 使用阵列定义10个连接点阵屏的GPIO端口，便于操作。.
pins = [22, 21, 19, 18, 17, 16, 4, 0, 2, 15]
## 使用两个for循环分别从左到右打开led，然后从右到左打开led
def showLed():
    for pin in pins:
        print(pin)
        led = Pin(pin, Pin.OUT)
        led.value(1)
        time.sleep_ms(100)
        led.value(0)
        time.sleep_ms(100)        
    for pin in reversed(pins):
        print(pin)
        led = Pin(pin, Pin.OUT)
        led.value(1)
        time.sleep_ms(100)
        led.value(0)
        time.sleep_ms(100)
          
while True:
    showLed()
```
**5.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/30367f2dff6d0e255f230a464652015c.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：10个LED将从左到右点亮，然后从右到左返回。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/63aad77861c89c8435e26ed9b59d294e.png)

![图片不存在](./Python/media/7546b1e47be75d184578949aba70ee0a.png)
























## 项目08 一位数码管

**1.项目介绍：**

七段数码管是一种显示十进制数字的电子显示设备，广泛应用于数字时钟、电子仪表、基本计算器和其他显示数字信息的电子设备。甚至我们在电影中看到的炸弹也有七段数码管。也许七段数码管看起来不够现代，但它们是更复杂的点阵显示器的替代品，在有限的光线条件下和强烈的阳光下都很容易使用。在这个项目中，我们将使用ESP32控制一位数码管显示数字。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/205aad52163781b8f1857212f1011848.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|一位数码管*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|220Ω电阻*8|跳线若干|USB 线*1|

**3.元件知识：**  

![图片不存在](./Python/media/24cd9e937ce10d6bd7bd04581d758894.png)

**一位数码管显示原理：** 数码管显示是一种半导体发光器件。它的基本单元是一个发光二极管(LED)。数码管显示根据段数可分为7段数码管和8段数码管。8段数码管比7段多一个LED单元(用于小数点显示)。七段LED显示屏的每段是一个单独的LED。根据LED单元接线方式，数码管可分为共阳极数码管和共阴极数码管。

在共阴极7段数码管中，分段LED的所有阴极(或负极)都连接在一起，你应该把共阴极连接到GND，要点亮一个分段LED，你可以将其关联的引脚设置为HIGH。

在共阳极7段数码管中，所有段的LED阳极(正极)都连接在一起，你应该把共阳极连接到+5V。要点亮一个分段LED，你可以将其关联的引脚设置为LOW。

![图片不存在](./Python/media/19ff4c77c2703c262a9cd5295724ae02.png)

数码管的每个部分由一个LED组成。所以当你使用它的时候，你也需要使用一个限流电阻。否则，LED会被烧坏。在这个实验中，我们使用了一个普通的<span style="color: rgb(255, 76, 65);">共阴极一位数码管</span>。正如我们上面提到的，你应该将公共阴极连接到GND。要点亮一个分段LED，你可以将其关联的引脚设置为HIGH。

**4.项目接线图：**

<span style="color: rgb(255, 76, 65);">注意：</span>插入面包板的七段数码管方向与接线图一致，右下角多一个点。

![图片不存在](./Python/media/b1774fdf03e96a8b6a16d03db21a93a0.png)

![图片不存在](./Python/media/da76f2ea8684ac4bb13d8b55d272977a.png)

**5.项目代码：**

数字显示分7段，小数点显示分1段。当显示某些数字时，相应的段将被点亮。例如，当显示数字1时，b和c段将被打开。

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目08 一位数码管”。并鼠标左键双击“Project_08_One_Digit_Digital_Tube.py”。

![图片不存在](./Python/media/8fa5f6f41f978b0799325594a32a499e.png)

```
from machine import Pin
import time

a = Pin(16, Pin.OUT)
b = Pin(4, Pin.OUT)
c = Pin(5, Pin.OUT)
d = Pin(18, Pin.OUT)
e = Pin(19, Pin.OUT)
f = Pin(22, Pin.OUT)
g = Pin(23, Pin.OUT)
dp = Pin(17, Pin.OUT)

pins = [Pin(id,Pin.OUT) for id in [16, 4, 5, 18, 19, 22, 23, 17]]

def show(code):
    for i in range(0, 8):
        pins[i].value(~code & 1)
        code = code >> 1

## 选择0 ~ 9之间的编码
mask_digits = [0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8,0x80, 0x90]
for code in reversed(mask_digits):
    show(code)
    time.sleep(1)
```

**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/2a0ef200ee4286ce1a1d64a2095819cf.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：一位数码管将显示从9到0的数字。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/58534a38dd6f6278a1812adccbb0a28b.png)

![图片不存在](./Python/media/06886089efa6a52fef3a5e85cd3327cc.png)

















## 项目09 四位数码管

**1.项目介绍：**

四位数码管是一种非常实用的显示器件，电子时钟的显示，球场上的记分员，公园里的人数都是需要的。由于价格低廉，使用方便，越来越多的项目将使用4位数码管。在这个项目中，我们使用ESP32控制四位数码管来显示四位数字。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/f15a0b08c0d958f5dfdfb32716191ec3.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|四位数码管*1|
|![图片不存在](./Python/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
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

![图片不存在](./Python/media/4538d30af565c84523cff49afdb3bc23.png)

4.项目接线图：

![图片不存在](./Python/media/201a07a111d6d75d084b34b1449d34d1.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目09 四位数码管”。并鼠标左键双击“Project_09_Four_Digit_Digital_Tube.py”。

![图片不存在](./Python/media/cf0f680e3e0020ef877d56ab41756c97.png)

```
from machine import Pin
import time

## TM1650定义
ADDR_DIS = 0x48  #模式命令
ADDR_KEY = 0x49  #读取键值命令

## 亮度定义
BRIGHT_DARKEST = 0
BRIGHT_TYPICAL = 2
BRIGHTEST      = 7

on  = 1
off = 0

## 数字:0~9
NUM = [0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f] 
## DIG = [0x68,0x6a,0x6c,0x6e]
DIG = [0x6e,0x6c,0x6a,0x68]
DOT = [0,0,0,0]

clkPin = 22
dioPin = 21
clk = Pin(clkPin, Pin.OUT)
dio = Pin(dioPin, Pin.OUT)

DisplayCommand = 0

def writeByte(wr_data):
    global clk,dio
    for i in range(8):
        if(wr_data & 0x80 == 0x80):
            dio.value(1)
        else:
            dio.value(0)
        clk.value(0)
        time.sleep(0.0001)
        clk.value(1)
        time.sleep(0.0001)
        clk.value(0)
        wr_data <<= 1
    return

def start():
    global clk,dio
    dio.value(1)
    clk.value(1)
    time.sleep(0.0001)
    dio.value(0)
    return
    
def ack():
    global clk,dio
    dy = 0
    clk.value(0)
    time.sleep(0.0001)
    dio = Pin(dioPin, Pin.IN)
    while(dio.value() == 1):
        time.sleep(0.0001)
        dy += 1
        if(dy>5000):
            break
    clk.value(1)
    time.sleep(0.0001)
    clk.value(0)
    dio = Pin(dioPin, Pin.OUT)
    return 
    
def stop():
    global clk,dio
    dio.value(0)
    clk.value(1)
    time.sleep(0.0001)
    dio.value(1)
    return
    
def displayBit(bit, num):
    global ADDR_DIS
    if(num > 9 and bit > 4):
        return
    start()
    writeByte(ADDR_DIS)
    ack()
    writeByte(DisplayCommand)
    ack()
    stop()
    start()
    writeByte(DIG[bit-1])
    ack()
    if(DOT[bit-1] == 1):
        writeByte(NUM[num] | 0x80)
    else:
        writeByte(NUM[num])
    ack()
    stop()
    return
    
def clearBit(bit):
    if(bit > 4):
        return
    start()
    writeByte(ADDR_DIS)
    ack()
    writeByte(DisplayCommand)
    ack()
    stop()
    start()
    writeByte(DIG[bit-1])
    ack()
    writeByte(0x00)
    ack()
    stop()
    return
    
    
def setBrightness(b = BRIGHT_TYPICAL):
    global DisplayCommand,brightness
    DisplayCommand = (DisplayCommand & 0x0f)+(b<<4)
    return

def setMode(segment = 0):
    global DisplayCommand
    DisplayCommand = (DisplayCommand & 0xf7)+(segment<<3)
    return
    
def displayOnOFF(OnOff = 1):
    global DisplayCommand
    DisplayCommand = (DisplayCommand & 0xfe)+OnOff
    return

def displayDot(bit, OnOff):
    if(bit > 4):
        return
    if(OnOff == 1): 
        DOT[bit-1] = 1;
    else:
        DOT[bit-1] = 0;
    return
        
def InitDigitalTube():
    setBrightness(2)
    setMode(0)
    displayOnOFF(1)
    for _ in range(4):
        clearBit(_)
    return

def ShowNum(num): #0~9999
    displayBit(1,num%10)
    if(num < 10):
        clearBit(2)
        clearBit(3)
        clearBit(4)
    if(num > 9 and num < 100):
        displayBit(2,num//10%10)
        clearBit(3)
        clearBit(4)
    if(num > 99 and num < 1000):
        displayBit(2,num//10%10)
        displayBit(3,num//100%10)
        clearBit(4)
    if(num > 999 and num < 10000):
        displayBit(2,num//10%10)
        displayBit(3,num//100%10)
        displayBit(4,num//1000)

InitDigitalTube()

while True:
    #displayDot(1,on)     # on or off, DigitalTube.Display(bit,number); bit=1---4  number=0---9
    for i in range(0,9999):
        ShowNum(i)
        time.sleep(0.01)
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/2d318b6418c832d4491c445eb1408a17.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：四位数码管显示数字，数字逐渐加1。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/6a0d38021fd52dabdfdec4ff1049d17c.png)

![图片不存在](./Python/media/b33276ee6fed77f623169b3ec3b9b8d0.png)























## 项目10 8×8点阵屏

**1.项目介绍：**

点阵屏是一种电子数字显示设备，可以显示机器、钟表、公共交通离场指示器和许多其他设备上的信息。在这个项目中，我们将使用ESP32控制8x8 LED点阵来显示图案。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/e308166f31da33d8f2aafe434f30765d.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|8×8点阵屏*1|
|![图片不存在](./Python/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
|4P转杜邦线公单*1|USB 线*1| |

**3.元件知识：**

**8×8点阵屏模块：** 8×8的点阵由64个LED组成，每个LED被放置在一排和一列的交叉点上。利用单片机驱动一个8×8点阵时，我们总共需要用到16个数字口，这样就极大的浪费单片机资料。为此，我们特别设计了这个模块，利用HT16K33芯片驱动1个8×8点阵，只需要利用单片机的I2C通信端口控制点阵，大大的节约了单片机资源。


**8×8点阵屏模块规格参数：**

工作电压：DC 5V

工作电流：≤200MA

最大功率：1W

**8×8点阵屏模块原理：**

如原理图所示，如果想要点亮第一行第一列的LED灯，只需要把C1置高电平，R1置低电平，它就亮了。如果我们想让第一行led全部点亮，那么我们让R1为低电平，C1~C8全部为高电平就可以了，原理非常简单。但是这样的话我们总共需要用到16个IO口，这样就极大的浪费单片机资源。为此，我们特别设计了这个模块，利用HT16K33芯片驱动1个8*8点阵，只需要利用单片机的I2C通信端口控制点阵，大大的节约了单片机资源。

![图片不存在](./Python/media/c801e1d07c28d035c58dbc28a60a60f0.png)

有些模块上自带3个拨码开关，可以让你随意拨动开关，这是用来设置I2C通信地址的，设置方法如下表格。我们的这个模块中，模块已经固定了通信地址，A0，A1，A2全部接地，即地址为0x70。

![图片不存在](./Python/media/f47e72b3793ada8b06806c7d8f88d3fe.png)

**4.项目接线图：**

![图片不存在](./Python/media/1d56829e3b1fa8bbf9a9a18091561ace.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目10 8×8点阵屏”。分别选择“ht16k33matrix\.py”和“ht16k33\.py”，右击鼠标选择“上传到/”，等待“ht16k33matrix\.py”和“ht16k33\.py”被上传到ESP32，然后鼠标左键双击“Project_10_8×8_Dot_Matrix_Display.py”。

![图片不存在](./Python/media/2bb22a14dd71fc04d45b15ca540b742c.png)

![图片不存在](./Python/media/d5ce182bf877c921e67e6056bf6bd03f.png)

![图片不存在](./Python/media/bc649f27022478e1c9deb4e4a2062a44.png)

```
## 导入库
import utime as time
from machine import I2C, Pin, RTC
from ht16k33matrix import HT16K33Matrix

## 常量
DELAY = 0.01
PAUSE = 3

## 启动
if __name__ == '__main__':
    i2c = I2C(scl=Pin(22), sda=Pin(21))
    display = HT16K33Matrix(i2c)
    display.set_brightness(2)

    # 在点阵屏上绘制一个自定义图标
    icon = b"\x00\x66\x00\x00\x18\x42\x3c\x00"
    display.set_icon(icon).draw()
    # 旋转图标
    display.set_angle(0).draw()
    time.sleep(PAUSE)
```

**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/cf7ec75b2d329f468232e0bcb779619f.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：8*8点阵屏显示“笑脸”图案。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/c83d1e9c77a6d6a8e5c403af72092833.png)

![图片不存在](./Python/media/dd4c7550a19eeb300c3f77107bcdda75.png)





















## 项目11 74HC595N控制8个LED

**1.项目介绍：**

在之前的项目中，我们已经学过了怎样点亮一个LED。

ESP32上只有32个IO端口，我们如何点亮大量的led呢? 有时可能会耗尽ESP32上的所有引脚，这时候就需要用移位寄存器扩展它。你可以使用74HC595N芯片一次控制8个输出，而只占用你的微控制器上的几个引脚。你还可以将多个寄存器连接在一起，以进一步扩展输出，在这个项目中，我们将使用ESP32，74HC595芯片和LED制作一个流水灯来了解74HC595芯片的功能。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/44e4bc7bbc88eafd59a57fc4876f6725.png)|![图片不存在](./Python/media/0bec60f258b235ba8a8a332fd1b6e5fe.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|74HC595N芯片*1|红色LED*8|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
|220Ω电阻*8|跳线若干|USB 线*1| |

**3.元件知识：**

![图片不存在](./Python/media/46bf6b6fb5968bea5b7fd226a6f95567.png)

**74HC595N芯片：** 简单来说就是具有8 位移位寄存器和一个存储器，以及三态输出功能。移位寄存器和存储器同步于不同的时钟，数据在移位寄存器时钟SCK的上升沿输入，在存储寄存器时钟RCK的上升沿进入的存储寄存器中去。如果两个时钟连在一起，则移位寄存器总是比存储寄存器早一个脉冲。移位寄存器有一个串行移位输入端（SI）和一个用于级联的串行输出端（SQH）,8位移位寄存器可以异步复位（低电平复位），存储寄存器有一个8位三态并行的总线输出，当输出使能（OE）被使能（低电平有效）将存储寄存器中输出至74HC595N的引脚（总线）。

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

![图片不存在](./Python/media/9b0649bf40ed46557baabcf617c69804.png)

![图片不存在](./Python/media/cc4e68fb791ca0f40d0e6554d43b1ab2.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目11 74HC595N控制8个LED”。选择“my74HC595\.py”，鼠标右键单击选择 “上传到/”，等待“my74HC595\.py”被上传到ESP32，然后鼠标左键双击“Project_11_74HC595N_Controls_8_LEDs.py”。

![图片不存在](./Python/media/482d18bfbe6bf6d2e0ef21d54c0f4ebc.png)

![图片不存在](./Python/media/7910b3fa47e7049819f9b282129a1ebc.png)

```
## 导入time和my74HC595库.
from my74HC595 import Chip74HC595
import time

## 创建Chip74HC595对象并配置引脚
chip = Chip74HC595(14, 12, 13)
## ESP32-14: 74HC595-DS(14)
## ESP32-12: 74HC595-STCP(12)
## ESP32-13: 74HC595-SHCP(11)

##第一个for循环使LED从左到右分别点亮
##而第二个for循环使它从右向左分别点亮.
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
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/4c8f401dc6b1d34a774a4d2dfc226bea.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：8个LED开始以流水模式闪烁。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/ddbf101a5e86e907a994b246b5b5f2ab.png)

![图片不存在](./Python/media/de7ef1d58423282ec05b12fdc0af0292.png)



















## 项目12 有源蜂鸣器

**1.项目介绍：**

有源蜂鸣器是一个发声组件。它被广泛用作电脑、打印机、报警器、电子玩具、电话、计时器等的发声元件。它有一个内在的振动源，只需连接5V电源，即可持续发出嗡嗡声。在这个项目中，我们将使用ESP32控制有源蜂鸣器发出“滴滴”声。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/a802ce7dc086858873e587c19b45578d.png)|![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|有源蜂鸣器*1|NPN型晶体管(S8050)*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
|1KΩ电阻*1|跳线若干|USB线*1| |

**3.元件知识：**

![图片不存在](./Python/media/7ac473b007da81c891ca12b4c82fac4a.png)

**有源蜂鸣器：** 它内部有一个简单的振荡器电路，可以将恒定的直流电转换成特定频率的脉冲信号。一旦有源蜂鸣器收到一个高电平，它将产生声音。而无源蜂鸣器是一种内部没有振动源的集成电子蜂鸣器，它必须由2K-5K方波驱动，而不是直流信号。这两个蜂鸣器的外观非常相似，但是一个带有绿色电路板的蜂鸣器是无源蜂鸣器，而另一个带有黑色胶带的是有源蜂鸣器。无源蜂鸣器不能区分正极性而有源蜂鸣器是可以。如下所示：

![图片不存在](./Python/media/a33496a4d5eb90ea4d980459d7654b0f.png)

![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)

**晶体管:** 由于蜂鸣器需要很大的电流，ESP32输出能力的GPIO不能满足要求，这里需要一个NPN型晶体管来放大电流。晶体管，全称:半导体晶体管，是一种控制电流的半导体器件。晶体管可以用来放大微弱信号，也可以用作开关。它有三个电极(pin)：基极(b)，集电极(c)和发射极(e)。当电流通过“be”之间时，“ce”将允许几倍的电流通过(晶体管放大)，此时，晶体管在放大区工作。当“be”之间的电流超过某个值时，“ce”将不再允许电流增加，此时晶体管工作在饱和区。晶体管有两种类型如下所示：PNP和NPN

![图片不存在](./Python/media/96deb6c440780b1bc8acde29ef214727.png)

<span style="color: rgb(255, 76, 65);">在我们的套件中，PNP晶体管标记为8550,NPN晶体管标记为8050。</span>

基于晶体管的特性，它常被用作数字电路中的开关。由于单片机输出电流的能力很弱，我们将使用晶体管来放大电流和驱动大电流的元件。在使用NPN晶体管驱动蜂鸣器时，通常采用以下方法：如果GPIO输出高电平，电流将流过R1，晶体管将传导，蜂鸣器将发出声音。如果GPIO输出低电平，没有电流流过R1，晶体管就不会传导，蜂鸣器也不会响。在使用PNP晶体管驱动蜂鸣器时，通常采用以下方法：如果GPIO输出低电平，电流将流过R1，晶体管将传导，蜂鸣器将发出声音。如果GPIO输出高电平，没有电流流过R1，晶体管就不会传导，蜂鸣器也不会响。

![图片不存在](./Python/media/05d42ad7919cc237e007cd2457aacd7c.png)

**4.项目接线图：**

![图片不存在](./Python/media/45b50e33587ccd6c5c2b5af7c7ba7658.png)

<span style="color: rgb(255, 76, 65);">注意：该电路中蜂鸣器的电源为5V。在3.3V的电源下，蜂鸣器可以工作，但会降低响度。</span>

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目12 有源蜂鸣器”。并鼠标左键双击“Project_12_Active_Buzzer.py”。

![图片不存在](./Python/media/4247d76bfa04ddb52dabe47c52915343.png)

```
from machine import Pin
import time

buzzer = Pin(15, Pin.OUT)   # 创建引脚15为蜂鸣器对象，设置引脚15为输出

try:
    while True:
        buzzer.value(1)    # 蜂鸣器鸣叫
        time.sleep(0.5) # 延时 0.5s
        buzzer.value(0)    # 蜂鸣器关闭
        time.sleep(0.5) # 延时 0.5s
except:
    pass

```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/6b3c5932bef7837f22d518c711ae0cc9.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：有源蜂鸣器发出“滴滴”声。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/00c01c9e54b7d080ab4d792a5a788c41.png)

![图片不存在](./Python/media/4d1cee558b3cb395234d05214995c631.png)
















## 项目13 无源蜂鸣器

**1.项目介绍:** 

在之前的项目中，我们研究了有源蜂鸣器，它只能发出一种声音，可能会让你觉得很单调。这个项目将学习另一种蜂鸣器，无源蜂鸣器。与有源蜂鸣器不同，无源蜂鸣器可以发出不同频率的声音。在这个项目中，你将使用ESP32控制无源蜂鸣器工作。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/8b2bc33166824a904168c38b960fe574.png)|![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|无源蜂鸣器*1|NPN型晶体管(S8050)*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
|1KΩ电阻*1|跳线若干|USB线*1| |

**3.元件知识：**

![图片不存在](./Python/media/352568cc59e03453c9433f866631bf50.png)   

**无源蜂鸣器：** 它是一种内部没有振动源的集成电子蜂鸣器。它必须由2K-5K方波驱动，而不是直流信号。与有源蜂鸣器的外观非常相似，但是一个带有绿色电路板的蜂鸣器是无源蜂鸣器，而另一个带有黑色胶带的是有源蜂鸣器。无源蜂鸣器不能区分正极性而有源蜂鸣器是可以。

![图片不存在](./Python/media/9e2535b132d6c88b45b2b8dfdf6dbda4.png)

**晶体管:** 请参考**项目12** 。

**4.项目接线图:**

![图片不存在](./Python/media/9116a43de7b0f2dc1cdb0496468706f3.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。
![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)
你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目13 无源蜂鸣器”。并鼠标左键双击“Project_13_Passive_Buzzer.py”。

![图片不存在](./Python/media/632851087ab9639a41b47aaa07d1a1ef.png)

```
from machine import Pin
import time

## 初始化无源蜂鸣器
buzzer = Pin(15,Pin.OUT)

##模拟两种不同的频率
while True:
    #输出500HZ频率声音
    for i in range(80):
        buzzer.value(1)
        time.sleep(0.001)
        buzzer.value(0)
        time.sleep(0.001)
    #输出250HZ频率声音
    for i in range(100):
        buzzer.value(1)
        time.sleep(0.002)
        buzzer.value(0)
        time.sleep(0.002)
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/dd5a75569c97a5dca1beed48e384351e.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：无源蜂鸣器发出警报声。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/850e5aef460519ca88fa505e4fafaa74.png)

![图片不存在](./Python/media/d949fe608e1e996cb1d2b525183dbf18.png)






















## 项目14 小台灯

**1.项目介绍：**

你知道ESP32可以在你按下外接按键的时候点亮LED吗? 在这个项目中，我们将使用ESP32，一个按键开关和一个LED来制作一个迷你台灯。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/4c27c3e6c2224e12fd1bd298669f700c.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|按键*1|
|![图片不存在](./Python/media/b3484a63586f907a33f23fa001c874ee.png)|![图片不存在](./Python/media/e8726e55ebfb8e7520e615575ce89204.png)|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)|
|10KΩ电阻*1|红色 LED*1|220Ω电阻*1|
|![图片不存在](./Python/media/4214d58466508ada517d241d46485b7b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|按键帽*1|跳线若干|USB 线*1|

**3.元件知识：**

![图片不存在](./Python/media/50b8a411811e86cb4204a2e0377282f4.png)

**按键：** 按键可以控制电路的通断，把按键接入电路中，不按下按键的时候电路是断开的，一按下按键电路就通啦，但是松开之后就又断了。可是为什么按下才通电呢？这得从按键的内部构造说起。没按下之前，电流从按键的一端过不去另一端；按下的时候，按键内部的金属片把两边连接起来让电流通过。

按键内部结构如图：![图片不存在](./Python/media/013b1897a0308c71d7e5ed0eaf64198d.png)，未按下按键之前，1、2就是导通的，3、4也是导通的，但是1、3或1、4或2、3或2、4是断开（不通）的；只有按下按键时，1、3或1、4或2、3或2、4才是导通的。

在设计电路时，按键开关是最常用的一种元件。

**按键的原理图:**

![图片不存在](./Python/media/00096ba2b3cb95b8d02e075261acb181.png)
  
**什么是按键抖动？**

我们想象的开关电路是“按下按键-立刻导通”“再次按下-立刻断开”，而实际上并非如此。

按键通常采用机械弹性开关，而机械弹性开关在机械触点断开闭合的瞬间（通常 10ms左右），会由于弹性作用产生一系列的抖动，造成按键开关在闭合时不会立刻稳定的接通电路，在断开时也不会瞬时彻底断开。

![图片不存在](./Python/media/c4d829daa9d08e80d4538b901c700b8c.png)

**那又如何消除按键抖动呢？**

常用除抖动方法有两种：软件方法和硬件方法。这里重点讲讲方便简单的软件方法。
我们已经知道弹性惯性产生的抖动时间为10ms 左右，用延时命令推迟命令执行的时间就可以达到除抖动的效果。

所以我们在代码中加入了0.02秒的延时以实现按键防抖的功能。

![图片不存在](./Python/media/3591ca9171277a78bf782c32525e1812.png)

**4.项目接线图：**

![图片不存在](./Python/media/79c310407b3091e58739fda1c916f412.png)

<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Python/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻和五色环10KΩ电阻

![图片不存在](./Python/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

![图片不存在](./Python/media/2d3f0996515352c92c07d17e074e7308.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目14 小台灯”。并鼠标左键双击“Project_14_Mini_Table_Lamp.py”。

![图片不存在](./Python/media/92a5036e01d87bdabbbfc764d638c40d.png)

```
from machine import Pin
import time

led = Pin(4, Pin.OUT) # 创建引脚4为LED对象，设置引脚4为输出                  
button = Pin(15, Pin.IN, Pin.PULL_UP) #Pin15创建引脚15按钮对象，设置GP15为输入

##定义一个函数并将其命名为reverseGPIO()，用于反转LED的输出电平
def reverseGPIO():
    if led.value():
        led.value(0)     #LED熄灭
    else:
        led.value(1)     #LED点亮

try:
    while True:
        if not button.value():
            time.sleep_ms(20)
            if not button.value():
                reverseGPIO()
                while not button.value():
                    time.sleep_ms(20)
except:
    pass

```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/5b9d4cff53387c4a0603c7f54f9e0c94.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：按下按钮，LED亮起；当按钮松开时，LED仍亮着。再次按下按钮，LED熄灭；当按钮释放时，LED保持关闭。是不是很像个小台灯？按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/b9a1c32997518a59a0e87b72096202b1.png)

![图片不存在](./Python/media/cba65f3e78fc23732983efae1f0441e4.png)



















## 项目15 模拟沙漏

**1.项目介绍：**

古代人没有电子时钟，就发明了沙漏来测时间，沙漏两边的容量比较大，在一边装了细沙，中间有个很小的通道，将沙漏直立，有细沙的一边在上方，由于重力的作用，细沙就会往下流通过通道到沙漏的另一边，当细沙都流到下边了，就倒过来，把一天反复的次数记录下来，第二天就可以通过沙漏反复流动的次数而知道这一天大概的时间了。这一课我们将利用ESP32控制倾斜开关和LED灯来模拟沙漏，制作一个电子沙漏。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/01c1502f7cc76c09d4d77410dcdd31a6.png)|![图片不存在](./Python/media/b3484a63586f907a33f23fa001c874ee.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|倾斜开关*1|10KΩ电阻*1|
|![图片不存在](./Python/media/e8726e55ebfb8e7520e615575ce89204.png)|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|红色 LED*4|220Ω电阻*1|跳线若干|USB 线*1|

**3.元件知识：**

![图片不存在](./Python/media/966683cc81a185103df1862a16d7a844.png)

倾斜开关也叫数字开关。里面有一个可以滚动的金属球。采用金属球滚动与底部导电板接触的原理来控制电路的通断。倾斜开关是滚珠型倾斜感应单方向性触发开关，当倾斜传感器向触发端（两根金属脚端）倾斜时，倾斜开关处于闭路状态，模拟端口的电压约为5V(二进制数为1023)。这样，LED会亮起。当倾斜开关在水平位置或向另一端倾斜时，倾斜开关处于开路状态，模拟端口的电压约为0V(0二进制)，LED将会关闭。在程序中，我们根据模拟端口的电压值，是否大于2.5V(512二进制)来判断开关是开还是关。

这里用倾斜开关的内部结构来说明它是如何工作的，显示如下图：

![图片不存在](./Python/media/ed8fb48d5fbce7033fad9ffa5de67808.png)


**4.项目接线图：**

![图片不存在](./Python/media/02d5f7df75aa8062f7b9399a47ae4285.png)

<span style="color: rgb(255, 76, 65);">注意: </span>

怎样连接LED 

![图片不存在](./Python/media/cbb16ef4d8cb62a4001d1a05ae3ac615.png)

怎样识别五色环220Ω电阻和五色环10KΩ电阻

![图片不存在](./Python/media/951ce7d7778b34bf8fbdb3de1b8c3116.png)

![图片不存在](./Python/media/2d3f0996515352c92c07d17e074e7308.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目15 模拟沙漏”。并鼠标左键双击“Project_15_Tilt_And_LED.py”。

![图片不存在](./Python/media/e9ac908c61f3da58cf8ccfa138dd1161.png)

```
from machine import Pin
import time

led1 = Pin(16, Pin.OUT) # 创建引脚2为LED对象，设置引脚2为输出
led2 = Pin(17, Pin.OUT) # 创建引脚17为LED对象，设置引脚17为输出
led3 = Pin(18, Pin.OUT) # 创建引脚18为LED对象，设置引脚18为输出
led4 = Pin(19, Pin.OUT) # 创建引脚19为LED对象，设置引脚19为输出
Tilt_Sensor = Pin(15,Pin.IN) #创建引脚15倾斜传感器对象，设置GP15为输入

while True:
    if(Tilt_Sensor.value() == 0) : #如果倾斜传感器的值为0时
        led1.value(1) # led1 点亮
        time.sleep_ms(200)#延时
        led2.value(1) # led2 点亮
        time.sleep_ms(200)#延时
        led3.value(1) # led3 点亮
        time.sleep_ms(200)#延时
        led4.value(1) # led4 点亮
        time.sleep_ms(200)#延时
    else :           #如果倾斜传感器的值为1时
        led4.value(0) # led4 熄灭
        time.sleep_ms(200)#延时
        led3.value(0) # led3 熄灭
        time.sleep_ms(200)#延时
        led2.value(0) # led2 熄灭
        time.sleep_ms(200)#延时
        led1.value(0) # led1 熄灭
        time.sleep_ms(200)#延时
```

**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/de1becc5e88ffc4c123d8c04868903b8.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：将面包板倾斜到一定角度，led就会一个一个地亮起来。当回到上一个角度时，led会一个一个关闭。就像沙漏一样，随着时间的推移，沙子漏了出来。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/b5eedb1fdfaa4b7aa799f0196611a33b.png)

![图片不存在](./Python/media/2db9ee9bf59debc53c46aa954da31d47.png)


































## 项目16 防窃警报器

**1.项目介绍：**

人体红外传感器测量运动物体发出的热的红外(IR)线。该传感器可以检测人、动物和汽车的运动，从而触发安全警报和照明。它们被用来检测移动，是安全的理想选择，如防盗警报和安全照明系统。在这个项目中，我们将使用ESP32控制人体红外传感器、蜂鸣器和LED来模拟防盗报警器。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/6f0780e5e12a2154c17a6310c13055a8.png)|![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|人体红外传感器*1|NPN型晶体管(S8050)*1|
|![图片不存在](./Python/media/b05ac5e1de5da301b3dc8ef880d51de2.png)|![图片不存在](./Python/media/e8726e55ebfb8e7520e615575ce89204.png)|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)|
|有源蜂鸣器*1|红色 LED*1|220Ω电阻*1|1KΩ电阻*1|
| ![图片不存在](./Python/media/1a190cfbfe81a1524e1d1ef681688a64.png) | ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
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

![图片不存在](./Python/media/fb17fc7fc7bf46cd3b205a8fb3269dbf.png)

**4.项目接线图：**

![图片不存在](./Python/media/d9ebd36e3b6aae498872f2c6f6a3ee14.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)
你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目16 防窃警报器”。并鼠标左键双击“Project_16_Burglar_Alarm.py”。

![图片不存在](./Python/media/da219da76424137262bc5825a78d3d3c.png)

```
## 导入 Pin and time 库.
from machine import Pin
import time

## 定义人体红外传感器，led和有源蜂鸣器的引脚. 
sensor_pir = Pin(15, Pin.IN)
led = Pin(0, Pin.OUT)
buzzer = Pin(2, Pin.OUT)

while True: 
      if sensor_pir.value():
          buzzer.value(1)
          led.value(1)
          time.sleep(0.2)
          buzzer.value(0)
          led.value(0)
          time.sleep(0.2)         
      else:
          buzzer.value(0)
          led.value(0)
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/c81a6a6a7e1c4a83e0b0e1d41d0d265a.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：如果人体红外传感器检测到附近有人移动时，蜂鸣器就会不断地发出警报，且LED不断地闪烁。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/c600e2028b19a3f427289a63a42eaf81.png)

![图片不存在](./Python/media/378ef3b0e69b0f36d719eff7f07922d4.png)




























## 项目17 I2C 128×32 LCD

**1.项目介绍：**

在生活中，我们可以利用显示器等模块来做各种实验。你也可以DIY各种各样的小物件。例如，用一个温度传感器和显示器做一个温度测试仪，或者用一个超声波模块和显示器做一个距离测试仪。下面，我们将使用LCD_128X32_DOT模块作为显示器，将其连接到ESP32控制板上。将使用ESP32主板控制LCD_128X32_DOT显示屏显示各种英文文字、常用符号和数字。


**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/c4b08ad87310ea27bc06383257cc7f8f.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|LCD_128X32_DOT*1|
|![图片不存在](./Python/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
|4P转杜邦线公单*1|USB 线*1| |

**3.元件知识：**

![图片不存在](./Python/media/c4b08ad87310ea27bc06383257cc7f8f.png)

**LCD_128X32_DOT：** 一个像素为128*32的液晶屏模块，它的驱动芯片为ST7567A。模块使用IIC通信方式，它不仅可以显示英文字母、符号，还可以显示中文文字和图案。使用时，还可以在代码中设置，让英文字母和符号等显示不同大小。

**LCD_128X32_DOT原理图：**

![图片不存在](./Python/media/a6f56f3c6481d37dc0dcf9cf74587781.png)

**LCD_128X32_DOT技术参数：**

显示像素：128*32 字符

工作电压：DC 5V

工作电流：100mA (5V)

模块最佳工作电压：5V

亮度、对比度可通过程序指令控制

**4.项目接线图：**

![图片不存在](./Python/media/229ce4e1ad8b01c71577d8f777e8195b.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目17 I2C 128×32 LCD”。分别选择“lcd128_32\.py”和 “lcd128_32_fonts\.py”，右键单击鼠标选择 “上传到/”，等待“lcd128_32\.py”和 “lcd128_32_fonts\.py”被上传到ESP32，并鼠标鼠标左键双击“Project_17_I2C_128_32_LCD.py”。

![图片不存在](./Python/media/0657f246c289aed51e95310e74b8dc53.png)

![图片不存在](./Python/media/f95272fecc26fff7fda9a65072c507d7.png)

![图片不存在](./Python/media/cc212bee8bb6fc349ab29d7eafa0df0d.png)

```
import machine
import time
import lcd128_32_fonts
from lcd128_32 import lcd128_32

##i2c配置
clock_pin = 22
data_pin = 21
bus = 0
i2c_addr = 0x3f
use_i2c = True

def scan_for_devices():
    i2c = machine.I2C(bus,sda=machine.Pin(data_pin),scl=machine.Pin(clock_pin))
    devices = i2c.scan()
    if devices:
        for d in devices:
            print(hex(d))
    else:
        print('no i2c devices')


if use_i2c:
    scan_for_devices()
    lcd = lcd128_32(data_pin, clock_pin, bus, i2c_addr)


lcd.Clear()

lcd.Cursor(0, 4)
lcd.Display("KEYESTUDIO")
lcd.Cursor(1, 0)
lcd.Display("ABCDEFGHIJKLMNOPQR")
lcd.Cursor(2, 0)
lcd.Display("123456789+-*/<>=$@")
lcd.Cursor(3, 0)
lcd.Display("%^&(){}:;'|?,.~\\[]")
"""
while True:
    scan_for_devices()
    time.sleep(0.5)
"""
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/c6205666c5db9d525f4cda9a2c2a37e4.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：128X32LCD模块显示屏第一行显示“KEYESTUDIO”、第二行显示“ABCDEFGHIJKLMNOPQR”、第三行显示“123456789+-*/<>=$@”、第四行显示“%^&(){}:;'|?,.~\\[]”。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/51af5dee59f29259ad1167c2f2232f20.png)

![图片不存在](./Python/media/eeada568b7ef98fefa27e9f22435befd.png)


























## 项目18 小风扇

**1.项目介绍：**

在炎热的夏季，需要电扇来给我们降温，那么在这个项目中，我们将使用ESP32控制130电机模块和小扇叶来制作一个小电扇。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/2d879e56de94fbb14399ec17c0b10861.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|130电机模块*1|
|![图片不存在](./Python/media/c562656c96657983e724daed7c8d6202.png)|![图片不存在](./Python/media/3cc5c242c0f357b3dc496037a7d8bae8.png)|![图片不存在](./Python/media/ed228ff5627e0c8cc0c79fa04f1d4d16.png)|
|面包板专用电源模块*1|6节5号电池盒*1|风扇叶*1|
|  ![图片不存在](./Python/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Python/media/4c49cdffc9e5e6f1aad838120d35897a.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|4P转杜邦线公单*1|5号电池(<span style="color: rgb(255, 76, 65);">自备</span>)*6|USB 线*1|

**3.元件知识:**

![图片不存在](./Python/media/2d879e56de94fbb14399ec17c0b10861.png)

**130电机模块：** 该电机控制模块采用HR1124S电机控制芯片，HR1124S是应用于直流电机方案的单通道H桥驱动器芯片。HR1124S的H桥驱动部分采用低导通电阻的PMOS和NMOS功率管，低导通电阻保证芯片低的功率损耗，使得芯片安全工作更长时间。此外HR1124S拥有低待机电流，低静态工作电流，这些性能使130电机模块易用于玩具方案。

**130电机模块参数：**

工作电压：5V

工作电流：≤200MA

工作功率：2W

工作温度：-10℃~+50℃

**130电机模块原理：**

HR1124S芯片的作用是助于驱动电机，而电机所需电流较大，无法用三极管驱动更无法直接用IO口驱动。让电机转动起来的方法很简单，给电机两端添加电压即可。不同电压方向电机转向也不相同，在额度电压内，电压越大，电机转动得越快；反之电压越低，电机转动得越慢，甚至无法转动。控制方式有两种：一种是高低电平控制（控制转动和停止），一种是PWM控制（控制转速）。

![图片不存在](./Python/media/a2b424e6521208e49ab4140ffdeb00be.png)

**面包板专用电源模块：**

![图片不存在](./Python/media/c562656c96657983e724daed7c8d6202.png)

**说明：**

此模块，能方便的给面包板提供3.3V和5V的电源，具有DC2.1输入（DC7－12V），另外，具备USB Type C接口的电源输入。

**规格：** 

 输入电压：DC座：7-12V；  Type C USB：5V 

 电流：3.3V：最大500mA；        5V：最大500mA；

 最大功率: 2.5W

 尺寸: 53mmx26.3mm

 环保属性: ROHS

**接口说明：**

![图片不存在](./Python/media/9ab1fa7ff5eccecdc0fe6218fad6df79.png)

**原理图：**

![图片不存在](./Python/media/5139ee652d196f215b53c35d8ab24166.png)

**4.项目接线图：**

![图片不存在](./Python/media/cfe5281646edc0503c62ba8b79b16c6b.png)

(<span style="color: rgb(255, 76, 65);">注: 先接好线，然后在直流电机上安装一个小风扇叶片。</span>)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目18 小风扇”。并鼠标左键双击“Project_18_ Small_Fan.py”。

![图片不存在](./Python/media/4ee3fa069bbc15ed88550628d6ca189f.png)

```
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
```

**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/80aa61e7cb37d821421139f2c9d90036.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：小风扇先逆时针转5秒，停止2秒，再顺时针转5秒，停止2秒，以此规律重复执行5次后小风扇停止转动。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/8a1e97004b2e8e5a863f6d623588d278.png)

![图片不存在](./Python/media/6f829143f64bdf4a41f1e087e6ef456e.png)


## 项目19 舵机

**1.项目介绍：**

舵机是一种可以非常精确地旋转的电机。目前已广泛应用于玩具车、遥控直升机、飞机、机器人等领域。在这个项目中，我们将使用ESP32控制舵机转动。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/bf6d1660c4a52edca11f5a7763edfc19.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|舵机*1|
|![图片不存在](./Python/media/e989c0ba5c3c1ea8c5fc08d02344da37.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
|跳线若干|USB 线*1| |

**3.元件知识：**

![图片不存在](./Python/media/bf6d1660c4a52edca11f5a7763edfc19.png)

**舵机：** 舵机是一种位置伺服的驱动器，主要是由外壳、电路板、无核心马达、齿轮与位置检测器所构成。其工作原理是由接收机或者单片机发出信号给舵机，其内部有一个基准电路，产生周期为20ms，宽度为1.5ms 的基准信号，将获得的直流偏置电压与电位器的电压比较，获得电压差输出。经由电路板上的IC 判断转动方向，再驱动无核心马达开始转动，透过减速齿轮将动力传至摆臂，同时由位置检测器送回信号，判断是否已经到达定位。适用于那些需要角度不断变化并可以保持的控制系统。当电机转速一定时，通过级联减速齿轮带动电位器旋转，使得电压差为0，电机停止转动。一般舵机旋转的角度范围是0度到180 度。

控制舵机的脉冲周期为20ms，脉冲宽度为0.5ms ~ 2.5ms，对应位置为-90°~ +90°。下面是以一个180°角的舵机为例：

![图片不存在](./Python/media/071ba0096e7cd92a87f61ee70523cd44.png)

舵机有多种规格，但它们都有三根连接线，分别是棕色、红色、橙色(不同品牌可能有不同的颜色)。棕色为GND，红色为电源正极，橙色为信号线。

![图片不存在](./Python/media/251008f9edd3fdcbf09f12deff53dd65.png)

**4.项目接线图：**

舵机供电时请注意，电源电压应为3.3V-5V。请确保在将舵机连接到电源时不会出现任何错误。

![图片不存在](./Python/media/14564e5e2e5255d49b96437753c0a402.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目19 舵机”。并鼠标左键双击“Project_19_Servo_Sweep.py”。

![图片不存在](./Python/media/7e07bcf71614a0f095024e7c09989ec1.png)

```
from machine import Pin, PWM
import time
 
 
p2 = PWM(Pin(15))  # 从引脚15创建PWM对象
p2.freq(50)  # 设置PWM频率从1Hz到40MHz
p2.duty(256)  # 将占空比从0到1023设置为占空比/1023，(现在是25%)
 
## 0度   P2.duty_u16(1638) #设置占空比从0到65535作为duty_u16/65535的比值
## 90度  p2.duty_u16(4915)
## 180度 p2.duty_u16(8192)
 
p2.duty_u16(1638)  # 0度
time.sleep(1)
p2.duty_u16(4915)  # 90度
time.sleep(1)
p2.duty_u16(8100)  # 180度  # 真实舵机MG90S可以设为8192
time.sleep(1)
 
for i in range(1638, 8100, 10):
    p2.duty_u16(i)
    time.sleep_ms(10)
    
 
p2.duty_u16(1638)
time.sleep(1)
 
p2.deinit()              # 在引脚上关闭PWM
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/f2e6ff8d189ce053b84688a5e20e386d.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：舵机将转动。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/e0e6f17763bd892c04a819d5ec931d91.png)

![图片不存在](./Python/media/af31b301debd1476dc2720b9cf807720.png)








## 项目20 步进电机

**1.项目介绍：**

步进电机定位准确，是工业机器人、3D打印机、大型车床等机械设备中最重要的部件。在这个项目中，我们将使用ESP32控制ULN2003步进电机驱动板来驱动步进电机转动。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/dcb3c510e9b72a18f95a6f3480372d57.png)|
| :--: | :--: | :--: |
|ESP32*1|面包板*1|ULN2003步进电机驱动板*1|
|![图片不存在](./Python/media/c562656c96657983e724daed7c8d6202.png)|![图片不存在](./Python/media/3cc5c242c0f357b3dc496037a7d8bae8.png)|![图片不存在](./Python/media/40f12855a27fa322036dece349b905c1.png)|
|面包板专用电源模块*1|6节5号电池盒*1|步进电机*1|
|![图片不存在](./Python/media/25a2a8622647c1f1b576468786b0a762.png)|![图片不存在](./Python/media/4c49cdffc9e5e6f1aad838120d35897a.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|公对母杜邦线若干|5号电池(<span style="color: rgb(255, 76, 65);">自备</span>)*6|USB 线*1|

**3.项目知识：**

![图片不存在](./Python/media/40f12855a27fa322036dece349b905c1.png)

**步进电机：** 是由一系列电磁线圈控制的电机。它可以根据需要旋转精确的度数(或步数)，允许你将它移动到一个精确的位置并保持该位置。它是通过在很短的时间内为电机内部的线圈供电来做到这一点的，但你必须一直为电机供电，以保持它在你想要的位置。有两种基本类型的步进电机，单极步进和双极步进。在本项目中，我们使用的是单极步进电机28-BYJ48。

 ![图片不存在](./Python/media/64e3feb3dd1b8002ab91cbc782d25580.png)
      
**28BYJ-48步进电机工作原理：**

步进电机主要由定子和转子组成，定子是固定不动的，如下图绕着A、B、C、D线圈组的部分，线圈组导通电就会产生磁场；转子就是转动的部分，如下图定子中间的部分，两极是永磁铁。
                         
单步4节拍的转动原理：开始A组线圈导通，转子两极正对着A组线圈；接着A组线圈断开，B组线圈导通，转子就会顺时针转到B组线圈，转子转了一步；B断开，C导通，转子转到C组；C断开，D导通，转子转到D组；D组断开，A组导通，转子转到A组线圈。这样转子就转了半圈180度，接着再重复一次，B-C-D-A，转子转回到A组线圈，这样转子就转了一圈，总共转动了8步。如下图所示，这就是步进电机单节拍转动的原理A - B - C - D - A ....。

 如果想让步进电机逆时针转动，那只要把节拍顺序反过来就行，D - C - B - A - D .....。

![图片不存在](./Python/media/ea05ab05a51c611cd9505b95d93e14a7.png)

半步8节拍转动原理：8节拍，采用的是单双拍的形式，A - AB - B - BC - C - CD - D - DA - A ...... ，这样运转一拍，转子只会转动半步，例如，A组线圈导通，转子转到正对着A组线圈；接着A和B组一起导通，这样产生的磁场最强的地方在AB组线圈中间，转子两极就会转到AB组线圈中间，也就是顺时针转了半步。

**步进电机参数：**

我们所提供的步进电机需要转动32步，转子才能转一圈，还经过了1:64的减速齿轮组带动输出轴，这样输出轴转动一圈需要：32 * 64 = 2048 步。

电压5V，4相步进电机 ，4节拍模式的步进角为11.25， 8节拍模式步进角为5.625， 减速比为1:64。

**ULN2003步进电机驱动板：** ULN2003型步进电机驱动器，将微弱信号转换为更强的控制信号，从而驱动步进电机。

下面的原理图显示了如何使用ULN2003步进电机驱动板接口将一个单极步进电机接到ESP32的引脚上，并显示了如何使用四个TIP120的接口。

![图片不存在](./Python/media/d3daf4898dc3180bcdd66597ba6a33a0.png)

**4.项目接线图：**

![图片不存在](./Python/media/dcf650acd0c50ffbc2fa1ecc61c24a8e.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目20 步进电机”。并鼠标左键双击“Project_20_Stepping_Motor.py”。

![图片不存在](./Python/media/04ba74909d3096c02a6a76b0e64d3078.png)

```
from machine import Pin
import time
 
## 引脚初始化
in1 = Pin(15, Pin.OUT)
in2 = Pin(16, Pin.OUT)
in3 = Pin(17, Pin.OUT)
in4 = Pin(18, Pin.OUT)
 
## 延时
delay = 1
 
## 电机旋转一圈所需的步数，(约360°)，会有轻微偏差.
ROUND_VALUE = 509
 
## 四相八拍步进电机顺序值:A-AB-B-BC-C-CD-D-DA-A.
STEP_VALUE = [
    [1, 0, 0, 0],
    [1, 1, 0, 0],
    [0, 1, 0, 0],
    [0, 1, 1, 0],
    [0, 0, 1, 0],
    [0, 0, 1, 1],
    [0, 0, 0, 1],
    [1, 0, 0, 1],
]
 
## 引脚输出电平低
def reset():
    in1(0)
    in2(0)
    in3(0)
    in4(0)
 
## 如果count是正整数，则顺时针旋转，如果count是负整数，则逆时针旋转
def step_run(count):
    direction = 1     # 顺时针转
    if count < 0:
        direction = -1  # 逆时针旋转
        count = -count
    for x in range(count):
        for bit in STEP_VALUE[::direction]:
            in1(bit[0])
            in2(bit[1])
            in3(bit[2])
            in4(bit[3])
            time.sleep_ms(delay)
    reset()
 
## 如果a是正整数，则顺时针旋转，如果a是负整数，则逆时针旋转
def step_angle(a):
    step_run(int(ROUND_VALUE * a / 360))
 
## 循环:顺时针转一圈，再逆时针转一圈.
while True:
    step_run(509)
    step_run(-509)
    step_angle(360)
    step_angle(-360)
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/0058df561910224fc0efd50fa365f1ef.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：ULN2003驱动模块上的D1,D2,D3,D4四个LED点亮，步进电机先逆时针旋转，再顺时针旋转，并保持此状态循环。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/a4d7b1aa723f13604513cb551ddb8ce8.png)

![图片不存在](./Python/media/f1a21b2560cf13c03120dd628d869dc2.png)























## 项目21 继电器

**1.项目介绍：**

在日常生活中，我们一般使用交流电来驱动电气设备，有时我们会用开关来控制电器。如果将开关直接连接到交流电路上，一旦发生漏电，人就有危险。从安全的角度考虑，我们特别设计了这款具有NO(常开)端和NC(常闭)端的继电器模块。在这节课我们将学习一个比较特殊，好用的开关，就是继电器模块。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/c910a7be7acddac1d2c4e4a1613524f4.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|
| :--: | :--: | :--: |:--: |
|ESP32*1|面包板*1|继电器模块*1|红色LED*1|
|![图片不存在](./Python/media/1a190cfbfe81a1524e1d1ef681688a64.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|
|3P转杜邦线公单*1|USB 线*1|220Ω电阻*1|跳线若干|

**3.元件知识：**

**继电器：** 它主要采用HK4100F-DC 5V-SHC继电器元件。继电器有3个接线柱用于外接电路，分别为NO、COM和NC端（背后丝印）。

常开（NO）：该引脚是常开的，除非向继电器模块的信号引脚提供信号，因此，普通接触针通过NC脚断开其连接，通过NO脚建立连接。

公共触点（COM）：此引脚用来连接其他模块/元器件，如LED。

LED：![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)

常闭（NC）：此NC引脚通过COM引脚连接，形成闭合电路，可以通过ESP32等开发板，控制继电器模块，来切换闭合或断开。


当继电器没有接控制信号时，COM端和NC端连通，COM端和NO端断开。
控制时，把G接控制板的GND，V接控制板的5V，S接控制板的数字口。当S信号端设置为高电平时，继电器开启，继电器COM端和NC端断开，COM端和NO端连通；S信号端设置为低电平时，继电器关闭，继电器COM端和NC端连通，COM端和NO端断开。

- 工作电压：5V（DC）
- 工作电流：≤50MA
- 最大功率：0.25W
- 输入信号：数字信号
- 触点电流：<3A

**继电器原理图：**

![图片不存在](./Python/media/69a582c7bb9bd40bafb1260e502e2b58.png)

**4.项目接线图：**

![图片不存在](./Python/media/8515f4684cfb19689fdd94da8e731f58.png)

**5.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目21 继电器”。并鼠标左键双击“Project_21_Relay.py”。

![图片不存在](./Python/media/d8a1c83dfe30e87cf2de6937272bb471.png)

```
from machine import Pin
import time

## 创建引脚15为继电器对象，将引脚15设置为输出 
relay = Pin(15, Pin.OUT)
 
## 继电器打开，继电器COM和NO连接，COM和NC断开.
def relay_on():
    relay(1)
 
## 继电器闭合，继电器COM和NO断开，COM和NC接通.
def relay_off():
    relay(0)
 
## 循环，继电器开一秒，关一秒
while True:
    relay_on()
    time.sleep(1)
    relay_off()
    time.sleep(1)
```
**6.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/2f1300cb8c7e8f9fbeb7371a6ae38f0b.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：继电器将循环开与关，开启1秒LED点亮1秒，关闭1秒LED熄灭1秒。同时可以听到继电器开与关的声音，还可以看到继电器上的指示灯指示状态的变化。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。


![图片不存在](./Python/media/6130f6be80553b9d8a3ddd3b9c4498d7.png)

![图片不存在](./Python/media/ed4aeec7d8248caffd41c4788c3dde01.jpg)
























## 项目22 调光灯

**1.项目介绍：**

电位器是一个带有滑动或旋转触点的三端电阻器，它形成一个可调的分压器。它的工作原理是在均匀电阻上改变滑动触点的位置。在电位器中，整个输入电压被施加到电阻的整个长度上，输出电压是固定触点和滑动触点之间的电压值。在这个项目中，我们将学习使用ESP32读取电位器的值，并结合LED制作一个调光灯。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/75c2400a88559cf22295c22147625d98.png)|![图片不存在](./Python/media/e8726e55ebfb8e7520e615575ce89204.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|可调电位器*1|红色 LED*1|
|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|![图片不存在](./Python/media/4107849550a2c6d09592b2a28e291b54.png) | |  
|220Ω电阻*1|USB 线*1|跳线若干 | |

**3.元件知识：**

![图片不存在](./Python/media/4a10a2fa7d595fb2683977c08657de34.png)

**可调电位器：** 可调电位器是电阻和模拟电子元件的一种，具有0和1两种状态(高电平和低电平)。模拟值不同，其数据状态呈现为1 ~ 1024等线性状态。

**ADC：** ADC是一种电子集成电路，用于将模拟信号(如电压)转换为由1和0组成的数字或二进制形式。我们在ESP32上的ADC的范围是12位，这意味着分辨率是2^12=4096，它表示一个范围(3.3V)将被平均划分为4096份。模拟值的范围对应于ADC值。因此，ADC拥有的比特越多，模拟的分区就越密集，最终转换的精度也就越高。

 ![图片不存在](./Python/media/8f067a222c20bd1a949bb504f34df15d.png)

分节1: 0V—(3.3/4095)V 范围内的模拟量对应数字0;

分节2: (3.3/4095)V—2*(3.3/4095)V 范围内的模拟量对应于数字1;

......

下面的模拟将被相应地划分。换算公式如下：

![图片不存在](./Python/media/66f4a644cdb895d4a7910a3f1ac90ccd.png)

**DAC：** 这一过程的可逆需要DAC，数字到模拟转换器。数字I/O端口可以输出高电平和低电平(0或1)，但不能输出中间电压值，这就是DAC有用的地方。ESP32有两个8位精度的DAC输出引脚GPIO25和GPIO26，可以将VCC(这里是3.3V)分成2^8=256个部分。例如，当数字量为1时，输出电压值为3.3/256×1V，当数字量为128时，输出电压值为3.3/256 ×128=1.65V, DAC的精度越高，输出电压值的精度就越高。

换算公式如下：

![图片不存在](./Python/media/0412cb6efce5c1d33e84aeac0931c402.png)

**ESP32主板上的ADC：** 

ESP32有16个引脚，可以用来测量模拟信号。GPIO引脚序列号和模拟引脚定义如下表所示：

![图片不存在](./Python/media/6e8bbcdf34c3bca663c73236fbb3f83f.png)

**ESP32主板上的DAC：**

![图片不存在](./Python/media/379d9c501ea4dfc829b6b52dba5a13e7.png)

**4.读取电位器的ADC值，DAC值和电压值：**

我们将电位器连接到ESP32的模拟IO口上来读取电位器的ADC值，DAC值和电压值。接线请参照以下接线图：

![图片不存在](./Python/media/669570530b1f544aea810426eff2c4c3.jpg)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目22 调光灯”。并鼠标左键双击“Project_22.1_Read_Potentiometer_Analog_Value.py”。

![图片不存在](./Python/media/ddd2dfd5e3145d229034d04098d2c15b.png)

```
## 导入 Pin, ADC 和DAC 库.
from machine import ADC,Pin,DAC
import time

## 打开并配置0-3.3V的ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

##每0.1秒读取一次ADC值，将ADC值转换为DAC值并输出，
##并将这些数据打印到“Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/d1c61756a52d4b9b2eb265d8a25ec69b.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：Thonny IDE下的“Shell”窗口将打印出电位器的ADC值，DAC值和电压值，转动电位器手柄时，ADC值，DAC值和电压值发生变化。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/a213481190311ee081900a879c1c4e2a.png)

![图片不存在](./Python/media/a56341b188a320c4a328dede8bc2f710.png)

**5.调光灯的接线图：**

在前面一步，我们读取了电位器的ADC值，DAC值和电压值，现在我们需要将电位器的ADC值转换成LED的亮度，来做成一个亮度可调的灯。见如下所示接线图：

![图片不存在](./Python/media/231f15fcdc1a50e5847ca582872499b6.jpg)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目22 调光灯”。并鼠标左键双击“Project_22.2_Dimming_Light.py”。

![图片不存在](./Python/media/d15f5a565080486a87530642b01d1331.png)

```
from machine import Pin,PWM,ADC
import time

pwm =PWM(Pin(15,Pin.OUT),1000)
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_10BIT)

try:
    while True:
        adcValue=adc.read()
        pwm.duty(adcValue)
        print(adc.read())
        time.sleep_ms(100)
except:
    pwm.deinit()
```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/baeccf50e2d0e13c8ae3eeb367d9921b.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：转动电位器手柄，LED的亮度会相应地改变。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/33cae409f554f54c85c4aa46a9e70934.png)

![图片不存在](./Python/media/9bb5d9041ac5f0d5a4b20b31291457e6.png)















## 项目23 火焰警报器

**1.项目介绍：**

火灾是一种可怕的灾害，火灾报警系统在房屋，商业建筑和工厂中是非常有用的。在本项目中，我们将使用ESP32控制火焰传感器，蜂鸣器和LED来模拟火灾报警装置。这是一个有意义的创客活动。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/41b3d98fdbcbfb06e20591b80a03d586.png)|![图片不存在](./Python/media/e8726e55ebfb8e7520e615575ce89204.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|火焰传感器*1|红色 LED*1|
|![图片不存在](./Python/media/a802ce7dc086858873e587c19b45578d.png)|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Python/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Python/media/4107849550a2c6d09592b2a28e291b54.png) |
|有源蜂鸣器*1|220Ω电阻*1|10KΩ电阻*1|跳线若干 |
|![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)|![图片不存在](./Python/media/d23956651d15073e880387c5a5419d80.png)|![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)| |
|NPN型晶体管(S8050)*1|1kΩ 电阻*1 |USB 线*1| |

**3.元件知识：**

![图片不存在](./Python/media/41b3d98fdbcbfb06e20591b80a03d586.png)

**火焰传感器（红外接收三极管）：** 火焰会发出一定程度的IR光，这种光人眼是看不到的，但我们的红外接收三极管可以检测到它，并提醒微控制器（如ESP32）已经检测到火灾。红外接收三极管可以探测火焰，然后将火焰亮度转换为波动水平信号。红外接收三极管的短引脚是负极，另一个长引脚是正极。我们应该连接短引脚（负极)到5V，连接长引脚(正极)到模拟引脚，一个电阻和GND。如下图所示：

![图片不存在](./Python/media/dde086c54e0343400582892ae91d818a.png)

<span style="color: rgb(255, 76, 65);">注意：</span>火焰传感器应避开日光、汽车头灯、白炽灯直接照射，也不能对着热源(如暖气片、加热器)或空调，以避免环境温度较大的变化而造成误报。同时还易受射频辐射的干扰。

**4.读取火焰传感器的ADC值，DAC值和电压值：**

我们首先用一个简单的代码来读取火焰传感器的ADC值，DAC值和电压值并打印出来。接线请参照以下接线图：

![图片不存在](./Python/media/5c151d185e7967e77ff4a8d3e17331f2.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目23 火焰警报器”。并鼠标左键双击“Project_23.1_Read_Analog_Value_Of_Flame_Sensor.py”。

![图片不存在](./Python/media/7cefcca69d0fa6ef3967c26a141b8c3f.png)

```
## 导入 Pin, ADC and DAC 库.
from machine import ADC,Pin,DAC
import time

## 打开并配置0-3.3V的ADC 
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

## 每0.1秒读取一次ADC值，将ADC值转换为DAC值并输出，
## 并将这些数据打印到“Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/e8b7234b0eb91234276c1f110a37737f.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印火焰传感器读取的ADC值，DAC值和电压值，当火焰靠近火焰传感器时，ADC值，DAC值和电压值增大；反之，ADC值，DAC值和电压值减小。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/72c743c8c6bfa891e9cced30b4f95364.png)

![图片不存在](./Python/media/a56341b188a320c4a328dede8bc2f710.png)

**5.火焰报警的接线图：**

接下来，我们将使用火焰传感器和蜂鸣器、LED制作一个有趣的项目——火灾报警装置。当火焰传感器检测到火焰时，LED闪烁，蜂鸣器报警。

![图片不存在](./Python/media/056501565145dc46ce00dfb750d87e9f.png)

**6.项目代码：**

（<span style="color: rgb(255, 76, 65);">注意：代码中的阀值500可以根据实际情况自己重新设置</span>）

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目23 火焰警报器”。并鼠标左键双击“Project_23.2_Flame_Alarm.py”。

![图片不存在](./Python/media/5596844124596a6ae771e928daf71c43.png)

```
from machine import ADC, Pin
import time

## 打开并配置0-3.3V的ADC 
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)
## 创建引脚15为LED对象，设置引脚15为输出
led = Pin(15, Pin.OUT) 
## 创建引脚4为蜂鸣器对象，设置引脚4为输出
buzzer = Pin(4, Pin.OUT)   
 
## 如果火焰传感器检测到火焰，蜂鸣器将发出蜂鸣声
##，当模拟值大于500时，LED闪烁
## 否则，蜂鸣器不响，LED熄灭

while True:
    adcVal=adc.read()
    if adcVal >500:
        buzzer.value(1) # 蜂鸣器鸣叫
        led.value(1)    # LED点亮
        time.sleep(0.5) # 延时 0.5s
        buzzer.value(0) # 蜂鸣器关闭
        led.value(0)    
        time.sleep(0.5) # 延时 0.5s
    else:
        buzzer.value(0) # 蜂鸣器关闭
        led.value(0)    # LED熄灭

```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/fa1ba09b96b97c0c8d0edc44bf6d7e50.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：当火焰传感器检测到火焰时，LED闪烁，蜂鸣器报警；否则，LED不亮，蜂鸣器不响。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/ce884f90e1b18e6f6f23733ef94b2a40.png)

![图片不存在](./Python/media/1790b8a741eea4def3eac4e122049b01.png)










## 项目24 小夜灯

**1.项目介绍：**

传感器或元件在我们的日常生活中是无处不在的。例如，一些公共路灯在晚上会自动亮起，而在白天会自动熄灭。为什么呢? 事实上，这些都是利用了一种光敏元件，可以感应外部环境光强度的元件。晚上，当室外亮度降低时，路灯会自动打开；到了白天，路灯会自动关闭。这其中的原理是很简单的，在本实验中我们使用ESP32控制LED就来实现这个路灯的效果。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/72c1149c0cbd940aa8cf2356ba75ce6b.png)|![图片不存在](./Python/media/e8726e55ebfb8e7520e615575ce89204.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|光敏电阻*1|红色 LED*1|
|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Python/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Python/media/4107849550a2c6d09592b2a28e291b54.png) |![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)|
|220Ω电阻*1|10KΩ电阻*1|跳线若干 |USB 线*1|

**3.元件知识：**

![图片不存在](./Python/media/72c1149c0cbd940aa8cf2356ba75ce6b.png)

光敏电阻：是一种感光电阻，其原理是光敏电阻表面上接收亮度(光)降低电阻，光敏电阻的电阻值会随着被探测到的环境光的强弱而变化。有了这个特性，我们可以使用光敏电阻来检测光强。光敏电阻及其电子符号如下：

![图片不存在](./Python/media/1905cf730948d3735f192c184361e2a2.png)

下面的电路是用来检测光敏电阻电阻值的变化：

![图片不存在](./Python/media/7ad49eab2d60085716bb365d33f055bd.png)

在上述电路中，当光敏电阻的电阻因光强的变化而改变时，光敏电阻与电阻R2之间的电压也会发生变化。因此，通过测量这个电压就可以得到光的强度。本项目是采用上图左边的电路来接线的。 

**4.读取光敏电阻的ADC值，DAC值和电压值：**

我们首先用一个简单的代码来读取光敏电阻的ADC值，DAC值和电压值并打印出来。接线请参照以下接线图：

![图片不存在](./Python/media/c19e5b58e073c49a22dd0fdfdb38d7f7.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目24 小夜灯”。并鼠标左键双击“Project_24.1_Read_Photosensitive_Analog_Value.py”。

![图片不存在](./Python/media/047bd4f52590fa964e575d2e90ccc260.png)

```
## 导入 Pin, ADC 和 DAC 库.
from machine import ADC,Pin,DAC
import time

## 打开并配置0-3.3V的ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

##每0.1秒读取一次ADC值，将ADC值转换为DAC值并输出，
##并将这些数据打印到“Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/64ecdbe49a422a3fc9d31e6f8bc0d910.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印光敏电阻读取的ADC值，DAC值和电压值，当逐渐减弱光敏电阻所处环境中的光线强度时，ADC值，DAC值和电压值逐渐增大；反之，ADC值，DAC值和电压值逐渐减小。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/a68cf3dc58f660b5fbdb913f6ebb701e.png)

![图片不存在](./Python/media/8d74c8c0893ae2dac55725890cd4d1af.png)

**5.光控灯的接线图：**

我们在前面做了一个小小的调光灯，现在我们来做一个光控灯。它们的原理是相同的，即通过ESP32获取传感器的模拟值，然后调节LED的亮度。

![图片不存在](./Python/media/eac0e08c0dde6b435907827d36eb1957.png)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目24 小夜灯”。并鼠标左键双击“Project_24.2_Night_Lamp.py”。

![图片不存在](./Python/media/e19d869df2930de7c670b290212ff6ce.png)

```
from machine import Pin,PWM,ADC
import time

pwm =PWM(Pin(15,Pin.OUT),1000)
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_10BIT)

try:
    while True:
        adcValue=adc.read()
        pwm.duty(adcValue)
        print(adc.read())
        time.sleep_ms(100)
except:
    pwm.deinit()

```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/dce7bbda982d2dc7a4543cdacf2a4523.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：当减弱光敏电阻所处环境中的光线强度时，LED变亮，反之，LED变暗。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/f4efa6056c100592a24fc30515732c06.png)

![图片不存在](./Python/media/b640e71ba0840d6f99fb089ab248ca4f.png)













## 项目25 人体感应灯

**1.项目介绍：**

人体感应灯一般都用在黑漆漆的楼道区域，随着科技的发展，人体感应灯的使用在我们现实生活中十分常见。小区的楼道，房间的卧室、地下城的车库、卫生间等区域都会用到人体感应灯。现实生活中的人体感应灯一般是由人体红外传感器、灯、光敏电阻传感器等组成的。
在本项目中，我们将学习如何利用人体红外传感器、LED、光敏电阻来制作一款人体感应灯。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/72c1149c0cbd940aa8cf2356ba75ce6b.png)|![图片不存在](./Python/media/e8726e55ebfb8e7520e615575ce89204.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|光敏电阻*1|红色 LED*1|
|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Python/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Python/media/4107849550a2c6d09592b2a28e291b54.png) |![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)|
|220Ω电阻*1|10KΩ电阻*1|跳线若干 |USB 线*1|
|![图片不存在](./Python/media/6f0780e5e12a2154c17a6310c13055a8.png)|![图片不存在](./Python/media/1a190cfbfe81a1524e1d1ef681688a64.png)| | |
|人体红外传感器*1|3P转杜邦线公单*1| | |

**3.项目接线图：**

![图片不存在](./Python/media/6ae9651dc841b151b5a09711b607a99a.png)

**4.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目25 人体感应灯”。并鼠标左键双击“Project_25_Human_Induction_Lamp.py”。

![图片不存在](./Python/media/884599b3c925f94f1a129d2374934976.png)

```
from machine import Pin, ADC
import time
 
## 人体红外传感器引脚
human = Pin(15, Pin.IN)
 
## 初始化光敏光传感器引脚到GP36 (ADC函数)
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_10BIT)
##创建引脚4为LED对象，设置引脚4为输出 
led = Pin(4, Pin.OUT)

def detect_someone():
    if human.value() == 1:
        return True
    return False
 
abc = 0
 
while True:
    adcVal=adc.read()
    if adcVal >= 500:
        if detect_someone() == True:
            abc += 1
            led.value(1)
            print("value=", abc)
            time.sleep(1)
        else:
            if abc != 0:
                abc = 0
                led.value(0)
    else:
        led.value(0)
 
    time.sleep(0.1)
```
**5.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/e273bf4f1b6385239e809d4fbd71a2e2.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：当你的手覆盖光敏电阻的感光部分来模拟黑暗状态时，然后用另一只手在人体红外传感器前面晃动，LED也点亮，而且延时几秒钟后LED会自动关闭，同时Thonny IDE下的”Shell”窗口将打印LED点亮的延时时间。如果光敏电阻的感光部分没有被覆盖，这时候用手在人体红外传感器前面晃动，LED处于熄灭状态。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/5badadb7d6532721607de9520519f814.png)

![图片不存在](./Python/media/e1802d14ac92f38789b9c73776cbd502.png)

![图片不存在](./Python/media/4d8082b8c5002988fea39df40c09e1a5.png)















## 项目26 声控风扇

**1.项目介绍：**

声音传感器有一个内置的电容驻极体麦克风和功率放大器。它可以用来检测环境的声音强度。在这个项目中，我们利用ESP32控制声音传感器和电机模块模拟一个声控风扇。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/2d879e56de94fbb14399ec17c0b10861.png)|![图片不存在](./Python/media/1a27646ca0ba9c5dc4d300edbab826c8.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|130电机模块*1|声音传感器*1 |
|![图片不存在](./Python/media/c562656c96657983e724daed7c8d6202.png)|![图片不存在](./Python/media/3cc5c242c0f357b3dc496037a7d8bae8.png)|![图片不存在](./Python/media/ed228ff5627e0c8cc0c79fa04f1d4d16.png)| ![图片不存在](./Python/media/1a190cfbfe81a1524e1d1ef681688a64.png) |
|面包板专用电源模块*1|6节5号电池盒*1|风扇叶*1|3P转杜邦线公单*1 |
|![图片不存在](./Python/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Python/media/4c49cdffc9e5e6f1aad838120d35897a.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
|4P转杜邦线公单*1|5号电池(<span style="color: rgb(255, 76, 65);">自备</span>)*6|USB 线*1| |

**3.元件知识：**

![图片不存在](./Python/media/c49408db3d24bf99b4731cd36cf9fd40.png)

**声音传感器:** 通常用于检测周围环境中的声音响度。微型控制板可以通过模拟输入接口采集其输出信号。传感器的S引脚是模拟输出，是麦克风电压信号的实时输出。传感器附带一个电位器，这样你就可以调整信号强度。你可以使用它来制作一些交互式作品，如语音操作的开关等。

**声音传感器参数：**
- 工作电压：3.3V-5V（DC）
- 工作电流：≤100mA
- 最大功率：0.5W
- 输出信号：模拟信号

**声音传感器原理图：**

它主要采用一个高感度麦克风元件和LM386芯片。高感度麦克风元件用于检测外界的声音。利用LM386芯片搭建合适的电路，我们对高感度麦克风检测到的声音进行放大，最大倍数为200倍。使用时我们可以通过旋转传感器上电位器，调节声音的放大倍数。调节时，顺时针调节电位器到尽头，放大倍数最大。

![图片不存在](./Python/media/c57ab278b6b9a96aa8236e95970ce481.png)

**4.读取声音传感器的ADC值，DAC值和电压值：**

我们首先使用一个简单的代码来读取声音传感器的ADC值，DAC值和电压值并将其打印出来，接线请参照以下接线图：
![图片不存在](./Python/media/8a39a8a15a7cfe5c210b6f0a74d0db7f.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目26 声控风扇”。并鼠标左键双击“Project_26.1_Read_Sound_Sensor_Analog_Value.py”。

![图片不存在](./Python/media/9f642ac00db7708910947e414c690def.png)

```
## 导入 Pin, ADC 和 DAC 库.
from machine import ADC,Pin,DAC
import time

## 打开并配置0-3.3V的ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

## 每0.1秒读取一次ADC值，将ADC值转换为DAC值并输出，
## 并将这些数据打印到“Shell”. 
try:
    while True:
        adcVal=adc.read()
        dacVal=adcVal//16
        voltage = adcVal / 4095.0 * 3.3
        print("ADC Val:",adcVal,"DACVal:",dacVal,"Voltage:",voltage,"V")
        time.sleep(0.1)
except:
    pass
```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/c6a29bdd0bc033f536a910ed1981ce8c.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印声音传感器读取的模拟值，当对着传感器拍拍手，声音传感器的模拟值发生了显著的变化。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/95dd850f05e74c4522f7719787c32571.png)

![图片不存在](./Python/media/025d3fccd80b36df22bdbb3b41086d49.png)

**5.智能风扇的接线图：**

接下来，我们正式进入这个项目。我们用声音传感器、130电机模块和风叶片来模拟一个声控风扇。接线图如下：

![图片不存在](./Python/media/8e2f510e4622a1ac71304da9c6f28dcb.png)

(<span style="color: rgb(255, 76, 65);">注: 先接好线，然后在直流电机上安装一个小风扇叶片。</span>)

**6.项目代码：**

（<span style="color: rgb(255, 76, 65);">注意：</span>代码中的阀值600可以根据实际情况自己重新设置）

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目26 声控风扇”。并鼠标左键双击“Project_26.2_Sound_Control_Fan.py”。

![图片不存在](./Python/media/6d4b58959896a110f084e5e331f77d6d.png)

```
from machine import ADC, Pin
import time
 
## 打开并配置0-3.3V的ADC 
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)
 
## 引脚初始化
motor1a = Pin(15, Pin.OUT) # 创建引脚15为motor1a对象，设置引脚15为输出
motor1b = Pin(2, Pin.OUT) # 创建引脚2为motor1b对象，设置引脚2为输出

## 如果声音传感器检测到声音，电机将旋转
## 当模拟值大于600时，否则，电机不转动.    
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
```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/05febf4431c24191e7217c2c76afcefa.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：对着声音传感器拍拍手，当声音强度超过阈值时，小风扇旋转起来；反之，小风扇不旋转。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/649b36844610270a764821d9289ab8e0.png)

![图片不存在](./Python/media/0f246e724493848af4925a5155312fe7.png)











## 项目27 温度测量

**1.项目介绍：**

LM35是一种常用且易于使用的温度传感器。它不需要其他硬件你只需要一个模拟端口就可以了。难点在于编译代码，将其读取的模拟值转换为摄氏温度。在这个项目中，我们使用一个温度传感器和3个LED灯来制作一个温度测试仪。当温度传感器接触不同的温度物体时，LED灯就会显示不同的颜色。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/325f351a1cc5c9af86988ddafd03fa19.png)|![图片不存在](./Python/media/36f39ba5899a86990d02500371bc0e77.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|红色LED*1|黄色 LED*1|
|![图片不存在](./Python/media/f361df3b38005087cb22efc34689d554.png)|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)|![图片不存在](./Python/media/07ce12cc558e18e090477850bf5a1fbf.png)| ![图片不存在](./Python/media/1a190cfbfe81a1524e1d1ef681688a64.png) |
|绿色LED*1|220Ω电阻*3|LM35温度传感器*1|3P转杜邦线公单*1|
| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| | |
|跳线若干|USB 线*1| | |

**3.元件知识：**

![图片不存在](./Python/media/07ce12cc558e18e090477850bf5a1fbf.png)

**LM35温度传感器：** 是一种常用的LM35温度传感器，它主要采用LM35DZ传感器元件。该元件的输出电压与摄氏温标呈线性关系。在室温下，无需额外的校准处理即可达到1/4℃的精度。LM35温度传感器可以根据不同的温度产生不同的电压，当温度为0℃时输出0V；每升高1℃，输出电压将增加10mv。换算公式如下：

![图片不存在](./Python/media/1e00e0086f72e30d983131b0a38f8e92.png)

**4.读取LM35的温度值：**

我们首先使用一个简单的代码读取温度传感器的值并将其打印出来，，其接线图如下所示：

![图片不存在](./Python/media/596272fdfcab5e88e0844db4f8147d01.png)

这里，LM35输出给ESP32的模拟引脚是GPIO36。这个模拟电压被转换成数字形式，并经过处理得到温度读数。

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目27 温度测量”。并鼠标左键双击“Project_27.1_Read_LM35_Temperature_Value.py”。

![图片不存在](./Python/media/5fcfb7cb6063454c3abc6afe7eaaa59f.png)

```
from machine import ADC, Pin
import time

## 打开并配置0-3.3V的ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)
conversion_factor = 3.3 / (4095)

while True:
    adcVal=adc.read()
    reading = adcVal * conversion_factor 
    temperature = reading * 102.4 
    print(temperature)
    time.sleep(1)
```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/ee5ada67974492ad0c9ad4991e786989.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印LM35温度传感器读取的温度值。用手捏住LM35元件，LM35温度传感器读取的温度值在变化。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/1421e9e894382d3d3496f5059e9e9ebd.png)

![图片不存在](./Python/media/39ef72a8a858a61158d3ad50978e4d47.png)

**5.温度测量的接线图：** 

现在使用LM35温度传感器和3个led做一个温度测试。当LM35温度传感器感应到不同的温度时，不同的led会点亮。按照下图进行接线。

![图片不存在](./Python/media/ab43144f44c011ca563ea2baf87f2a7e.png)

**6.项目代码：**

（<span style="color: rgb(255, 76, 65);">注意：</span>代码中的阀值20和25可以根据实际情况自己重新设置）

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目27 温度测量”。并鼠标左键双击“Project_27.2_Temperature_Measurement.py”。

![图片不存在](./Python/media/e4df2869587d8e964ddde0d92cbdba93.png)

```
from machine import ADC, Pin
import time

## 打开并配置0-3.3V的ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)
conversion_factor = 3.3 / (4095)

## 创建引脚15为红色led对象，设置引脚15为输出
led_red = Pin(15, Pin.OUT)  
## 创建引脚2为黄色led对象，设置引脚2为输出
led_yellow = Pin(2, Pin.OUT)
## 创建引脚4为绿色led对象，将引脚4设置为输出
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
        
```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/bd55d4705500c67451970485249cbab3.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印LM35温度传感器读取的温度值，当LM35温度传感器感应到不同的温度时，不同的led会点亮。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/47cdbd108370313d2d257891056e68d5.png)

![图片不存在](./Python/media/e72fc196f226e6746ccf012588e13b39.png)











## 项目28 摇杆控制RGB灯

**1.项目介绍：**

摇杆模块是一个有两个模拟输入和一个数字输入的组件。广泛应用于游戏操作、机器人控制、无人机控制等领域。在这个项目中，我们使用ESP32和摇杆模块控制RGB。这样，你可以在实践中对摇杆模块的原理和操作有更深入的了解。 

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/3ee8831539e4abb6a61b76bda584202a.png)|![图片不存在](./Python/media/6de88c5b9c38d8ab879ae91eb51431b7.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|摇杆模块*1|RGB LED*1|
|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)| ![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|![图片不存在](./Python/media/7172e3b16a2567aa57171cf42bbb3d49.png)|
|220Ω电阻*3|跳线若干|USB 线*1|5P转杜邦线公单*1|

**3.元件知识：**

![图片不存在](./Python/media/3ee8831539e4abb6a61b76bda584202a.png)

**摇杆模块：** 主要是采用PS2手柄摇杆元件，实际上摇杆模块有3个信号端引脚，模拟3维空间，摇杆模块的引脚分别是GND、VCC、信号端（B、X、Y），其中信号端X、Y模拟空间的X轴和Y轴，控制时，模块的X、Y信号端是连接控制板模拟口，通过控制2个模拟输入值来控制物体在空间X、Y轴的坐标。信号端B模拟空间Z轴，它一般是接数字口，做按键使用。

VCC接控制板的电源输出端V/VCC（3.3/5V），GND接控制板的G/GND，原始状态下读出电压大约为1.65V/2.5V左右，对于X轴方向，当随箭头方向逐渐移动，读出电压值随着增加，且可以达到最大电压；随箭头相反方向逐渐移动，读出电压值逐渐减少，减少到最小电压。对于Y轴方向，当沿着模块上的箭头方向逐渐按下，读出电压值随着增加，且可以达到最大电压；随箭头相反方向逐渐按下，读出电压值逐渐减少，减少到最小电压。对于Z轴方向，信号端B接数字口，原始状态下输出0，按下输出1。这样，我们可以读取两个模拟值和一个数字口的高低电平情况，来判断模块上摇杆的工作状态。

**模块参数：**

- 输入电压：DC 3.3V ~ 5V
- 输出信号：X/Y双轴模拟值+Z轴数字信号
- 适用范围：适用于控制点坐标在平面内的运动，双自由度舵机的控制等。
- 产品特点：外观精美，摇杆手感优越，操作简单，反应灵敏，使用寿命长。

**4.读取摇杆模块的值：**

我们必须使用ESP32的模拟IO口从摇杆模块的X/Y引脚读取值，并使用数字IO口读取按钮的数字信号。请按照下面的接线图进行接线：

![图片不存在](./Python/media/94ad37529f05fd4d7c72b15deaeec40f.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目28 摇杆控制RGB灯”。并鼠标左键双击“Project_28.1_Read_Rocker_Value.py”。

![图片不存在](./Python/media/8f5a33e96aebe895f44da5ceb2a23986.png)

```
from machine import Pin, ADC
import time
## 初始化摇杆模块(ADC函数)
rocker_x=ADC(Pin(36))
rocker_y=ADC(Pin(39))
button_z=Pin(14,Pin.IN,Pin.PULL_UP)

## 将两个ADC通道的电压采集范围设置为0-3.3V，
##，数据采集宽度为0-4095.
rocker_x.atten(ADC.ATTN_11DB)
rocker_y.atten(ADC.ATTN_11DB)
rocker_x.width(ADC.WIDTH_12BIT)
rocker_y.width(ADC.WIDTH_12BIT)
 
## 在代码中，将Z_Pin配置为上拉输入模式。
## 在loop()中，使用Read()读取X轴和Y轴的值
## 和使用value()来读取Z轴的值，然后显示它们.
while True:
    print("X,Y,Z:",rocker_x.read(),",",rocker_y.read(),",",button_z.value())
    time.sleep(0.5)
    
```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/4b45818d4f39cfff982cc2f4a6faa3e2.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印当前摇杆的模拟值和数字值，移动摇杆或按下摇杆帽将改变”Shell”中的模拟值和数字值。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/087ce3c1e57acebc14b341d5d78ae2ca.png)

![图片不存在](./Python/media/f48d3e1d83ae14dfbd03b66df459de82.png)

![图片不存在](./Python/media/055500d12a8e7cb59316bde189080d14.png)

**5.摇杆模块控制RGB的接线图:**
 
我们刚读了摇杆模块的值，这里我们需要用摇杆模块和RGB做一些事情，按照下图连接：

![图片不存在](./Python/media/f132bdfe058976a8a3f857100a799ef8.png)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目28 摇杆控制RGB灯”。并鼠标左键双击“Project_28.2_Rocker_Control_Light.py”。

![图片不存在](./Python/media/c57da44674ff4526923c69dec1ee0ee5.png)

```
from machine import Pin, ADC,PWM 
import time
##设置RGB的接口和频率
rgb_r = PWM(Pin(4))
rgb_g = PWM(Pin(0))
rgb_b = PWM(Pin(2))
rgb_b.freq(1000)
rgb_r.freq(1000)
rgb_g.freq(1000)
##Set rocker pin
rocker_x=ADC(Pin(36))
rocker_y=ADC(Pin(39))
## 将两个ADC通道的电压采集范围设置为0-3.3V，
## 数据采集宽度为0-4095.
rocker_x.atten(ADC.ATTN_11DB)
rocker_y.atten(ADC.ATTN_11DB)
rocker_x.width(ADC.WIDTH_12BIT)
rocker_y.width(ADC.WIDTH_12BIT)

while True:
    y = rocker_y.read()#得到摇杆模块的Y值
    x = rocker_x.read()#得到摇杆模块的X值
    if x < 1000:    #左
        rgb_b.duty(0)
        rgb_r.duty(1023)
        rgb_g.duty(0)
    elif x > 3000:    #右
        rgb_b.duty(0)
        rgb_r.duty(0)
        rgb_g.duty(1023)
    elif y < 1000:    #下
        rgb_b.duty(1023)
        rgb_r.duty(0)
        rgb_g.duty(0)
    elif y > 3000:    #上
        rgb_b.duty(1023)
        rgb_r.duty(1023)
        rgb_g.duty(1023)
    time.sleep(0.01)
```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/968f3fd9c30b8ea9d9209b68025dfe60.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：①如果摇杆在X方向上移动到最左边，RGB光变成红色; ②如果摇杆在X方向上移动到最右边，RGB光变为绿色; ③如果摇杆在Y方向上移动到最上面，RGB光变成白色; ④如果摇杆在Y方向上移动到最下面，RGB光变成蓝色。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/5b22393f96ac9dc5f7088177c55ce096.png)

![图片不存在](./Python/media/025992d68a7316e8649a5f3e654cc175.png)

![图片不存在](./Python/media/4dd85d9f76f24578031a806eec39fc34.png)






## 项目29 温湿度表

**1.项目介绍：**

在冬季时，空气中的湿度很低，就是空气很干燥，再加上寒冷，人体的皮肤就容易过于干燥而裂，所以需要在用加湿器给家里的空气增加湿度，但是怎么知道空气过于干燥了呢？那就需要检测空气湿度的设备，这节课就来学习温湿度传感器的使用。我们使用温湿度传感器制作一个温湿度计，并且还结合LCD 128X32 DOT来显示温度和湿度值。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/c4b08ad87310ea27bc06383257cc7f8f.png)|![图片不存在](./Python/media/7b166aa2bc58fd46700f92d9d49514a1.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|LCD_128X32_DOT*1|温湿度传感器*1|
| ![图片不存在](./Python/media/1a190cfbfe81a1524e1d1ef681688a64.png)|![图片不存在](./Python/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| |
|3P转杜邦线公单*1|4P转杜邦线公单*1|USB 线*1| |

**3.元件知识：**

![图片不存在](./Python/media/7b166aa2bc58fd46700f92d9d49514a1.png)

**温湿度传感器：** 是一款含有已校准数字信号输出的温湿度复合传感器，其精度湿度±5%RH， 温度±2℃，量程湿度20-90%RH， 温度0~50℃。温湿度传感器应用专用的数字模块采集技术和温湿度传感技术，确保产品具有极高的可靠性和卓越的长期稳定性。温湿度传感器包括一个电阻式感湿元件和一个NTC测温元件，非常适用于对精度和实时性要求不高的温湿度测量场合。
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

![图片不存在](./Python/media/c40407c88735bc9564537352c20745fe.png)

温湿度传感器可以很容易地将温湿度数据添加到您的DIY电子项目中。它是完美的远程气象站，家庭环境控制系统，和农场或花园监测系统。

**温湿度传感器的参数：**

- 工作电压：+5 V
- 温度范围：0-50 °C ，误差：± 2 °C
- 湿度范围：20-90% RH ，误差：± 5% RH
- 数字接口

**温湿度传感器的原理图：**

![图片不存在](./Python/media/b89d7440b3a20051c5669bbdf512c619.png)

**4.读取温湿度值：**

![图片不存在](./Python/media/f03f8f124d26e2c632f2ec7f6d1b359d.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目29 温湿度表”。并鼠标左键双击“Project_29.1_Detect_Temperature_Humidity.py”。

![图片不存在](./Python/media/007267f62274eca397bce1b524936ec6.png)

```
## 导入 machine, time 和 dht 库. 
import machine
import time
import dht

##关联DHT11引脚(13).
DHT = dht.DHT11(machine.Pin(13))

## 每秒获取一次温湿度数据，并打印出来. 
while True:
    DHT.measure() # 启动DHT11一次测量数据.
   # 调用DHT的内置函数来获取温度
   # 和湿度数据并打印在“Shell”中.
    print('temperature:',DHT.temperature(),'℃','humidity:',DHT.humidity(),'%')
    time.sleep_ms(1000)
```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/f22db29ebafde4b5fc2a2f2ed1c2b4d1.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，如果你的温湿度传感器连接错误，在“Shell”窗口中将打印以下信息。请确保你的电路已正确连接，再次单击，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印当前显示当前环境中的温湿度数据，如下图。

![图片不存在](./Python/media/dfc2b6df00029d524db2ea7d59020373.png)

再次单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印声音传感器读取的模拟值，当对着传感器拍拍手，声音传感器的模拟值发生了显著的变化。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/59e0a68f38271ea1862796bee41c6f58.png)

![图片不存在](./Python/media/c5d924fa268386cc40917cb0d6574229.png)

**5.温湿度仪表的接线图：**

现在我们开始用LCD_128X32_DOT打印温湿度传感器的值，我们会在LCD_128X32_DOT的屏幕上看到相应的值。让我们开始这个项目吧。请按照下面的接线图进行接线：

![图片不存在](./Python/media/8e985ac07d8469baa791b9756a42f317.png)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目29 温湿度表”。分别选择“lcd128_32.py”和 “lcd128_32_fonts.py”，右键单击鼠标选择 “上传到/”，等待 “lcd128_32.py”和 “lcd128_32_fonts.py”被上传到ESP32，然后鼠标左键左键双击“Project_29.2_Temperature_Humidity_Meter.py”。

![图片不存在](./Python/media/8f297af5cee6d950ae23b8df669d7e13.png)

![图片不存在](./Python/media/7de6d7e9beea580aba5bae7b411d50e6.png)

![图片不存在](./Python/media/4f0bdc609b7b6d7fe00ff541db412cb4.png)

```
from machine import Pin
import machine
import dht
import time
import lcd128_32_fonts
from lcd128_32 import lcd128_32

temp = 0
humi = 0

##关联DHT11引脚(13).
DHT = dht.DHT11(Pin(13))

##i2c配置
clock_pin = 22
data_pin = 21
bus = 0
i2c_addr = 0x3f
use_i2c = True

def scan_for_devices():
    i2c = machine.I2C(bus,sda=machine.Pin(data_pin),scl=machine.Pin(clock_pin))
    devices = i2c.scan()
    if devices:
        for d in devices:
            print(hex(d))
    else:
        print('no i2c devices')

try:
    while True:
        DHT.measure()
        temp = int(DHT.temperature())
        humi = int(DHT.humidity())
        if use_i2c:
            scan_for_devices()
            lcd = lcd128_32(data_pin, clock_pin, bus, i2c_addr)         
        lcd.Clear()
        lcd.Cursor(0, 0)
        lcd.Display("temper:")
        lcd.Cursor(0, 8)
        lcd.Display(str(temp))
        lcd.Cursor(0, 11)
        lcd.Display("C")
        lcd.Cursor(2, 0)
        lcd.Display("Humid:")
        lcd.Cursor(2, 7)
        lcd.Display(str(humi))
        lcd.Cursor(2, 10)
        lcd.Display("%")
        time.sleep(0.1)
except:
    pass

```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/70e2ff9ca4d0b93a58487f7d15df4716.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：LCD 128X32 DOT的屏幕上显示温湿度传感器检测环境中相应的温度值和湿度值。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/6451dc7df9005ba92ee4abd12f41b1a9.png)

![图片不存在](./Python/media/95585f276ffa5f74d4af40650ed852f5.png)



## 项目30 测距仪表

**1.项目介绍：**

HC-SR04超声波传感器是一种非常实惠的距离传感器，主要用于各种机器人项目中的物体躲避。它也被用于水位传感器，甚至作为一个停车传感器。我们把超声波传感器当作蝙蝠的眼睛，在黑暗中，蝙蝠仍然可以通过超声波识别前方的物体和方向。在本项目中，我们使用ESP32控制超声波传感器和LED模拟超声波测距仪。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/28c9fe25104d16cc0ed7da8c80c443ea.png)|![图片不存在](./Python/media/4191d5454859076aa2a6c069185be177.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|超声波传感器*1|4P转杜邦线公单*1
|![图片不存在](./Python/media/e8726e55ebfb8e7520e615575ce89204.png)|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Python/media/8d920d12138bd3b4e62f02cecc2c63a3.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)|
|红色 LED*4|220Ω电阻*4|跳线若干|USB 线*1|

**3.元件知识：**

**HC-SR04超声波传感器：** 像蝙蝠一样使用声纳来确定与物体的距离，它提供了精准的非接触范围检测、高精度和稳定的读数。它的操作不受阳光或黑色材料的影响，就像精密的照相机(在声学上像布料这样比较软的材料很难被探测到)。它带有超声波发射器和接收器。

![图片不存在](./Python/media/714ec39c0aca1fe5faa21660afa4f584.png)

在超声波传感器的前面是两个金属圆筒，这些是转换器。转换器将机械能转换成电信号。在超声波传感器中，有发射转换器和接收转换器。发射转换器将电信号转换为超声波脉冲，接收转换器将反射的超声波脉冲转换回电信号。如果你看超声波传感器的背面，你会看到的发射转换器后面有一个IC，这是控制发射转换器的IC。在接收转换器后面也有一个IC，这是一个四运算放大器，它将接收转换器产生的信号放大成足以传输到微控制器的信号。

**时序图：**

图示HC-SR04的时序图。为了开始测量，SR04的Trig必须接受至少10us的高(5V)脉冲，这将启动传感器将发射出8个周期的40kHz的超声波脉冲，并等待反射的超声波脉冲。当传感器从接收器检测到超声波时，它将设置回波引脚为高(5V)和延迟一个周期(宽度)，与距离成比例。为了获得距离，测量Echo引脚的宽度。

![图片不存在](./Python/media/0ef4e6d4eeb8fcda4c3414414cb2ff42.png)

时间=回波脉冲宽度，单位为us(微秒)

距离厘米=时间/ 58

距离(英寸)=时间/ 148

**4.读取超声波传感器距离值:**

我们将从一个简单的超声波测距开始，并打印测量的距离。

![图片不存在](./Python/media/88695ec0baa6f351fabceb67888a85b0.png)  

HC-SR04超声波传感器有四个引脚：Vcc、Trig、Echo和GND。Vcc引脚提供产生超声波脉冲的电源，接Vcc/+5V。GND引脚接地/GND。Trig引脚是控制板发送信号来启动超声波脉冲的地方。Echo引脚是超声波传感器向控制板发送关于超声波脉冲行程持续时间的信息的地方。按下图接线：

![图片不存在](./Python/media/b6bca4b1243254d8a499d52eacb8e372.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目30 测距仪表”。并鼠标左键双击“Project_30.1_Ultrasonic_Ranging.py”。

![图片不存在](./Python/media/1dddd1ff394404b781bc862e259ed094.png)

```
from machine import Pin
import time

## 定义超声波测距模块的控制引脚. 
Trig = Pin(13, Pin.OUT, 0)
Echo = Pin(14, Pin.IN, 0)

distance = 0 # 定义初始距离为0.
soundVelocity = 340 #设置声速.

## getDistance()函数用于驱动超声波模块测量距离，Trig 引脚保持在高位10us以启动超声波模块。
## Echo.value()用于读取超声波模块Echo引脚的状态，
## 然后使用时间模块的时间戳函数计算Echo的持续时间
## 引脚的高电平，根据时间计算测量距离并返回值.
def getDistance():
    Trig.value(1)
    time.sleep_us(10)
    Trig.value(0)
    while not Echo.value():
        pass
    pingStart = time.ticks_us()
    while Echo.value():
        pass
    pingStop = time.ticks_us()
    pingTime = time.ticks_diff(pingStop, pingStart) // 2
    distance = int(soundVelocity * pingTime // 10000)
    return distance

## 延迟2秒，等待超声波模块稳定下来，从超声波模块获得的数据每500毫秒打印一次.
time.sleep(2)
while True:
    time.sleep_ms(500)
    distance = getDistance()
    print("Distance: ", distance, "cm")
```

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/dcbd6b43cd90441c04b54ab0ca485004.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印超声波传感器和物体之间的距离值。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/bda02c981e7f3bdbff4126296b110c75.png)

![图片不存在](./Python/media/bde10d5653195b4e31e51a5942e36dd3.png)

**5.超声波测距仪的接线图：**

接下来，我们将使用ESP32控制超声波传感器和4个LED来模拟超声波测距仪。按如下图接好线：
![图片不存在](./Python/media/6fbf83282f8afdbf127d675cf1cb7aab.png)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目30 测距仪表”。并鼠标左键双击“Project_30.2_Ultrasonic_Ranger.py”。

![图片不存在](./Python/media/3ec807613acd4dd997e6bd7598deaf04.png)

```
from machine import Pin
import time

## 定义四个led的引脚.
led1 = Pin(4, Pin.OUT)
led2 = Pin(0, Pin.OUT)
led3 = Pin(2, Pin.OUT)
led4 = Pin(15, Pin.OUT)

## 定义超声波测距模块的控制引脚. 
Trig = Pin(13, Pin.OUT, 0)
Echo = Pin(14, Pin.IN, 0)

distance = 0 # 定义初始距离为0.
soundVelocity = 340 #设置声速.

## getDistance()函数用于驱动超声波模块测量距离，Trig 引脚保持在高位10us以启动超声波模块。
## Echo.value()用于读取超声波模块Echo引脚的状态，
## 然后使用时间模块的时间戳函数计算Echo的持续时间
## 引脚的高电平，根据时间计算测量距离并返回值.
def getDistance():
    Trig.value(1)
    time.sleep_us(10)
    Trig.value(0)
    while not Echo.value():
        pass
    pingStart = time.ticks_us()
    while Echo.value():
        pass
    pingStop = time.ticks_us()
    pingTime = time.ticks_diff(pingStop, pingStart) // 2
    distance = int(soundVelocity * pingTime // 10000)
    return distance

## 延迟2秒，等待超声波模块稳定下来，从超声波模块获得的数据每500毫秒打印一次. 
time.sleep(2)
while True:
    time.sleep_ms(500)
    distance = getDistance()
    print("Distance: ", distance, "cm")
    if distance <= 5:
       led1.value(1)
    else:
       led1.value(0)
    if distance <= 10:
       led2.value(1)
    else:
       led2.value(0)
    if distance <= 15:
       led3.value(1)
    else:
       led3.value(0)
    if distance <= 20:
       led4.value(1)
    else:
       led4.value(0)
       
```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/28a5c5174d4e2734c93ad19ba787174b.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将打印超声波传感器和物体之间的距离值，另外，当我们用手在超声波传感器前移动时，相应的LED会亮起来。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/d3d82968ff7cac73d9163bf0f5b20efe.png)

![图片不存在](./Python/media/2477ab30a017c161f9b5ea58dd66fa80.png)







## 项目31 温度仪表

**1.项目介绍：**

热敏电阻是一种电阻，其阻值取决于温度和温度的变化，广泛应用于园艺、家庭警报系统等装置中。因此，我们可以利用这一特性来制作温度仪表。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/c4b08ad87310ea27bc06383257cc7f8f.png)|![图片不存在](./Python/media/4b024c34465b366d3067277b397e5fc0.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|LCD_128X32_DOT*1|热敏电阻*1|
|![图片不存在](./Python/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Python/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| ![图片不存在](./Python/media/4107849550a2c6d09592b2a28e291b54.png) |
|10KΩ电阻*1|4P转杜邦线公单*1|USB 线*1|跳线若干 |

**3.元件知识：**

**热敏电阻：** 热敏电阻是一种温度敏感电阻。当热敏电阻感应到温度的变化时，它的电阻就会发生变化。我们可以利用热敏电阻的这种特性来检测温度强度。热敏电阻及其电子符号如下所示。

![图片不存在](./Python/media/4da14068ab4c20e5e807fdd08a82466f.png)

热敏电阻的电阻值与温度的关系为：

![图片不存在](./Python/media/4efb34b50f2cdb5b2ed6f351ce475474.png)

式中：

Rt为热敏电阻在T2温度下的电阻；

R为热敏电阻在T1温度下的标称阻值；

EXP[n]是e的n次幂；

B为温度指数；

T1，T2是开尔文温度(绝对温度)，开尔文温度=273.15 +摄氏温度。对于热敏电阻的参数，我们使用：B=3950, R=10KΩ，T1=25℃。热敏电阻的电路连接方法与光敏电阻类似，如下所示：

![图片不存在](./Python/media/1ac82d185d19f35348be2eec7717d721.png)

我们可以利用ADC转换器测得的值来得到热敏电阻的电阻值，然后利用公式来得到温度值。因此，温度公式可以推导为：

![图片不存在](./Python/media/7a610a5fe8f27e2000432bcef2f765e9.png)

**4.读取热敏电阻的值：**

首先我们学习热敏电阻读取当前的ADC值、电压值和温度值并将其打印出来。请按下面的接线图接好线：

![图片不存在](./Python/media/aa12d903640a4b579c986272f0f7e163.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目31 温度仪表”。并鼠标左键双击“Project_31.1_Read_the_thermistor_analog_value.py”。

![图片不存在](./Python/media/864c4fafccadaac887a19e6b71f3eb90.png)

```
from machine import Pin, ADC
import time
import math

##设置 ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

try:
    while True:
        adcValue = adc.read()
        voltage = adcValue / 4095 * 3.3
        Rt = 10 * voltage / (3.3-voltage)
        tempK = (1 / (1 / (273.15+25) + (math.log(Rt/10)) / 3950))
        tempC = (tempK - 273.15)
        print("ADC value:",adcValue,"  Voltage:",voltage,"V","  Temperature: ",tempC,"C");
        time.sleep(1)
except:
    pass

```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/82d445d2e03beaf6ccae32d1e66e9413.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：Thonny IDE下的”Shell”窗口将不断显示热敏电阻当前的ADC值、电压值和温度值。试着用食指和拇指捏一下热敏电阻(不要碰触导线)一小段时间，你应该会看到温度值增加。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/6fd8696ee4ab07857db3d5350ddc12f3.png)

![图片不存在](./Python/media/dce1be02bd4a913ba8983434cd1cf3ca.png)

**5.温度仪表的接线图：**

![图片不存在](./Python/media/5b77fc42f5fa8ab213447116da53f777.png)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目31 温度仪表”。分别选择“lcd128_32.py”和 “lcd128_32_fonts.py”，右键单击鼠标选择 “上传到/”，等待“lcd128_32.py”和 “lcd128_32_fonts.py”被上传到ESP32。并鼠标左键双击“Project_31.2_Temperature_Instrument.py”。

![图片不存在](./Python/media/439b77554cba3916ad51f26e0c35529f.png)

![图片不存在](./Python/media/a9fb106eb24574831aa9ebd5608edefe.png)

![图片不存在](./Python/media/41183c9fca8f5d7430d35d7f7b1b174c.png)

```
from machine import Pin, ADC, I2C
import machine
import time
import math
import lcd128_32_fonts
from lcd128_32 import lcd128_32

##设置 ADC
adc=ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

##i2c配置
clock_pin = 22
data_pin = 21
bus = 0
i2c_addr = 0x3f
use_i2c = True

def scan_for_devices():
    i2c = machine.I2C(bus,sda=machine.Pin(data_pin),scl=machine.Pin(clock_pin))
    devices = i2c.scan()
    if devices:
        for d in devices:
            print(hex(d))
    else:
        print('no i2c devices')
        
try:
    while True:
        adcValue = adc.read()
        voltage = adcValue / 4095 * 3.3
        Rt = 10 * voltage / (3.3-voltage)
        tempK = (1 / (1 / (273.15+25) + (math.log(Rt/10)) / 3950))
        tempC = int(tempK - 273.15)        
        if use_i2c:
            scan_for_devices()
            lcd = lcd128_32(data_pin, clock_pin, bus, i2c_addr)  
        lcd.Clear()
        lcd.Cursor(0, 0)
        lcd.Display("Voltage:")
        lcd.Cursor(0, 8)
        lcd.Display(str(voltage))
        lcd.Cursor(0, 20)
        lcd.Display("V")
        lcd.Cursor(2, 0)
        lcd.Display("Temperature:")
        lcd.Cursor(2, 12)
        lcd.Display(str(tempC))
        lcd.Cursor(2, 15)
        lcd.Display("C")
        time.sleep(0.5)
except:
    pass
```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/137e09ecbccf0fbeeeb4b269e738c671.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：LCD 128X32 DOT的屏幕上显示热敏电阻的电压值和当前环境中的温度值。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/aec1ad0747b055ca6998b302eadfcfe9.png)

![图片不存在](./Python/media/073463d882655fe6ab03fdf8ed4c537b.png)








## 项目32 RFID

**1.实验介绍：**

现在很多小区的门使用了刷卡开门这个功能，非常的方便。这节课我们将学习使用RFID(射频识别)无线通信技术和对卡（钥匙扣/白卡）进行读、写操作及RFID-MFRC522模块控制舵机转动。   

**2.实验元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/fe4b5092b1dad906a629e878216e0bc2.png)|![图片不存在](./Python/media/bf6d1660c4a52edca11f5a7763edfc19.png)|![图片不存在](./Python/media/f717e9e3b952d9c0ea88e83493b82165.png)|
| :--: | :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|RFID-RC522模块*1|舵机*1|白卡*1|
|![图片不存在](./Python/media/4191d5454859076aa2a6c069185be177.png)|![图片不存在](./Python/media/e989c0ba5c3c1ea8c5fc08d02344da37.png)|![图片不存在](./Python/media/b4421594adeb4676d63581a1047c6935.png)| ![图片不存在](./Python/media/c42bb7177aeaa351a30fd0570c479064.png)| |
|4P转杜邦线公单*1|跳线若干|USB 线*1|钥匙扣*1 | |

**3.元件知识：**

**RFID：** 无线射频识别，读卡器由频射模块及高平磁场组成。Tag应答器为待感应设备，此设备不包含电池。他只包含微型集成电路芯片及存储数据的介质以及接收和发送信号的天线。读取tag中的数据，首先要放到读卡器的读取范围内。读卡器会产生一个磁场，因为磁能生电由楞次定律，RFID Tag就会供电，从而激活设备。

**RFID-RC522模块：** 采用Philips MFRC522原装芯片设计读卡电路，使用方便，成本低廉，适用于设备开发、读卡器开发等高级应用的用户、需要进行射频卡终端设计/生产的用户。本模块可直接装入各种读卡器模具。模块采用电压为5V,通过SPI接口简单的几条线就可以直接与用户任何CPU主板或单片机相连接通信。

![图片不存在](./Python/media/fe4b5092b1dad906a629e878216e0bc2.png)

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

![图片不存在](./Python/media/126658f003272a4e8822113111327d81.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目32 RFID”。分别选择“mfrc522_config.py”，“mfrc522_i2c.py”和“soft_iic.py”，右键单击鼠标选择 “上传到/”，等待“mfrc522_config.py”，“mfrc522_i2c.py”和“soft_iic.py”被上传到ESP32. 并鼠标左键双击“Project_32.1_RFID_Read_UID.py”。

![图片不存在](./Python/media/151e8b33390c1e0e4aa63e4a2d20e610.png)

![图片不存在](./Python/media/bcc6a96003c96cb4043da7efd642f3ab.png)

![图片不存在](./Python/media/3025e3c9a405bf826951add8dbc1c5f9.png)

![图片不存在](./Python/media/4a253eea469a30290f9843b7edd1debc.png)

```
import machine
import time
from mfrc522_i2c import mfrc522

##i2c配置
addr = 0x28
scl = 22
sda = 21
    
rc522 = mfrc522(scl, sda, addr)
rc522.PCD_Init()
rc522.ShowReaderDetails()            # 显示PCD - MFRC522读卡器详细信息

while True:
    if rc522.PICC_IsNewCardPresent():
        #print("Is new card present!")
        if rc522.PICC_ReadCardSerial() == True:
            print("Card UID:")
            print(rc522.uid.uidByte[0 : rc522.uid.size])
    #time.sleep(1)
```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/ec814357ead6e63adfba9a8425d9297e.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：将门卡和钥匙扣分别靠近模块感应区，Thonny IDE下的”Shell”窗口将分别显示门卡和钥匙扣的卡号值，如下图所示。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/7402f454e33f3ac5c0424d81a1156b74.png)

![图片不存在](./Python/media/de3539b2787b40bbdf3976052e25291e.png)

<span style="color: rgb(255, 76, 65);">特别注意：对于不同的RFID-RC522的白卡和钥匙扣，其门白卡值和钥匙扣可能都不一样。</span>

**5.RFID MFRC522的接线图：**

现在使用RFID-RC522模块、白卡/钥匙扣和舵机模拟做一个智能门禁系统。当白卡/钥匙扣靠近RFID-RC522模块感应区舵机转动。按照下图进行接线。

![图片不存在](./Python/media/c39c768548f74c5d02917906dad73bfa.png)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目32 RFID”。分别选择“mfrc522_config.py”，“mfrc522_i2c.py”和“soft_iic.py”，右键单击鼠标选择 “上传到/”，等待“mfrc522_config.py”，“mfrc522_i2c.py”和“soft_iic.py”被上传到ESP32. 并鼠标左键双击“Project_32.2_RFID_Control_Servo.py”。

![图片不存在](./Python/media/151e8b33390c1e0e4aa63e4a2d20e610.png)

![图片不存在](./Python/media/bcc6a96003c96cb4043da7efd642f3ab.png)

![图片不存在](./Python/media/3025e3c9a405bf826951add8dbc1c5f9.png)

![图片不存在](./Python/media/870a1d296847544449aa407491f264a0.png)

```
from machine import Pin, PWM
import time
from mfrc522_i2c import mfrc522

##定义GPIO15的输出频率为50Hz，分配给PWM
servoPin = PWM(Pin(15)) 
servoPin.freq(50)
servoPin.duty(256)

##i2c config
addr = 0x28
scl = 22
sda = 21
    
rc522 = mfrc522(scl, sda, addr)
rc522.PCD_Init()
rc522.ShowReaderDetails()            # 显示PCD - MFRC522读卡器详细信息

uid1 = [147, 173, 247, 32]
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
```
<span style="color: rgb(255, 76, 65);">特别注意：</span>对于不同的RFID-RC522模块，白卡和钥匙扣，其RFID-RC522模块读取的白卡和钥匙扣的uid1值和uid2值可能都不一样。你们将自己的RFID-RC522模块读取的白卡和钥匙扣的uid1值和uid2值替换程序代码中对应的白卡和钥匙扣的uid1值和uid2值，要不然单击“Run current script”运行代码可能会导致你自己的白卡和钥匙扣控制不了舵机。

例如: 你把程序代码![图片不存在](./Python/media/f53502693b4b0e240deface80e47de97.png)中的uid1值和uid2值替换成你自己的RFID-RC522模块读取的白卡和钥匙扣值。

**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/b8585a1d33787425a90821daeeb5cfc8.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：当使用白卡或者钥匙卡刷卡时，Thonny IDE下的”Shell”窗口将分别显示门卡和钥匙扣的卡号值，同时舵机转动到对应的角度模拟开门。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/7ad0b0d079cc925909f656fede8bb5cd.png)

![图片不存在](./Python/media/6a8a9ff0dfcda5ec9cc6df8902cde905.png)








## 项目33 密码锁

**1.项目介绍：**

常用的数字按钮传感器，一个按钮就使用一个IO口，而有时我们需要的按钮比较多时，就会占用过多的IO口，为了节省IO口的使用，把多个按钮做成了矩阵类型，通过行列线的控制，实现少IO口控制多个按钮。在本项目中，我们将来学习ESP32和薄膜4*4矩阵键盘控制舵机和蜂鸣器。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/bf6d1660c4a52edca11f5a7763edfc19.png)|
| :--: | :--: | :--: | 
|ESP32*1|面包板*1|舵机*1|
|![图片不存在](./Python/media/f24b38efbf074e280038b7cc3584a197.png)|![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)|![图片不存在](./Python/media/4107849550a2c6d09592b2a28e291b54.png) |
|薄膜4×4矩阵键盘*1|USB 线*1| 跳线若干| 
|![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)|![图片不存在](./Python/media/a802ce7dc086858873e587c19b45578d.png)|![图片不存在](./Python/media/a487df5effb3b0ae28e7601cad88c97b.png)|
|NPN型晶体管(S8050)*1|有源蜂鸣器*1|1KΩ电阻*1|

**3.元件知识：**

**4×4矩阵键盘：** 键盘是一种集成了许多键的设备。如下图所示，一个4x4键盘集成16个键。

![图片不存在](./Python/media/f24b38efbf074e280038b7cc3584a197.png)

与LED矩阵集成一样，在4x4键盘中，每排键都是用一根引脚连接，每一列键都是一样的。这样的连接可以减少处理器端口的占用。内部电路如下所示。

![图片不存在](./Python/media/45d094d91edf32da8270ad56605aaf3d.png)  

使用方法类似于矩阵LED，即使用行扫描或列扫描方法检测每列或每行上的键的状态。以列扫描法为例，向第4列(Pin4)发送低电平，检测第1、2、3、4行电平状态，判断A、B、C、D键是否按下。然后依次将低电平发送到列3、2、1，检测是否有其它键被按下。然后，你可以获得所有键的状态。

**4.读取4*4矩阵键盘的键值：**

我们首先使用一个简单的代码读取4*4矩阵键盘的键值并将其打印出来，其接线图如下所示：

![图片不存在](./Python/media/32c62713f683fa76387e0e601584d300.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中
。
![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目33 密码锁”。选择“keypad\.py”，右键单击鼠标选择 “上传到/”，等待 “keypad\.py”被上传到ESP32. 并鼠标左键双击“Project_33.1_4x4_Matrix_Keypad_Display.py”。

![图片不存在](./Python/media/6a3b035eae74049c89f93cfea6e0bf7e.png)

![图片不存在](./Python/media/219d80478a9d342771b1dcc313779712.png)

```
## 导入 keypad 库.
from keypad import KeyPad
import time
## 将键盘模块与ESP32引脚关联. 
keyPad = KeyPad(22, 21, 19, 18, 17, 16, 4, 0)
##调用函数keyPan.scan()来获取所按键的值。一旦得到，就打印出来. 
def key():
    keyvalue = keyPad.scan()
    if keyvalue != None:
        print(keyvalue, end="\t")
        time.sleep_ms(300)
        return keyvalue
            
while True:
    key()

```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/a0317b146f35758a85a772ffaee8f85e.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：按下键盘，Thonny IDE下的”Shell”窗口将打印对应的键值，如下图所示。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/3b0f62651f6412ca31af912b153135c3.png)

![图片不存在](./Python/media/c48548a94b5fcf8564bd9d127005ee5e.png)

**5.密码锁的接线图：**

在上一实验中，我们已经知道了4×4矩阵键盘的键值，接下来，我们使用4×4矩阵键盘作为键盘来控制舵机和蜂鸣器。

![图片不存在](./Python/media/ff56adda27d93207163377bd85861a84.png)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目33 密码锁”。选择“keypad\.py”，右键单击鼠标选择 “上传到/”，等待 “keypad\.py”被上传到ESP32. 并鼠标左键双击“Project_33.2_Keypad_Door.py”。

![图片不存在](./Python/media/6a3b035eae74049c89f93cfea6e0bf7e.png)

![图片不存在](./Python/media/e809c96cea4e296c8dcce043af70415d.png)

```
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

## 定义数组并设置密码. 
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
## 当按下4个键时，判断密码是否正确。
## 如果正确，伺服将旋转90度，1秒后再转回来。
## 如果密码输入错误，蜂鸣器会长时间鸣叫一次，并清除keyInNum的值.        
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
```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/d144b664412f140a295d6aa823d6dda5.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：按键盘输入4个字符的密码，如果输入正确（正确密码：1234），舵机会转动一定角度，然后回到原来的位置。如果输入错误，将发出输入错误警报。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/3ebd0e402b825aa484e9531d341da41e.png)

![图片不存在](./Python/media/c2072768ea67c408754ce83b49cc3185.png)

![图片不存在](./Python/media/d0bd64ec0283d670b3eae0dc99c63720.png)


## 项目34 红外遥控控制声音和LED

**1.项目介绍：**

红外遥控是一种低成本、易于使用的无线通信技术。IR光与可见光非常相似，除了它的波长稍长一点。这意味着红外线是人眼无法检测到的，这对于无线通信来说是完美的。例如，当你按下电视遥控器上的一个按钮时，一个红外LED会以每秒38000次的频率反复开关，将信息(如音量或频道控制)传送到电视上的红外感光器。

我们将首先解释常见的红外通信协议是如何工作的。然后我们将从一个遥控器和一个红外接收组件开始这个项目。

**2.项目元件：**

|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|![图片不存在](./Python/media/a2aa343488c11843f13ae0413547c673.png)|![图片不存在](./Python/media/dc6163b527b2977fd9f897b541383a08.png)|![图片不存在](./Python/media/6de88c5b9c38d8ab879ae91eb51431b7.png)|
| :--: | :--: | :--: | :--: |
|ESP32*1|面包板*1|红外接收器*1|RGB LED*1|
|![图片不存在](./Python/media/a802ce7dc086858873e587c19b45578d.png)|![图片不存在](./Python/media/11f324f82f890b0691f134e1ea7a3765.png)|![图片不存在](./Python/media/a225cd286d071225ea0261768ac3f418.png)|![图片不存在](./Python/media/e209a5e6d89e9b4fab30e607922d769b.png) |
|有源蜂鸣器*1|220Ω电阻*3|10KΩ电阻*1|红外遥控器*1|
|![图片不存在](./Python/media/6c3a06627faa0d87dd69cbd361929240.png)|![图片不存在](./Python/media/d23956651d15073e880387c5a5419d80.png)|![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)|![图片不存在](./Python/media/4107849550a2c6d09592b2a28e291b54.png) |
|NPN型晶体管(S8050)*1|1kΩ电阻*1 |USB 线*1| 跳线若干|

**3.元件知识：**

**红外(IR)遥控器：** 是一种可以发射红外光信号的设备。按下不同的按钮，位于遥控器前端的红外发射管会发出不同指令的红外线。红外遥控技术应用广泛，如电视、空调等。因此，在当今科技发达社会，红外遥控技术使你切换电视节目和调节空调温度都很方便。

我们使用的遥控器如下所示：

![图片不存在](./Python/media/1e106ffcce219ed8acee00a1586fd473.png)

该红外遥控器采用NEC编码。

**红外(IR)接收器：** 它是一种元件，可以接收红外光，所以可以用它来接收红外遥控器发出的红外光信号。红外接收器解调接收到的红外光信号，并将其转换回二进制，然后将信息传递给微控制器。

红外信号调制过程图：

![图片不存在](./Python/media/4b390c4b310f1184bbcd46b601fb953f.png)

**4.解码红外信号：**

我们按照下面接线图将红外接收元件连接到ESP32。

![图片不存在](./Python/media/725871f174783cfa77a87a90f9dece9d.png)

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目34 红外遥控控制声音和LED”。选择“irrecvdata\.py”，右键单击选择 “上传到/”,等待“irrecvdata\.py”被上传到ESP32. 并鼠标左键双击“Project_34.1_Decoded_IR_Signal.py”。

![图片不存在](./Python/media/2efbef5c09778718b72744ada7095504.png)

![图片不存在](./Python/media/277cda5548211a3512496a087969d562.png)

```
## 导入红外解码器.
from irrecvdata import irGetCMD

## 将红外解码器与GP0关联.
recvPin = irGetCMD(0)

## 当获得红外键值时，在“Shell”中打印出来. 
try:
    while True:
        irValue = recvPin.ir_read() #调用ir_read()来读取所按键的值并将其赋值给IRValue.
        if irValue:
            print(irValue)
except:
    pass

```
确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/122c2e1a833f1976ed88f2e7465dfdfa.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：将红外遥控器发射器对准红外接收头，按下红外控制器上的按键，Thonny IDE下的”Shell”窗口将打印当前接收到的按键编码值。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/519878f9ff46abfa7fa803ac9c556fc0.png)

![图片不存在](./Python/media/77e36bde6fd2fb49733b988748008489.png)

写下红外遥控器与每个按键相关联的按键编码值，因为你稍后将需要这些信息。

![图片不存在](./Python/media/f5abdd5de7bb6a716a3b15ee29a4d023.png)

**5.红外遥控的接线图：**

![图片不存在](./Python/media/eb78662bb9f933558fba6f55c7aa67ea.png)

**6.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目34 红外遥控控制声音和LED”。选择“irrecvdata\.py”，右键单击选择 “上传到/”,等待“irrecvdata\.py”被上传到ESP32. 并鼠标左键双击“Project_34.2_IR_Control_Sound_And_LED.py”。

![图片不存在](./Python/media/2efbef5c09778718b72744ada7095504.png)

![图片不存在](./Python/media/13af2de078875bc546b41cd81ccdbe88.png)

```
from machine import Pin,PWM
import time
from irrecvdata import irGetCMD

##设置RGB的接口和频率
rgb_r = PWM(Pin(22))
rgb_g = PWM(Pin(21))
rgb_b = PWM(Pin(4))
rgb_r.freq(1000)
rgb_g.freq(1000)
rgb_b.freq(1000)
rgb_r.duty(0)
rgb_g.duty(0)
rgb_b.duty(0)
## 初始化蜂鸣器引脚 
buzzer=Pin(15, Pin.OUT)

##配置红外接收引脚和库
recvPin = irGetCMD(0)

while True:
    irValue = recvPin.ir_read() # 读取远程控制数据
 #  确定是否有满足需求的按钮 
    if irValue:
        print(irValue)
        buzzer.value(1)
        time.sleep(0.1)
        buzzer.value(0)
        if irValue == '0xff6897':   #1
           rgb_r.duty(1023)
           rgb_g.duty(0)
           rgb_b.duty(0)
           print('1')
        elif irValue == '0xff9867': #2
            rgb_r.duty(0)
            rgb_g.duty(1023)
            rgb_b.duty(0)
            print('2')
        elif irValue == '0xffb04f': #3
            rgb_r.duty(0)
            rgb_g.duty(0)
            rgb_b.duty(1023)
            print('3')
        elif irValue == '0xff30cf': #4
            rgb_r.duty(1023)
            rgb_g.duty(1023)
            rgb_b.duty(0)
            print('4')
        elif irValue == '0xff18e7': #5
            rgb_r.duty(1023)
            rgb_g.duty(0)
            rgb_b.duty(1023)
            print('5')
        elif irValue == '0xff7a85': #6
            rgb_r.duty(0)
            rgb_g.duty(1023)
            rgb_b.duty(1023)
            print('6')
        elif irValue == '0xff10ef': #7
            rgb_r.duty(1023)
            rgb_g.duty(1023)
            rgb_b.duty(1023)
            print('7') 
        else:
            rgb_r.duty(0)
            rgb_g.duty(0)
            rgb_b.duty(0)
```
**7.项目现象：**

确保ESP32已经连接到电脑上，单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)。

![图片不存在](./Python/media/4bfed55b4c644f2f5bdc658e17001ad2.png)

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，你会看到的现象是：按红外遥控器的1~7键，蜂鸣器都会鸣响一次，同时RGB分别亮红灯，绿灯，蓝灯，黄灯，洋红灯，蓝绿灯，白灯。按其他另一按键（除1-7键以外），RGB熄灭。按“Ctrl+C”或单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)退出程序。

![图片不存在](./Python/media/22c88ff340de04132074799e56b22b51.png)

<span style="color: rgb(255, 76, 65);">特别注意：</span>当代码在运行时有时候会出现以下类似提示语，只要鼠标先单击![图片不存在](./Python/media/a6fabb1fd771beb9a69907350f6832a1.png)，然后再单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)就可以使代码重新运行。

![图片不存在](./Python/media/3f4e55733a1dae5f674f2408b55de886.png)

![图片不存在](./Python/media/419ac23044525271d4824d4ecb78b727.png)






























## 项目35 WiFi 工作模式

在如今科技高速发展的时代，人们的生活质量越来越好，生活节奏越来越快，开始有人觉得复杂多样的智能化设备控制起来十分麻烦，通过手机统一控制智能化设备这种方法逐渐得到了人们的青睐。这种方法是利用单片机通过wifi模块和Internet网络建立手机和智能化设备之间的连接以此来实现对智能化设备的远程控制。在本章中，我们将重点关注ESP32的WiFi基础设施。ESP32有3种不同的WiFi工作模式：Station模式、AP模式和AP+Station模式。所有WiFi编程项目在使用WiFi前必须配置WiFi运行模式，否则无法使用WiFi。

**项目35.1: WIFI Station 模式**

**1.实验元件：**

|![图片不存在](./Python/media/2266d29566a875c35c2bd4be3e4a23f8.png)|![图片不存在](./Python/media/afc52f6616725ba37e3b12a2e01685ad.png)|
| :--: | :--: |
| USB 线 x1|ESP32x1|

**2.实验接线：**

使用USB线将ESP32主板连接到电脑上的USB口。

![图片不存在](./Python/media/3e0498944fc51e44b30bb90e2ae86b35.png)

**3.元件知识：** 

**Station 模式：** 当ESP32选择Station模式时，它作为一个WiFi客户端。它可以连接路由器网络，通过WiFi连接与路由器上的其他设备通信。如下图所示，PC和路由器已经连接，ESP32如果要与PC通信，需要将PC和路由器连接起来。

![图片不存在](./Python/media/227039c89f94a5ffbc04bca9f9e61e40.png)

**4.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目35 WiFi 工作模式”。 并鼠标左键双击“Project_35.1_WiFi_Station_Mode.py”。

![图片不存在](./Python/media/49b785c8e21e7d16d13f0af6e533dcf6.png)

```
import time
import network # 导入 network 库.

ssidRouter     = 'ChinaNet-2.4G-0DF0' # 输入路由器名称
passwordRouter = 'ChinaNet@233' # 输入路由器密码

def STA_Setup(ssidRouter,passwordRouter):
    print("Setup start")
    sta_if = network.WLAN(network.STA_IF) # 设置ESP32为“Station模式”.
    if not sta_if.isconnected():
        print('connecting to',ssidRouter)
  # 激活ESP32的站模式，向路由器发起连接请求
 # 并输入连接密码.      
        sta_if.active(True)
        sta_if.connect(ssidRouter,passwordRouter)
  #等待ESP32与路由器连接成功.      
        while not sta_if.isconnected():
            pass
  # 在Shell中打印分配给ESP32-WROVER的IP地址. 
    print('Connected, IP address:', sta_if.ifconfig())
    print("Setup End")

try:
    STA_Setup(ssidRouter,passwordRouter)
except:
    sta_if.disconnect()

```
**5.项目现象：**

由于各个地方的路由器名称和密码不同，所以在运行代码之前，用户需要在上图所示的红色框中输入正确的路由器名称和密码。

在确认正确输入路由器名和密码后，单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，等待ESP32连接到你的路由器，在“Shell”窗口中打印路由器分配给ESP32的IP地址。

![图片不存在](./Python/media/fd4853145b636ebda4bfbf1a427e2fba.png)

![图片不存在](./Python/media/a176d6c2026baa6d7b0a702f5ab9627e.png)


**项目35.2：WIFI AP 模式**

**1.实验元件&接线：**

实验元件和实验接线与上面的**项目35.1: WIFI Station 模式**相同。

**2.元件知识：**

**AP模式：** 当ESP32选择AP模式时，会创建一个独立于Internet的热点网络，等待其他WiFi设备连接。如下图所示，以ESP32为热点。如果手机或PC需要与ESP32通信，则必须连接到ESP32的热点。只有通过ESP32建立连接后才能进行通信。

![图片不存在](./Python/media/9117763df4e25fdca6bc7e576bc91ded.png)

**3.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目35 WiFi 工作模式”。 并鼠标左键双击“Project_35.2_WiFi_AP_Mode.py”。

![图片不存在](./Python/media/736ca5f13545aa02dbdd7720b7ddac3c.png)

```
import network #导入 network 库.

##请输入正确的路由器名称和密码.
ssidAP         = 'ESP32_Wifi' #输入AP名称
passwordAP     = '12345678'  #输入AP密码

local_IP       = '192.168.1.147'
gateway        = '192.168.1.1'
subnet         = '255.255.255.0'
dns            = '8.8.8.8'

##配置ESP32为AP模式.
ap_if = network.WLAN(network.AP_IF)

def AP_Setup(ssidAP,passwordAP):
    ap_if.ifconfig([local_IP,gateway,subnet,dns])
    print("Setting soft-AP  ... ")
    ap_if.config(essid=ssidAP,authmode=network.AUTH_WPA_WPA2_PSK, password=passwordAP)
    ap_if.active(True)
    print('Success, IP address:', ap_if.ifconfig())
    print("Setup End\n")

try:
    AP_Setup(ssidAP,passwordAP)
except:
    print("Failed, please disconnect the power and restart the operation.")
    ap_if.disconnect()
```
**4.项目现象：**

在程序代码运行之前，你可以像上图所示对红色框中ESP32的AP名称和密码进行任何更改。当然，在默认情况下，你也可以不修改它。

单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，打开ESP32的AP功能，“Shell”窗口中打印接入点信息。

![图片不存在](./Python/media/26dbf8d9e7bf5a3cb4b70b4dcf103b46.png)

![图片不存在](./Python/media/5098e039e67c98477b7266d61a1e8adf.png)

观察串口监视器打印信息时，打开手机WiFi扫描功能，可以看到ESP32上的ssid_AP被调用，在本程序代码中称为“ESP32_Wifi”。你可以输入密码“12345678”连接它，也可以通过修改程序代码来修改它的AP名称和密码。

![图片不存在](./Python/media/29b419a83fcc3ddcfa32f08296d8e9f7.png)

**项目35.3：WIFI AP+Station模式**

**1.实验元件&接线：**

实验元件和实验接线与上面的**项目35.1: WIFI Station 模式**和**项目35.2: WIFI AP 模式**相同。

**2.元件知识：**

**AP+Station模式：** ESP32除AP模式和Station模式外，还可以同时使用AP模式和Station模式。此模式包含前两种模式的功能。打开ESP32的Station模式，将其连接到路由器网络，它可以通过路由器与Internet通信。同时开启其AP模式，创建热点网络。其他WiFi设备可以选择连接路由器网络或热点网络与ESP32通信。

**3.项目代码：**

本教程中使用的代码保存在：“**..\程序代码\Python_代码**”的路径中。

![图片不存在](./Python/media/07136289f76a0932a80f00bcf8878de8.png)

你可以把代码移到任何地方。例如，我们将代码保存在**D盘**中，<span style="color: rgb(0, 209, 0);">路径为D:\2. 项目教程</span>。

![图片不存在](./Python/media/f1ef150917d08d30d272d3e2d31ad5d7.png)

打开“Thonny”软件，点击“此电脑”→“D:”→“2. 项目教程”→“项目35 WiFi 工作模式”。 并鼠标左键双击“Project_35.3_WiFi_Station+AP_Mode.py”。

![图片不存在](./Python/media/ff2767ba94e6be4d47b09bf557ed37a6.png)

```
import network #导入 network 库.

ssidRouter     = 'ChinaNet-2.4G-0DF0' #输入路由器名称
passwordRouter = 'ChinaNet@233' #输入路由器密码

ssidAP         = 'ESP32_Wifi'#输入AP名称
passwordAP     = '12345678' #输入AP密码

local_IP       = '192.168.4.147'
gateway        = '192.168.1.1'
subnet         = '255.255.255.0'
dns            = '8.8.8.8'

sta_if = network.WLAN(network.STA_IF)
ap_if = network.WLAN(network.AP_IF)
    
def STA_Setup(ssidRouter,passwordRouter):
    print("Setting soft-STA  ... ")
    if not sta_if.isconnected():
        print('connecting to',ssidRouter)
        sta_if.active(True)
        sta_if.connect(ssidRouter,passwordRouter)
        while not sta_if.isconnected():
            pass
    print('Connected, IP address:', sta_if.ifconfig())
    print("Setup End")
    
def AP_Setup(ssidAP,passwordAP):
    ap_if.ifconfig([local_IP,gateway,subnet,dns])
    print("Setting soft-AP  ... ")
    ap_if.config(essid=ssidAP,authmode=network.AUTH_WPA_WPA2_PSK, password=passwordAP)
    ap_if.active(True)
    print('Success, IP address:', ap_if.ifconfig())
    print("Setup End\n")

try:
    AP_Setup(ssidAP,passwordAP)    
    STA_Setup(ssidRouter,passwordRouter)
except:
    sta_if.disconnect()
    ap_if.idsconnect()
```
**4.项目现象：**

它类似于上面的**项目35.1**和**项目35.2**。在运行代码之前，你需要修改ssidRouter、passwordRouter、ssidAP和passwordAP，如上图中的红色框所示。在确保正确修改代码后，单击![图片不存在](./Python/media/9616c14ed0ecaf936963389291c6c68a.png)，代码开始执行，“Shell”窗口中将显示如下：

![图片不存在](./Python/media/505307127709c4bf655d1c684ad65cb8.png)

![图片不存在](./Python/media/6e4bd70fc2b13b9ee6e5884efe0196a3.png)

打开手机的WiFi搜索功能，可以在ESP32上看到ssid_AP被调用。

![图片不存在](./Python/media/29b419a83fcc3ddcfa32f08296d8e9f7.png)









