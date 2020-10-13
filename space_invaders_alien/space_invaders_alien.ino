#include <FastLED.h>
#define LED_PIN     6
#define NUM_LEDS    144
CRGB leds[NUM_LEDS];


void setup() 
{
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(200);

}


void loop() 
{
  //Animation sequence with just the aliens

  draw_alien(3,"down","white");
  draw_alien(3,"up","white");
  draw_alien(4,"down","white");
  draw_alien(4,"up","white");
  draw_alien(3,"down","white");
  draw_alien(3,"up","white");
  draw_alien(2,"down","white");
  draw_alien(2,"up","white");

  draw_alien(3,"down","green");
  draw_alien(3,"up","green");
  draw_alien(4,"down","green");
  draw_alien(4,"up","green");
  draw_alien(3,"down","green");
  draw_alien(3,"up","green");
  draw_alien(2,"down","green");
  draw_alien(2,"up","green");

  draw_alien(3,"down","purple");
  draw_alien(3,"up","purple");
  draw_alien(4,"down","purple");
  draw_alien(4,"up","purple");
  draw_alien(3,"down","purple");
  draw_alien(3,"up","purple");
  draw_alien(2,"down","purple");
  draw_alien(2,"up","purple");
}


int LED_map(int x, int y)
{
  int row = (12*(y-1));
  int column;

  if ((y%2) == 0){
    column = (12-(x-1));
  }
  else {
    column = x;
  }

  int snake_output = (row+column-1); //minus one cuz its an array
  return snake_output;

}

