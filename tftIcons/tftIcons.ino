
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library


#include "bitmapsLarge.h"

// For the breakout, you can use any 2 or 3 pins
// These pins will also work for the 1.8" TFT shield
#define TFT_CS     15
#define TFT_RST    0  // you can also connect this to the Arduino reset
                      // in which case, set this #define pin to 0!
#define TFT_DC     2

#define bot 4 // Botão 1
#define bot2 5 // Botão 2
#define bot3 16 // Botão 3

int x =0; //Váriavel de transição de tela
int estado1;
int estado2;
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,  TFT_DC, TFT_RST);

void setup() 
{
  Serial.begin(115200);
  pinMode(bot, INPUT_PULLUP);
  pinMode(bot2, INPUT_PULLUP);
  pinMode(bot3, INPUT_PULLUP);



	tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);






//Case 2: Multi Colored Images/Icons
  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(evive_in_hand + buffidx));
      buffidx++;

     

    } // end pixel
  }
}


void loop() {
  

  if(!digitalRead(bot2))// Se apertar o botão de voltar, ele conta -1 da variavel e volta pra imagem anterior
  {
   x-- ;
   delay(400); 
    Serial.println(x);
  if (x == 1)
  {
  tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto1 + buffidx));
      buffidx++;
 } // end pixel
  }
 
        } 
    
    if (x == 2)
  {
   tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto2 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    
    if (x == 3)
  {
   tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto3 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 4)
  {
  tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto4 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 5)
  {
   tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto5 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 6)
  {
   tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto6 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 7)
  {
   tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto7 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    
     if (x == 8)
  {
    tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto8 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    if (x == -1)
  {
      x = 0;
        }  
  } 

  
  
  if(!digitalRead(bot))
  {
   x++ ;
   Serial.println(x);
   estado1 = digitalRead(bot);
   Serial.println(estado1);
   delay(1000);
 
    
    if (x == 1)
  {
    tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto1 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    
    if (x == 2)
  {
    int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto2 + buffidx));
      buffidx++;
        } 
        } 
    } 
    if (x == 3)
  {
    tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto3 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 4)
  {
    tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto4 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 5)
  {
    tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto5 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 6)
  {
    tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto6 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 7)
  {
    tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto7 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    
     if (x == 8)
  {
    tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto8 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    if (x == 9)
  {

      x = 0;
        }
  }



}
