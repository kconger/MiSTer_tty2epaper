/*
 *
 * MiSTer_tty2epaper
 * 
 */

struct logo_bwr
{
  const unsigned char* black;
  const unsigned char* red;
};

void drawLogo(logo_bwr logo)
{
  display.firstPage();
  do
  {
        display.fillScreen(GxEPD_WHITE);
        display.drawInvertedBitmap(0, 0, logo.black, display.epd2.WIDTH, display.epd2.HEIGHT, GxEPD_BLACK);
        display.drawInvertedBitmap(0, 0, logo.red, display.epd2.WIDTH, display.epd2.HEIGHT, GxEPD_RED);
  }
  while (display.nextPage());
}