/**
 * MiSTer_tty2epaper
 * 
 * Displays logo of active MiSTer Core, if logo doesn't exist 
 * for the core it displays the MiSTer logo.
 * 
 * Send "<CORENAME>\n" over serial.
 * 
 */

//GxEPD2 Setup
#include <GxEPD2_3C.h>

//GxEPD2 Display Settings
#define GxEPD2_DISPLAY_CLASS GxEPD2_3C
#define GxEPD2_DRIVER_CLASS GxEPD2_213_Z19c // GDEW0213Z19 104x212, UC8151D

//GxEPD2 MCU Settings
#define MAX_DISPLAY_BUFFER_SIZE 15000ul // ~15k is a good compromise
#define MAX_HEIGHT(EPD) (EPD::HEIGHT <= (MAX_DISPLAY_BUFFER_SIZE / 2) / (EPD::WIDTH / 8) ? EPD::HEIGHT : (MAX_DISPLAY_BUFFER_SIZE / 2) / (EPD::WIDTH / 8))
GxEPD2_DISPLAY_CLASS<GxEPD2_DRIVER_CLASS, MAX_HEIGHT(GxEPD2_DRIVER_CLASS)> display(GxEPD2_DRIVER_CLASS(/*CS=4*/ 4, /*DC=*/ 2, /*RST=*/ 1, /*BUSY=*/ 0));

//#include "GxEPD2_display_selection_new_style.h"

//Logos
#include "logos/logo.h"
#include "logos/104x212/logos-104x212.h"  //104x212 Logos

String command = "";
String previousCommand = "";
bool prevMiSTerLogo = true;  // Help prevent unecessary MiSTer logo redraws

void setup()
{
  Serial.begin(115200);
  Serial.println();

  delay(100);
  display.init(115200);

  drawLogo(MISTER_LOGO);

  Serial.println("Startup Complete");
}

void loop()
{
  byte ch;
  if (Serial.available()) {
      ch = Serial.read();
      command += (char)ch;
      if (ch=='\n') {
         Serial.println("Command Received");
         command.trim();
         if (previousCommand != command){
             if (command == "ATARI2600"){
                 prevMiSTerLogo = false;
                 drawLogo(ATARI2600_LOGO);
             } else if (command == "ATARI5200"){
                 prevMiSTerLogo = false;
                 drawLogo(ATARI5200_LOGO);
             } else if (command == "ATARI7800"){
                 prevMiSTerLogo = false;
                 drawLogo(ATARI7800_LOGO);
             } else if (command == "AtariLynx"){
                 prevMiSTerLogo = false;
                 drawLogo(AtariLynx_LOGO);
             } else if (command == "GAMEBOY"){
                 prevMiSTerLogo = false;
                 drawLogo(GAMEBOY_LOGO);
             } else if (command == "GBA"){
                 prevMiSTerLogo = false;
                 drawLogo(GBA_LOGO);
             } else if (command == "Genesis"){
                 prevMiSTerLogo = false;
                 drawLogo(Genesis_LOGO);
             } else if (command == "MEGACD"){
                 prevMiSTerLogo = false;
                 drawLogo(MEGACD_LOGO);
             } else if (command == "NEOGEO"){
                 prevMiSTerLogo = false;
                 drawLogo(NEOGEO_LOGO);
             } else if (command == "NES"){
                 prevMiSTerLogo = false;
                 drawLogo(NES_LOGO);
             } else if (command == "SNES"){
                 prevMiSTerLogo = false;
                 drawLogo(SNES_LOGO);
             } else if (command == "SMS"){
                 prevMiSTerLogo = false;
                 drawLogo(SMS_LOGO);
             } else if (command == "TGFX16"){
                 prevMiSTerLogo = false;
                 drawLogo(TGFX16_LOGO);
             } else {
                 if (!prevMiSTerLogo) {
                     prevMiSTerLogo = true;
                     drawLogo(MISTER_LOGO);
                 }
             }
         }
         previousCommand = command;
         command = "";
      }
   }
}
