/**
 * ColecoVision Logo (B/W/R)
 */
 
const unsigned char ColecoVision_BLACK[] PROGMEM = {/* 0X00,0X01,0X68,0X00,0XD4,0X00, */
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,
    0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XC0,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,
    0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,
    0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X3F,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
    0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
    0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,
    0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X3F,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
    0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,
    0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X3F,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
    0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,
    0X00,0X00,0X01,0X80,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X07,
    0X80,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X1F,0X80,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X3F,0X80,0X00,0X00,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X00,0X00,0XFF,0X80,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XE0,0X00,0X03,0XFF,0X80,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X07,
    0XFF,0X80,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X03,0XFF,0XC0,0X00,
    0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X01,0XFF,0XF0,0X00,0X00,0X01,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X7F,0XE0,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XE0,0X00,0X00,0X3F,0XE0,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,
    0X00,0X0F,0XC0,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X07,0XC0,
    0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X01,0X80,0X00,0X00,0X00,
    0X3F,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X80,0X00,0X00,0X00,0X3F,0XFF,0XFF,
    0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XC0,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
    0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
    0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,
    0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X3F,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
    0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,
    0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,
    0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
    0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,
    0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
    0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,
    0X00,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
    0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,
    0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
    0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X03,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,
    0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
    0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
    0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,
    0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
    0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
    0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
    0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,
    0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
    0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
    0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
    0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,
    0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFE,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,
    0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,
    0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,
    0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,
    0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,
    0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,
    0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,
    0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,
    0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,
    0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
    0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,
    0XFF,0XFF,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,
    0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,
    0X80,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0X80,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X0F,0X80,0X00,0X00,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0X80,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,
    0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,0X7F,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0X7F,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X00,0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XF0,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
    0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X0F,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,};

