Howto create new logos

Requirements
-------

Software
- [Inkscape](https://inkscape.org/)
- [Img2Lcd](https://www.waveshare.com/wiki/File:Image2Lcd.7z)

Logo Creation
-------

Open the "104x212_template.svg" in Inkscape.  

Import or create your logo and fit within the document.

Export a PNG of your design for each color.

Convert the PNG to JPG.

In Img2LCD open each JPG and convert with the following settings:

![Img2LCD Settings](https://github.com/kconger/MiSTer_tty2epaper/raw/master/photos/Image2LCD-Settings.jpg)

Make a copy of an existing Core logo.h file for your new logo. Rename all the variable names with your new logo name. Copy the array contents of the Img2LCD created .c files into the arrays of the new logo.h file. 

Add an include to the new logo in the "logo.h" file.

Add a case to display the new logo in "MiSTer_tty2epaper.ino"
