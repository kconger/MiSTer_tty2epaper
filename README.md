[MiSTer_tty2epaper](https://github.com/kconger/MiSTer_tty2epaper) is an hardware and software module for the [MiSTer FPGA](https://github.com/MiSTer-devel) with [MiSTer Multisystem](https://rmcretro.store/multisystem-board-only/)

This module displays the logo of current the running core on a 2.13"(104x212) 3 Color ePaper display. If the current core logo isn't available the MiSTer logo is displayed.

![MMS Install](https://github.com/kconger/MiSTer_tty2epaper/raw/master/photos/MMS-MiSTer_tty2epaper.jpg)

Requirements
-------

Hardware
- Waveshare 2.13"(104x212) 3 Color(BWR) ePaper display HAT.
- Adafruit QT Py - SAMD21 Dev Board or Seeduino XIAO M0
- MiSTer_tty2epaper PCB
- 40pin header
- Short USB-C male to USB-A male cable
- 3D printed part

Software
- Arduino
- GxEPD2 library
- Proper board support package for your chossen MCU

Linux/MiSTer service code from the [MiSTer_tty2oled](https://github.com/venice1200/MiSTer_tty2oled) project with minor modifications.

Install
-------

1. **MiSTer Setup**

Copy tty2epaper folder to root of your MiSTer_Data partition.

Add the following to the bottom of MiSTer_Data/linux/user-startup.sh

```
/media/fat/tty2epaper/S60tty2epaper start
```

2. **Hardware Setup**

Flash the Arduino sketch to the board using Arduino IDE

3. **Assemble**

Solder the 40pin header and MCU to the PCB.  The longer pins of the 40pin connector should be inserted into the side of the PCB labeled "Waveshare Hat".

![PCB Build Back](https://github.com/kconger/MiSTer_tty2epaper/raw/master/photos/pcb%20assembled-back.jpg)

The MCU should be soldered onto the opposite side of the PCB.

![PCB Build Front](https://github.com/kconger/MiSTer_tty2epaper/raw/master/photos/pcb%20assembled-front.jpg)

Connect the ePaper Hat to the PCB you just assembled.

![Electronics Assembled](https://github.com/kconger/MiSTer_tty2epaper/raw/master/photos/electronics%20assembled-back.jpg)

Slide the module into the 3D printer case and plug in the USB-C side of the cable into the MCU.

![Module Assembled](https://github.com/kconger/MiSTer_tty2epaper/raw/master/photos/complete%20assembly-back.jpg)

Plug in USB cable and install MiSTer_tty2epaper module into MiSTer Multisystem case.


