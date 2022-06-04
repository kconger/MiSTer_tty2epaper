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

//Logos
#include "logos/logo.h"
#include "logos/104x212/logos-104x212.h"  //104x212 3 Color Logos

String command = "";
String previousCommand = "";
bool prevMiSTerLogo = true;  // Help prevent unecessary MiSTer logo redraws

void setup()
{
  Serial.begin(115200);
  Serial.println();

  delay(100);
  //display.init(115200);
  display.init(115200, true, 2, false);

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
         Serial.println(command);
         if (previousCommand != command){
             if (command == "AcornElectron"){
                 prevMiSTerLogo = false;
                 drawLogo(AcornElectron_LOGO);
             } else if (command == "Amstrad"){
                 prevMiSTerLogo = false;
                 drawLogo(Amstrad_LOGO);
             } else if (command == "AO486"){
                 prevMiSTerLogo = false;
                 drawLogo(AO486_LOGO);
             } else if (command == "ARCHIE"){
                 prevMiSTerLogo = false;
                 drawLogo(Archie_LOGO);
             } else if (command == "Arcadia"){
                 prevMiSTerLogo = false;
                 drawLogo(Arcadia_LOGO);
             } else if (command == "Astrocade"){
                 prevMiSTerLogo = false;
                 drawLogo(Astrocade_LOGO);
             } else if (command == "ATARI5200"){
                 prevMiSTerLogo = false;
                 drawLogo(ATARI5200_LOGO);
             } else if (command == "ATARI7800"){
                 prevMiSTerLogo = false;
                 drawLogo(ATARI7800_LOGO);
             } else if (command == "AtariLynx"){
                 prevMiSTerLogo = false;
                 drawLogo(AtariLynx_LOGO);
             } else if (command == "AtariST"){
                 prevMiSTerLogo = false;
                 drawLogo(AtariST_LOGO);
             } else if (command == "BBCMicro"){
                 prevMiSTerLogo = false;
                 drawLogo(BBCMicro_LOGO);
             } else if (command == "ChannelF"){
                 prevMiSTerLogo = false;
                 drawLogo(ChannelF_LOGO);
             } else if (command == "Coleco"){
                 prevMiSTerLogo = false;
                 drawLogo(ColecoVision_LOGO);
             } else if (command == "C16"){
                 prevMiSTerLogo = false;
                 drawLogo(Commodore_LOGO);
             } else if (command == "C64"){
                 prevMiSTerLogo = false;
                 drawLogo(Commodore_LOGO);
             } else if (command == "Game & Watch"){
                 prevMiSTerLogo = false;
                 drawLogo(GAW_LOGO);
             } else if (command == "GAMEBOY"){
                 prevMiSTerLogo = false;
                 drawLogo(GAMEBOY_LOGO);
             } else if (command == "GAMEBOY2P"){
                 prevMiSTerLogo = false;
                 drawLogo(GAMEBOY_LOGO);
             } else if (command == "GBA"){
                 prevMiSTerLogo = false;
                 drawLogo(GBA_LOGO);
             } else if (command == "GBA2P"){
                 prevMiSTerLogo = false;
                 drawLogo(GBA_LOGO);
             } else if (command == "Genesis"){
                 prevMiSTerLogo = false;
                 drawLogo(Genesis_LOGO);
             } else if (command == "S32X"){
                 prevMiSTerLogo = false;
                 drawLogo(GEN32X_LOGO);
             } else if (command == "Intellivision"){
                 prevMiSTerLogo = false;
                 drawLogo(Intellivision_LOGO);
             } else if (command == "Jaguar"){
                 prevMiSTerLogo = false;
                 drawLogo(Jaguar_LOGO);
             } else if (command == "MEGACD"){
                 prevMiSTerLogo = false;
                 drawLogo(MEGACD_LOGO);
             } else if (command == "Minimig"){
                 prevMiSTerLogo = false;
                 drawLogo(Minimig_LOGO);
             } else if (command == "MSX"){
                 prevMiSTerLogo = false;
                 drawLogo(MSX_LOGO);
             } else if (command == "NEOGEO"){
                 prevMiSTerLogo = false;
                 drawLogo(NEOGEO_LOGO);
             } else if (command == "NES"){
                 prevMiSTerLogo = false;
                 drawLogo(NES_LOGO);
             } else if (command == "ODYSSEY2"){
                 prevMiSTerLogo = false;
                 drawLogo(Odyssey2_LOGO);
             } else if (command == "PC8801"){
                 prevMiSTerLogo = false;
                 drawLogo(PC8801_LOGO);
             } else if (command == "PSX"){
                 prevMiSTerLogo = false;
                 drawLogo(PSX_LOGO);
             } else if (command == "RX78"){
                 prevMiSTerLogo = false;
                 drawLogo(RX78_LOGO);
             } else if (command == "Saturn"){
                 prevMiSTerLogo = false;
                 drawLogo(Saturn_LOGO);
             } else if (command == "SMS"){
                 prevMiSTerLogo = false;
                 drawLogo(SMS_LOGO);
             } else if (command == "SNES"){
                 prevMiSTerLogo = false;
                 drawLogo(SNES_LOGO);
             } else if (command == "Sord M5"){
                 prevMiSTerLogo = false;
                 drawLogo(Sord_LOGO);
             } else if (command == "Spectrum"){
                 prevMiSTerLogo = false;
                 drawLogo(ZXSpectrum_LOGO);
             } else if (command == "TGFX16"){
                 prevMiSTerLogo = false;
                 drawLogo(TGFX16_LOGO);
             } else if (command == "TI-99_4A"){
                 prevMiSTerLogo = false;
                 drawLogo(TI994a_LOGO);
             } else if (command == "VC4000"){
                 prevMiSTerLogo = false;
                 drawLogo(VC4000_LOGO);
             } else if (command == "VIC20"){
                 prevMiSTerLogo = false;
                 drawLogo(VIC20_LOGO);
             } else if (command == "VECTREX"){
                 prevMiSTerLogo = false;
                 drawLogo(Vectrex_LOGO);
             } else if (command == "WonderSwan"){
                 prevMiSTerLogo = false;
                 drawLogo(WonderSwan_LOGO);
             } else if (command == "X68000"){
                 prevMiSTerLogo = false;
                 drawLogo(X68000_LOGO);
             } else if (command == "Zet98"){
                 prevMiSTerLogo = false;
                 drawLogo(PC9801_LOGO);
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