const unsigned char ColecoVision_RED[] PROGMEM = {/* 0X00,0X01,0X68,0X00,0XD4,0X00, */
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFC,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
    0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X01,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XF0,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X30,0X07,0XFC,
    0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X30,0X0F,0XFE,0X01,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XC0,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X30,0X1F,
    0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X30,0X1F,0XFF,0X01,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0X80,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X70,
    0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X01,0XF0,0X1F,0XFF,0X01,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X07,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XE0,0X00,0X1F,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0X80,0X00,0X3F,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0XFF,
    0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X03,0XFF,0XF0,0X1F,0XFF,
    0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X0F,0XFF,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFC,0X00,0X1F,0XFF,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFC,0X00,0X7F,0XFF,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X7F,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X3F,0XFF,0XFF,0XF0,0X00,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X0F,0XFF,0XFF,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFC,0X00,0X07,0XFF,0XFE,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,
    0X01,0XFF,0XFC,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0XFF,0XF8,
    0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X3F,0XF8,0X00,0X00,0X01,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X1F,0XF0,0X00,0X00,0X01,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFC,0X00,0X07,0XF0,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0X00,0X03,0XF0,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,
    0XF0,0X03,0XF8,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XE0,0X00,0X70,0X0F,0XFE,
    0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X30,0X0F,0XFF,0X01,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XC0,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X30,0X1F,
    0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X30,0X1F,0XFF,0X01,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XB0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
    0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
    0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,
    0X30,0X0F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X0F,0XFE,
    0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X03,0XF8,0X01,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFC,0X00,0X00,0X00,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XF0,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,
    0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X00,0X03,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X0F,0XFC,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFC,0X07,0XF0,0X03,0XFE,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,
    0XE0,0X01,0XFF,0X00,0X00,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0XC0,0X00,0XFF,
    0XE0,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X80,0X00,0X7F,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X80,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFC,0X07,0X80,0X00,0X7F,0X80,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
    0X07,0X81,0XC0,0X3E,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X81,0XC0,
    0X3C,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X81,0XC0,0X38,0X00,0X00,
    0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X81,0XC0,0X38,0X00,0X00,0X01,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFC,0X07,0X81,0XC0,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFC,0X07,0X01,0XC0,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X81,
    0XC0,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X81,0XC0,0X30,0X00,
    0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X81,0XC0,0X30,0X07,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X81,0XC0,0X30,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFC,0X07,0X81,0XC0,0X30,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,
    0X81,0XC0,0X30,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X81,0XC0,0X30,
    0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X81,0XC0,0X30,0X1F,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0X81,0XC0,0X30,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFC,0X07,0X81,0XC0,0X30,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
    0X07,0X01,0XC0,0X30,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X03,0X01,0XC0,
    0X30,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X01,0XC0,0X30,0X1F,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X01,0XC0,0X30,0X1F,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFE,0X00,0X03,0XC0,0X30,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFE,0X00,0X03,0XC0,0X30,0X1F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X07,
    0XC0,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X0F,0XC0,0X3F,0XF0,
    0X00,0X0D,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X1F,0XC0,0X3F,0X00,0X00,0X01,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0XFF,0XFF,0XFE,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XF8,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X38,
    0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X00,0X00,0X01,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
    0X00,0X00,0X00,0X30,0X02,0X03,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,
    0X30,0X0E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X0E,0X03,
    0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1E,0X03,0X81,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XF0,0X1E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XF0,0X1E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,0X0F,0XF0,0X1E,
    0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X00,0X03,0XF0,0X1E,0X03,0X81,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X01,0XF0,0X1E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0X00,0X00,0X00,0XF0,0X1E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,
    0X00,0X00,0X70,0X1E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X70,
    0X1E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X70,0X1E,0X03,0X81,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X70,0X1E,0X03,0X81,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
    0X00,0XFF,0X00,0X30,0X1E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X01,0XFF,0X80,
    0X30,0X1E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X03,0XFF,0XC0,0X30,0X1E,0X03,
    0X81,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X03,0XFF,0XC0,0X30,0X1E,0X03,0X81,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFC,0X07,0XFF,0XC0,0X30,0X1E,0X03,0X81,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFC,0X07,0XFF,0XC0,0X39,0XDE,0XD7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0XFF,
    0XC0,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0XFF,0XC0,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0XFF,0XC0,0X3F,0X80,0X00,0X3F,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0XFF,0XC0,0X3E,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFC,0X07,0XFF,0XC0,0X3C,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,
    0XFF,0XC0,0X38,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0XFF,0XC0,0X38,
    0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0XFF,0XC0,0X30,0X00,0X00,0X01,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X07,0XFF,0XC0,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFC,0X07,0XFF,0XC0,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
    0X03,0XFF,0XC0,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X01,0XFF,0X80,
    0X30,0X07,0XFC,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X20,0X00,0X30,0X0F,0XFE,
    0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFE,0X00,0X00,0X00,0X70,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,
    0X00,0X70,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0X00,0X00,0X00,0XF0,0X1F,
    0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X00,0XF0,0X1F,0XFF,0X01,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X00,0X01,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XC0,0X00,0X03,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,
    0X00,0X1F,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,
    0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X1F,0XFF,0X01,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
    0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,
    0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,
    0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFC,0X00,0X00,0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,
    0X00,0X3F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X3F,0XE0,
    0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X3F,0X00,0X00,0X1F,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X3E,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XC0,0X3C,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XC0,0X38,0X00,0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X38,
    0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X30,0X00,0X00,0X01,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X30,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XC0,0X30,0X01,0XF0,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,
    0X30,0X07,0XFE,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X30,0X0F,0XFF,
    0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X30,0X1F,0XFF,0X01,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XC0,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XC0,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XC0,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X80,0X30,0X1F,
    0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X30,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFC,0X00,0X00,0X00,0X70,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,
    0X00,0X00,0X70,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0X70,
    0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X00,0XF0,0X1F,0XFF,0X01,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X01,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFC,0X00,0X00,0X03,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,
    0X00,0X00,0X0F,0XF0,0X1F,0XFF,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XF0,0X0F,0XFE,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X03,0XF8,
    0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XF0,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XF8,0X00,0X00,0X01,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF8,0X00,
    0X00,0X03,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X03,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0X00,0X00,0X07,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X00,0X00,0X0F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XC0,0X00,0X7F,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
    0XFF,0XFF,0XFF,0XFF,};

logo_bwr ColecoVision_LOGO = {ColecoVision_BLACK, ColecoVision_RED};