void draw_alien(int y,char arm_pos[], char colour[])
{
  //select colour
  int r;
  int g;
  int b;

  if (colour == "white")
  {
    r = 255;
    g = 255;
    b =255;
  }

  if (colour == "purple")
  {
    r = 102;
    g = 0;
    b =204;
  }

  if (colour == "green")
  {
    r = 124;
    g = 252;
    b = 0;
  }

  //clear display
  for (int i=0;i<=143;i++)
  {
    leds[i] = CRGB(0,0,0);
  }
 

  //draw position 1 in specified colour
  if (arm_pos == "down")
  {
    leds[LED_map(5,y)] = CRGB(r,g,b);
    leds[LED_map(8,y)] = CRGB(r,g,b);

    leds[LED_map(2,y+1)] = CRGB(r,g,b);
    leds[LED_map(4,y+1)] = CRGB(r,g,b);
    leds[LED_map(9,y+1)] = CRGB(r,g,b);
    leds[LED_map(11,y+1)] = CRGB(r,g,b);

    leds[LED_map(2,y+2)] = CRGB(r,g,b);
    leds[LED_map(4,y+2)] = CRGB(r,g,b);
    leds[LED_map(5,y+2)] = CRGB(r,g,b);
    leds[LED_map(6,y+2)] = CRGB(r,g,b);
    leds[LED_map(7,y+2)] = CRGB(r,g,b);
    leds[LED_map(8,y+2)] = CRGB(r,g,b);
    leds[LED_map(9,y+2)] = CRGB(r,g,b);
    leds[LED_map(11,y+2)] = CRGB(r,g,b);

    leds[LED_map(2,y+3)] = CRGB(r,g,b);
    leds[LED_map(3,y+3)] = CRGB(r,g,b);
    leds[LED_map(4,y+3)] = CRGB(r,g,b);
    leds[LED_map(5,y+3)] = CRGB(r,g,b);
    leds[LED_map(6,y+3)] = CRGB(r,g,b);
    leds[LED_map(7,y+3)] = CRGB(r,g,b);
    leds[LED_map(8,y+3)] = CRGB(r,g,b);
    leds[LED_map(9,y+3)] = CRGB(r,g,b);
    leds[LED_map(10,y+3)] = CRGB(r,g,b);
    leds[LED_map(11,y+3)] = CRGB(r,g,b);

    leds[LED_map(3,y+4)] = CRGB(r,g,b);
    leds[LED_map(4,y+4)] = CRGB(r,g,b);
    leds[LED_map(6,y+4)] = CRGB(r,g,b);
    leds[LED_map(7,y+4)] = CRGB(r,g,b);
    leds[LED_map(9,y+4)] = CRGB(r,g,b);
    leds[LED_map(10,y+4)] = CRGB(r,g,b);

    leds[LED_map(4,y+5)] = CRGB(r,g,b);
    leds[LED_map(5,y+5)] = CRGB(r,g,b);
    leds[LED_map(6,y+5)] = CRGB(r,g,b);
    leds[LED_map(7,y+5)] = CRGB(r,g,b);
    leds[LED_map(8,y+5)] = CRGB(r,g,b);
    leds[LED_map(9,y+5)] = CRGB(r,g,b);

    leds[LED_map(5,y+6)] = CRGB(r,g,b);
    leds[LED_map(8,y+6)] = CRGB(r,g,b);
    
    leds[LED_map(4,y+7)] = CRGB(r,g,b);
    leds[LED_map(9,y+7)] = CRGB(r,g,b);

    FastLED.show();
    delay(500);
  }

  //draw position 2 in specified colour
  else if (arm_pos == "up")
  {
    leds[LED_map(3,y)] = CRGB(r,g,b);
    leds[LED_map(10,y)] = CRGB(r,g,b);

    leds[LED_map(4,y+1)] = CRGB(r,g,b);
    leds[LED_map(9,y+1)] = CRGB(r,g,b);

    leds[LED_map(3,y+2)] = CRGB(r,g,b);
    leds[LED_map(4,y+2)] = CRGB(r,g,b);
    leds[LED_map(5,y+2)] = CRGB(r,g,b);
    leds[LED_map(6,y+2)] = CRGB(r,g,b);
    leds[LED_map(7,y+2)] = CRGB(r,g,b);
    leds[LED_map(8,y+2)] = CRGB(r,g,b);
    leds[LED_map(9,y+2)] = CRGB(r,g,b);
    leds[LED_map(10,y+2)] = CRGB(r,g,b);

    leds[LED_map(2,y+3)] = CRGB(r,g,b);
    leds[LED_map(3,y+3)] = CRGB(r,g,b);
    leds[LED_map(4,y+3)] = CRGB(r,g,b);
    leds[LED_map(5,y+3)] = CRGB(r,g,b);
    leds[LED_map(6,y+3)] = CRGB(r,g,b);
    leds[LED_map(7,y+3)] = CRGB(r,g,b);
    leds[LED_map(8,y+3)] = CRGB(r,g,b);
    leds[LED_map(9,y+3)] = CRGB(r,g,b);
    leds[LED_map(10,y+3)] = CRGB(r,g,b);
    leds[LED_map(11,y+3)] = CRGB(r,g,b);

    leds[LED_map(2,y+4)] = CRGB(r,g,b);
    leds[LED_map(3,y+4)] = CRGB(r,g,b);
    leds[LED_map(4,y+4)] = CRGB(r,g,b);
    leds[LED_map(6,y+4)] = CRGB(r,g,b);
    leds[LED_map(7,y+4)] = CRGB(r,g,b);
    leds[LED_map(9,y+4)] = CRGB(r,g,b);
    leds[LED_map(10,y+4)] = CRGB(r,g,b);
    leds[LED_map(11,y+4)] = CRGB(r,g,b);

    leds[LED_map(2,y+5)] = CRGB(r,g,b);
    leds[LED_map(4,y+5)] = CRGB(r,g,b);
    leds[LED_map(5,y+5)] = CRGB(r,g,b);
    leds[LED_map(6,y+5)] = CRGB(r,g,b);
    leds[LED_map(7,y+5)] = CRGB(r,g,b);
    leds[LED_map(8,y+5)] = CRGB(r,g,b);
    leds[LED_map(9,y+5)] = CRGB(r,g,b);
    leds[LED_map(11,y+5)] = CRGB(r,g,b);

    leds[LED_map(2,y+6)] = CRGB(r,g,b);
    leds[LED_map(5,y+6)] = CRGB(r,g,b);
    leds[LED_map(8,y+6)] = CRGB(r,g,b);
    leds[LED_map(11,y+6)] = CRGB(r,g,b);

    leds[LED_map(4,y+7)] = CRGB(r,g,b);
    leds[LED_map(9,y+7)] = CRGB(r,g,b);

    FastLED.show();
    delay(500);
  }
}






  



