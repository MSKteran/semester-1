#include <Adafruit_NeoPixel.h>
#define PIN 6 // номер порта к которому подключен модуль
#define count_led 64// количество светодиодов 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(count_led, PIN, NEO_GRB + NEO_KHZ800); //first number change does distance between colors
void setup() {
  Serial.begin(9600);
  pixels.begin();
  pixels.show();
  int color[3]={255,20,147};
  int heart[8]={
    0b00000000,
    0b01100110,
    0b11111111,
    0b11111111,
    0b11111111,
    0b01111110,
    0b00111100,
    0b00011000
  };
  ShowArr(heart,color);
}

void loop() {
}

void ShowArr(int arr[8], int color[3])
{
  for (int i=0;i<4;i++)
  {
    int byte=1;
    for (int i2=0;i2<8;i2++)
    {
      if (arr[i*2]&byte)
      {
        pixels.setPixelColor((i*16)+i2, pixels.Color(color[0],color[1],color[2]));
      }
      else
      {
        pixels.setPixelColor((i*16)+i2, pixels.Color(0,0,0));
      }  
      byte=byte<<1; 
    }
    byte=byte>>1;
    for (int i2=7;i2>=0;i2--)
    {
      
      if (arr[(i*2)+1]&byte)
      {
        pixels.setPixelColor((i*16)+15-i2, pixels.Color(color[0],color[1],color[2]));
      }
      else
      {
        pixels.setPixelColor((i*16)+15-i2, pixels.Color(0,0,0));
      }  
      byte=byte>>1; 
    }
  }
  pixels.show();
}
