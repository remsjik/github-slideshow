

#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

#define cross_width 24
#define cross_height 24
static const unsigned char cross_bits[] U8X8_PROGMEM  = {
  0x00, 0x18, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0x00, 0x42, 0x00, 
  0x00, 0x42, 0x00, 0x00, 0x42, 0x00, 0x00, 0x81, 0x00, 0x00, 0x81, 0x00, 
  0xC0, 0x00, 0x03, 0x38, 0x3C, 0x1C, 0x06, 0x42, 0x60, 0x01, 0x42, 0x80, 
  0x01, 0x42, 0x80, 0x06, 0x42, 0x60, 0x38, 0x3C, 0x1C, 0xC0, 0x00, 0x03, 
  0x00, 0x81, 0x00, 0x00, 0x81, 0x00, 0x00, 0x42, 0x00, 0x00, 0x42, 0x00, 
  0x00, 0x42, 0x00, 0x00, 0x24, 0x00, 0x00, 0x24, 0x00, 0x00, 0x18, 0x00, };

#define cross_fill_width 24
#define cross_fill_height 24
static const unsigned char cross_fill_bits[] U8X8_PROGMEM  = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x18, 0x64, 0x00, 0x26, 
  0x84, 0x00, 0x21, 0x08, 0x81, 0x10, 0x08, 0x42, 0x10, 0x10, 0x3C, 0x08, 
  0x20, 0x00, 0x04, 0x40, 0x00, 0x02, 0x80, 0x00, 0x01, 0x80, 0x18, 0x01, 
  0x80, 0x18, 0x01, 0x80, 0x00, 0x01, 0x40, 0x00, 0x02, 0x20, 0x00, 0x04, 
  0x10, 0x3C, 0x08, 0x08, 0x42, 0x10, 0x08, 0x81, 0x10, 0x84, 0x00, 0x21, 
  0x64, 0x00, 0x26, 0x18, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, };

#define cross_block_width 14
#define cross_block_height 14
static const unsigned char cross_block_bits[] U8X8_PROGMEM  = {
  0xFF, 0x3F, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 
  0xC1, 0x20, 0xC1, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 0x01, 0x20, 
  0x01, 0x20, 0xFF, 0x3F, };



void setup(void)
{
  u8g2.begin();
}

void beephappy()
{
  u8g2.drawBox(99,48,9,3);    //linkervoet 
  u8g2.drawBox(105,42,3,6);   //linkerbeen
  u8g2.drawBox(114,48,9,3);   //rechtervoet
  u8g2.drawBox(114,42,3,6);   //rechterbeen
  u8g2.drawBox(99,39,21,3);   //lichaamonder
  u8g2.drawBox(96,15,3,24);   //lichaamlinks
  u8g2.drawBox(99,12,24,3);   //lichaamboven
  u8g2.drawBox(120,15,3,24);  //lichaamrechts
  u8g2.drawBox(102,21,6,3);   //ooglinks
  u8g2.drawBox(105,18,3,3);
  u8g2.drawBox(111,21,6,3);   //oogrechts
  u8g2.drawBox(114,18,3,3);
  u8g2.drawBox(102,27,3,3);   //mond
  u8g2.drawBox(105,30,9,3);
  u8g2.drawBox(114,27,3,3);
}
void beepneutraal()
{
  u8g2.drawBox(99,48,9,3);    //linkervoet 
  u8g2.drawBox(105,42,3,6);   //linkerbeen
  u8g2.drawBox(114,48,9,3);   //rechtervoet
  u8g2.drawBox(114,42,3,6);   //rechterbeen
  u8g2.drawBox(99,39,21,3);   //lichaamonder
  u8g2.drawBox(96,15,3,24);   //lichaamlinks
  u8g2.drawBox(99,12,24,3);   //lichaamboven
  u8g2.drawBox(120,15,3,24);  //lichaamrechts
  u8g2.drawBox(102,21,6,3);   //ooglinks
  u8g2.drawBox(105,18,3,3);
  u8g2.drawBox(111,21,6,3);   //oogrechts
  u8g2.drawBox(114,18,3,3); 
  u8g2.drawBox(102,30,12,3);   //mond
}
void beepsad()
{
  u8g2.drawBox(99,48,9,3);    //linkervoet 
  u8g2.drawBox(105,42,3,6);   //linkerbeen
  u8g2.drawBox(114,48,9,3);   //rechtervoet
  u8g2.drawBox(114,42,3,6);   //rechterbeen
  u8g2.drawBox(99,39,21,3);   //lichaamonder
  u8g2.drawBox(96,15,3,24);   //lichaamlinks
  u8g2.drawBox(99,12,24,3);   //lichaamboven
  u8g2.drawBox(120,15,3,24);  //lichaamrechts
  u8g2.drawBox(102,21,6,3);   //ooglinks
  u8g2.drawBox(105,18,3,3);
  u8g2.drawBox(111,21,6,3);   //oogrechts
  u8g2.drawBox(114,18,3,3);
  u8g2.drawBox(102,33,3,3);   //mond
  u8g2.drawBox(105,30,9,3);
  u8g2.drawBox(114,33,3,3);
}
void startscherm()
{
  
  u8g2.setFont(u8g2_font_fub20_tf);
  int x = 1;
  while (x < 16)
  {
  u8g2.clearBuffer();
  u8g2.drawStr(x,45,"BEEP");
  beepneutraal();
  u8g2.sendBuffer();
  x++;
  delay(75);
  }
  delay(75);
  u8g2.clearBuffer();
  u8g2.drawStr(16,45,"BEEP");
  beephappy(); 
}
void beep15minlopen()
{
  u8g2.setFont(u8g2_font_t0_11b_tf);
  beepneutraal();
  u8g2.drawRFrame(4,8,85,50,3);
  u8g2.drawStr(7,22,"Goed Gewerkt!");
  u8g2.drawStr(7,36,"ga even 15min");
  u8g2.drawStr(7,50,"wandelen.");
}

void beep5min()
{
  u8g2.setFont(u8g2_font_t0_11b_tf);
  beepneutraal();
  u8g2.drawRFrame(4,8,88,35,3);
  u8g2.drawStr(7,22,"neem even 5");
  u8g2.drawStr(7,36,"minuten pauze!");
  
}



void loop(void) {
  u8g2.clearBuffer();
  startscherm();
  u8g2.sendBuffer();
  delay(3000);
  u8g2.clearBuffer();
  beep15minlopen();
  u8g2.sendBuffer();
  delay(3000); 
  u8g2.clearBuffer();
  beep5min();
  u8g2.sendBuffer();
  delay(3000);
  u8g2.clearBuffer();
  beephappy();
  u8g2.sendBuffer();
  delay(3000);
  u8g2.clearBuffer();
  beepneutraal();
  u8g2.sendBuffer();
  delay(3000);
  u8g2.clearBuffer();
  beepsad();
  u8g2.sendBuffer();
  delay(3000);
  
  

}
