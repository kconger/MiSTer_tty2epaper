[MiSTer_tty2epaper](https://github.com/kconger/MiSTer_tty2epaper) is an hardware and software module for the [MiSTer FPGA](https://github.com/MiSTer-devel) with [MiSTer Multisystem](https://rmcretro.store/multisystem-board-only/)

Currently it supports showing the logo of current the running core on a 2.13"(104x212) 3 Color ePaper display. If the current core logo isn't available the MiSTer logo is displayed.

Supported Hardware:
Waveshare 2.13"(104x212) 3 Color(BWR) ePaper display.
Adafruit QT Py - SAMD21 Dev Board or Seeduino XIAO M0

Linux/MiSTer service code from the [MiSTer_tty2oled](https://github.com/venice1200/MiSTer_tty2oled) project with minor modifications.

Install
-------

1) MiSTer Setup
Copy tty2epaper folder to root of your MiSTer_Data partition.

Add the following to the bottom of MiSTer_Data/linux/user-startup.sh

```
/media/fat/tty2epaper/S60tty2epaper start
```

2) Hardware Setup

Flash the Arduino sketch to the board using Arduino IDE

3) Assembly


