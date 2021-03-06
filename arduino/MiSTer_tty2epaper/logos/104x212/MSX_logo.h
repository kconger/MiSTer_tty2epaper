/**
 * MSX Logo (B/W)
 */

const unsigned char MSX_BLACK[] PROGMEM = { /* 0X00,0X01,0X68,0X00,0XD4,0X00, */
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,
    0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X01,0XFF,0XFE,0X00,0X1F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,
    0XFE,0X00,0X1F,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,
    0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XE0,0X00,
    0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFE,0X00,0X00,0X00,0X00,
    0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X01,
    0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,
    0X1F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,
    0XFF,0XFE,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XE0,
    0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,
    0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X01,0XFF,0XFE,
    0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFE,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XE0,0X01,0XFF,0XFE,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,
    0XFE,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,
    0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,
    0XFF,0XFE,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,
    0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,
    0X0F,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,
    0X01,0XFF,0XFE,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,
    0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X3F,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X03,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X01,0XFF,
    0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X01,0XFF,0XFE,0X00,0X1F,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XC0,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,
    0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X01,
    0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,
    0X1F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,
    0XFF,0XFF,0XFE,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XC0,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,
    0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X01,0XFF,0XFE,
    0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XFE,0X00,0X03,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XE0,0X01,0XFF,0XFE,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,
    0XFE,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,
    0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X7F,
    0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,
    0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,
    0XFF,0XFE,0X00,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,
    0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X00,0X0F,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,
    0X01,0XFF,0XFE,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,
    0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XF0,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,
    0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X01,0XFF,
    0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,
    0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,
    0XFF,0XC0,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,
    0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X01,
    0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,
    0X1F,0XFF,0XFF,0XF0,0X00,0X7F,0XF8,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,
    0X00,0X03,0XFF,0XFF,0X00,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF8,0X00,0X0F,0XFF,
    0XFF,0X80,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X00,0X1F,0XFF,0XFF,0XE0,0X00,
    0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X00,0X7F,0XFF,0XFF,0XF0,0X00,0X01,0XFF,0XFE,
    0X00,0X1F,0XFF,0XF0,0X00,0XFF,0XFF,0XFF,0XF8,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,
    0XF0,0X01,0XFF,0XFF,0XFF,0XFC,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X01,0XFF,
    0XFF,0XFF,0XFE,0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X03,0XFF,0XFF,0XFF,0XFE,
    0X00,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X07,0XFF,0XFF,0XFF,0XFF,0X00,0X01,0XFF,
    0XFE,0X00,0X1F,0XFF,0XF0,0X07,0XFF,0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XFE,0X00,0X1F,
    0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X0F,
    0XFF,0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,
    0XFF,0XC0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,0XFF,0XC0,0X01,
    0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X0F,0XFF,0XFF,0XFF,0XFF,0XC0,0X01,0XFF,0XFE,0X00,
    0X1F,0XFF,0XF0,0X0F,0XFF,0XF8,0X7F,0XFF,0XC0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,
    0X1F,0XFF,0XF0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XF0,
    0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XF0,0X3F,0XFF,0XE0,
    0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XE0,0X1F,0XFF,0XE0,0X01,0XFF,0XFE,
    0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,
    0XF0,0X1F,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,
    0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XE0,0X3F,0XFF,
    0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,
    0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,
    0XFF,0XF0,0X1F,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,
    0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XE0,0X3F,
    0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,
    0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,
    0X1F,0XFF,0XF0,0X1F,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,
    0X1F,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XE0,
    0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0XE0,0X3F,0XFF,0XE0,
    0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF8,0X3F,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,
    0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X0F,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,
    0XE0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XE0,0X3F,0XFF,
    0XE0,0X01,0XFF,0XFE,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XC0,0X3F,0XFF,0XE0,0X01,0XFF,
    0XFE,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XC0,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X07,
    0XFF,0XFF,0XFF,0XFF,0X80,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X03,0XFF,0XFF,0XFF,
    0XFF,0X80,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0X00,0X3F,
    0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0X00,0X3F,0XFF,0XE0,0X01,
    0XFF,0XFE,0X00,0X00,0XFF,0XFF,0XFF,0XFE,0X00,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,
    0X10,0X7F,0XFF,0XFF,0XFC,0X00,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1C,0X3F,0XFF,
    0XFF,0XF8,0X00,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1E,0X1F,0XFF,0XFF,0XE0,0X00,
    0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0X87,0XFF,0XFF,0XC0,0X00,0X3F,0XFF,0XE0,
    0X01,0XFF,0XFE,0X00,0X1F,0XC1,0XFF,0XFF,0X00,0X00,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,
    0X00,0X1F,0XE0,0X7F,0XFC,0X00,0X00,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XF8,
    0X00,0X00,0X00,0X00,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFC,0X00,0X00,0X00,
    0X00,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0X00,0X00,0X00,0X00,0X3F,0XFF,
    0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0X80,0X00,0X00,0X00,0X3F,0XFF,0XE0,0X01,0XFF,
    0XFE,0X00,0X1F,0XFF,0XE0,0X00,0X00,0X00,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,
    0XFF,0XF0,0X00,0X00,0X00,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XF8,0X00,
    0X00,0X00,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFE,0X00,0X00,0X00,0X3F,
    0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0X00,0X00,0X00,0XFF,0XFF,0XE0,0X01,
    0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XC0,0X00,0X01,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,
    0X1F,0XFF,0XFF,0XE0,0X00,0X07,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,
    0XF8,0X00,0X0F,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFC,0X00,0X3F,
    0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFE,0X00,0X7F,0XFF,0XFF,0XE0,
    0X01,0XFF,0XFE,0X00,0X0F,0XFF,0XFF,0XFF,0X81,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,
    0X00,0X07,0XFF,0XFF,0XFF,0XC3,0XFF,0XFF,0XFF,0XC0,0X01,0XFF,0XFE,0X00,0X01,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XFE,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFE,0X00,0X01,0XFF,0XFE,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
    0X00,0X01,0XFF,0XFE,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X01,0XFF,
    0XFE,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X01,0XFF,0XFE,0X00,0X00,
    0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0XFF,0XFF,
    0XFF,0XFF,0XFF,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFE,
    0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X01,
    0XFF,0XFE,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XFF,0XFE,0X00,
    0X00,0X00,0X03,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X03,
    0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X0F,0XFF,0XFF,0XFF,
    0XF8,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFC,0X00,0X00,
    0X01,0XFF,0XFE,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X01,0XFF,0XFE,
    0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X01,0XFF,0XFE,0X00,0X00,0X01,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X01,0XFF,0XFE,0X00,0X00,0X07,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XF0,0X00,0X01,0XFF,0XFE,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
    0X00,0X01,0XFF,0XFE,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X01,0XFF,
    0XFE,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X01,0XFF,0XFE,0X00,0X00,
    0XFF,0XFF,0XFF,0XF7,0XFF,0XFF,0XFF,0X80,0X01,0XFF,0XFE,0X00,0X03,0XFF,0XFF,0XFF,
    0XC1,0XFF,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X07,0XFF,0XFF,0XFF,0X80,0XFF,0XFF,
    0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X0F,0XFF,0XFF,0XFE,0X00,0X7F,0XFF,0XFF,0XE0,0X01,
    0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XFC,0X00,0X1F,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,
    0X1F,0XFF,0XFF,0XF0,0X00,0X0F,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,
    0XE0,0X00,0X03,0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0XC0,0X00,0X01,
    0XFF,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFF,0X00,0X00,0X00,0XFF,0XFF,0XE0,
    0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XFE,0X00,0X00,0X00,0X3F,0XFF,0XE0,0X01,0XFF,0XFE,
    0X00,0X1F,0XFF,0XF8,0X00,0X00,0X00,0X1F,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,
    0XF0,0X00,0X00,0X00,0X07,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0XE0,0X00,0X00,
    0X00,0X03,0XFF,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0X80,0X00,0X00,0X00,0X01,0XFF,
    0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XFF,0X00,0X00,0X00,0X00,0X00,0X7F,0XE0,0X01,0XFF,
    0XFE,0X00,0X1F,0XFC,0X00,0X00,0X00,0X00,0X00,0X3F,0XE0,0X01,0XFF,0XFE,0X00,0X1F,
    0XF8,0X00,0X00,0X00,0X00,0X00,0X0F,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XF0,0X00,0X00,
    0X00,0X00,0X00,0X07,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0XC0,0X00,0X00,0X00,0X00,0X00,
    0X01,0XE0,0X01,0XFF,0XFE,0X00,0X1F,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0XE0,0X01,
    0XFF,0XFE,0X00,0X1E,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X60,0X01,0XFF,0XFE,0X00,
    0X1C,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X18,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,
    0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X01,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X01,0XFF,};

const unsigned char MSX_RED[] PROGMEM = { /* 0X00,0X01,0X68,0X00,0XD4,0X00, */
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,};

logo_bwr MSX_LOGO = {MSX_BLACK, BLANK_LAYER};