#include <FastLED.h>
#define LED_PIN     6
#define NUM_LEDS    144
CRGB leds[NUM_LEDS];


void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(100);

}


void loop() {

//phase 1
  pos4(1);
  pos1(2);
  pos1(3);
  pos2(4);
  pos2(5);
  pos3(6);
  pos3(7);
  pos4(8);
  pos4(9);
  pos1(10);
  pos1(11);
  pos2(12);
  delay(200);

//phase 2
  pos3(1);
  pos4(2);
  pos4(3);
  pos1(4);
  pos1(5);
  pos2(6);
  pos2(7);
  pos3(8);
  pos3(9);
  pos4(10);
  pos4(11);
  pos1(12);
  delay(200);

 //phase 3
  pos2(1);
  pos3(2);
  pos3(3);
  pos4(4);
  pos4(5);
  pos1(6);
  pos1(7);
  pos2(8);
  pos2(9);
  pos3(10);
  pos3(11);
  pos4(12);
  delay(200);

  //phase 1
  pos1(1);
  pos2(2);
  pos2(3);
  pos3(4);
  pos3(5);
  pos4(6);
  pos4(7);
  pos1(8);
  pos1(9);
  pos2(10);
  pos2(11);
  pos3(12);
  delay(200);

   
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

void pos1(int col)
{

leds[LED_map(col,1)] = CRGB(51,153,255);
leds[LED_map(col,2)] = CRGB(51,153,255);
leds[LED_map(col,3)] = CRGB(102,0,204);
leds[LED_map(col,4)] = CRGB(0,0,255);
leds[LED_map(col,5)] = CRGB(0,255,0);
leds[LED_map(col,6)] = CRGB(255,255,0);
leds[LED_map(col,7)] = CRGB(255,128,0);
leds[LED_map(col,8)] = CRGB(255,0,0);
leds[LED_map(col,9)] = CRGB(51,153,255);
leds[LED_map(col,10)] = CRGB(51,153,255);
leds[LED_map(col,11)] = CRGB(51,153,255);
leds[LED_map(col,12)] = CRGB(51,153,255);

FastLED.show();
}

void pos2(int col)
{
leds[LED_map(col,1)] = CRGB(51,153,255);
leds[LED_map(col,2)] = CRGB(51,153,255);
leds[LED_map(col,3)] = CRGB(51,153,255);
leds[LED_map(col,4)] = CRGB(102,0,204);
leds[LED_map(col,5)] = CRGB(0,0,255);
leds[LED_map(col,6)] = CRGB(0,255,0);
leds[LED_map(col,7)] = CRGB(255,255,0);
leds[LED_map(col,8)] = CRGB(255,128,0);
leds[LED_map(col,9)] = CRGB(255,0,0);
leds[LED_map(col,10)] = CRGB(51,153,255);
leds[LED_map(col,11)] = CRGB(51,153,255);
leds[LED_map(col,12)] = CRGB(51,153,255);

FastLED.show();
}

void pos3(int col)
{
leds[LED_map(col,1)] = CRGB(51,153,255);
leds[LED_map(col,2)] = CRGB(51,153,255);
leds[LED_map(col,3)] = CRGB(51,153,255);
leds[LED_map(col,4)] = CRGB(51,153,255);
leds[LED_map(col,5)] = CRGB(102,0,204);
leds[LED_map(col,6)] = CRGB(0,0,255);
leds[LED_map(col,7)] = CRGB(0,255,0);
leds[LED_map(col,8)] = CRGB(255,255,0);
leds[LED_map(col,9)] = CRGB(255,128,0);
leds[LED_map(col,10)] = CRGB(255,0,0);
leds[LED_map(col,11)] = CRGB(51,153,255);
leds[LED_map(col,12)] = CRGB(51,153,255);

FastLED.show();
}

void pos4(int col)
{
leds[LED_map(col,1)] = CRGB(51,153,255);
leds[LED_map(col,2)] = CRGB(51,153,255);
leds[LED_map(col,3)] = CRGB(51,153,255);
leds[LED_map(col,4)] = CRGB(102,0,204);
leds[LED_map(col,5)] = CRGB(0,0,255);
leds[LED_map(col,6)] = CRGB(0,255,0);
leds[LED_map(col,7)] = CRGB(255,255,0);
leds[LED_map(col,8)] = CRGB(255,128,0);
leds[LED_map(col,9)] = CRGB(255,0,0);
leds[LED_map(col,10)] = CRGB(51,153,255);
leds[LED_map(col,11)] = CRGB(51,153,255);
leds[LED_map(col,12)] = CRGB(51,153,255);

FastLED.show();
}










