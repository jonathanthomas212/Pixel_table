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
  pos2(1);
  pos1(2);
  pos1(3);
  pos1(4);
  pos2(5);
  pos2(6);
  pos2(7);
  nyan2();

  delay(300);

  //phase 2
  pos1(1);
  pos2(2);
  pos2(3);
  pos2(4);
  pos1(5);
  pos1(6);
  pos1(7);
  nyan1();

  delay(300);

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
leds[LED_map(col,1)] = CRGB(0,0,200);
leds[LED_map(col,2)] = CRGB(0,0,200);
leds[LED_map(col,3)] = CRGB(0,0,200);
leds[LED_map(col,4)] = CRGB(0,0,200);
leds[LED_map(col,5)] = CRGB(102,0,204);
leds[LED_map(col,6)] = CRGB(0,255,0);
leds[LED_map(col,7)] = CRGB(255,128,0);
leds[LED_map(col,8)] = CRGB(255,0,0);
leds[LED_map(col,9)] = CRGB(0,0,200);
leds[LED_map(col,10)] = CRGB(0,0,200);
leds[LED_map(col,11)] = CRGB(0,0,200);
leds[LED_map(col,12)] = CRGB(0,0,200);

FastLED.show();
}

void pos2(int col)
{
leds[LED_map(col,1)] = CRGB(0,0,200);
leds[LED_map(col,2)] = CRGB(0,0,200);
leds[LED_map(col,3)] = CRGB(0,0,200);
leds[LED_map(col,4)] = CRGB(102,0,204);
leds[LED_map(col,5)] = CRGB(0,255,0);
leds[LED_map(col,6)] = CRGB(255,128,0);
leds[LED_map(col,7)] = CRGB(255,0,0);
leds[LED_map(col,8)] = CRGB(0,0,200);
leds[LED_map(col,9)] = CRGB(0,0,200);
leds[LED_map(col,10)] = CRGB(0,0,200);
leds[LED_map(col,11)] = CRGB(0,0,200);
leds[LED_map(col,12)] = CRGB(0,0,200);
FastLED.show();
}

void nyan1()
{
  //body
leds[LED_map(8,5)] = CRGB(254,119,255);
leds[LED_map(9,5)] = CRGB(254,119,255);
leds[LED_map(8,6)] = CRGB(254,119,255);
leds[LED_map(9,6)] = CRGB(254,119,255);
leds[LED_map(8,7)] = CRGB(254,119,255);
leds[LED_map(9,7)] = CRGB(254,119,255);
leds[LED_map(10,7)] = CRGB(254,119,255);


//head
leds[LED_map(10,5)] = CRGB(2159,158,158);
leds[LED_map(10,6)] = CRGB(2159,158,158);
leds[LED_map(11,5)] = CRGB(2159,158,158);
leds[LED_map(11,6)] = CRGB(2159,158,158);

leds[LED_map(7,6)] = CRGB(2159,158,158);
leds[LED_map(7,4)] = CRGB(2159,158,158);
leds[LED_map(9,4)] = CRGB(2159,158,158);

//background
leds[LED_map(8,1)] = CRGB(0,0,200);
leds[LED_map(8,2)] = CRGB(0,0,200);
leds[LED_map(8,3)] = CRGB(0,0,200);
leds[LED_map(8,4)] = CRGB(0,0,200);
leds[LED_map(8,8)] = CRGB(0,0,200);
leds[LED_map(8,9)] = CRGB(0,0,200);
leds[LED_map(8,10)] = CRGB(0,0,200);
leds[LED_map(8,11)] = CRGB(0,0,200);
leds[LED_map(8,12)] = CRGB(0,0,200);
leds[LED_map(9,1)] = CRGB(0,0,200);
leds[LED_map(9,2)] = CRGB(0,0,200);
leds[LED_map(9,3)] = CRGB(0,0,200);
//leds[LED_map(9,4)] = CRGB(0,0,200);
leds[LED_map(9,8)] = CRGB(0,0,200);
leds[LED_map(9,9)] = CRGB(0,0,200);
leds[LED_map(9,10)] = CRGB(0,0,200);
leds[LED_map(9,11)] = CRGB(0,0,200);
leds[LED_map(9,12)] = CRGB(0,0,200);
leds[LED_map(10,1)] = CRGB(0,0,200);
leds[LED_map(10,2)] = CRGB(0,0,200);
leds[LED_map(10,3)] = CRGB(0,0,200);
leds[LED_map(10,4)] = CRGB(0,0,200);
leds[LED_map(10,8)] = CRGB(0,0,200);
leds[LED_map(10,9)] = CRGB(0,0,200);
leds[LED_map(10,10)] = CRGB(0,0,200);
leds[LED_map(10,11)] = CRGB(0,0,200);
leds[LED_map(10,12)] = CRGB(0,0,200);
leds[LED_map(11,1)] = CRGB(0,0,200);
leds[LED_map(11,2)] = CRGB(0,0,200);
leds[LED_map(11,3)] = CRGB(0,0,200);
leds[LED_map(11,4)] = CRGB(0,0,200);
leds[LED_map(11,7)] = CRGB(0,0,200);
leds[LED_map(11,8)] = CRGB(0,0,200);
leds[LED_map(11,9)] = CRGB(0,0,200);
leds[LED_map(11,10)] = CRGB(0,0,200);
leds[LED_map(11,11)] = CRGB(0,0,200);
leds[LED_map(11,12)] = CRGB(0,0,200);
leds[LED_map(12,1)] = CRGB(0,0,200);
leds[LED_map(12,2)] = CRGB(0,0,200);
leds[LED_map(12,3)] = CRGB(0,0,200);
leds[LED_map(12,4)] = CRGB(0,0,200);
leds[LED_map(12,5)] = CRGB(0,0,200);
leds[LED_map(12,6)] = CRGB(0,0,200);
leds[LED_map(12,7)] = CRGB(0,0,200);
leds[LED_map(12,8)] = CRGB(0,0,200);
leds[LED_map(12,9)] = CRGB(0,0,200);
leds[LED_map(12,10)] = CRGB(0,0,200);
leds[LED_map(12,11)] = CRGB(0,0,200);
leds[LED_map(12,12)] = CRGB(0,0,200);

FastLED.show();
}


void nyan2()
{
  //body
leds[LED_map(8,6)] = CRGB(254,119,255);
leds[LED_map(8,7)] = CRGB(254,119,255);
leds[LED_map(8,8)] = CRGB(254,119,255);
leds[LED_map(9,6)] = CRGB(254,119,255);
leds[LED_map(9,7)] = CRGB(254,119,255);
leds[LED_map(9,8)] = CRGB(254,119,255);
leds[LED_map(10,8)] = CRGB(254,119,255);


//head
leds[LED_map(10,6)] = CRGB(2159,158,158);
leds[LED_map(10,7)] = CRGB(2159,158,158);
leds[LED_map(11,6)] = CRGB(2159,158,158);
leds[LED_map(11,7)] = CRGB(2159,158,158);

leds[LED_map(7,6)] = CRGB(2159,158,158);
leds[LED_map(8,5)] = CRGB(2159,158,158);
leds[LED_map(10,5)] = CRGB(2159,158,158);

//background
leds[LED_map(8,1)] = CRGB(0,0,200);
leds[LED_map(8,2)] = CRGB(0,0,200);
leds[LED_map(8,3)] = CRGB(0,0,200);
leds[LED_map(8,4)] = CRGB(0,0,200);
//leds[LED_map(8,5)] = CRGB(0,0,200);
leds[LED_map(8,9)] = CRGB(0,0,200);
leds[LED_map(8,10)] = CRGB(0,0,200);
leds[LED_map(8,11)] = CRGB(0,0,200);
leds[LED_map(8,12)] = CRGB(0,0,200);
leds[LED_map(9,1)] = CRGB(0,0,200);
leds[LED_map(9,2)] = CRGB(0,0,200);
leds[LED_map(9,3)] = CRGB(0,0,200);
leds[LED_map(9,4)] = CRGB(0,0,200);
leds[LED_map(9,5)] = CRGB(0,0,200);
leds[LED_map(9,9)] = CRGB(0,0,200);
leds[LED_map(9,10)] = CRGB(0,0,200);
leds[LED_map(9,11)] = CRGB(0,0,200);
leds[LED_map(9,12)] = CRGB(0,0,200);
leds[LED_map(10,1)] = CRGB(0,0,200);
leds[LED_map(10,2)] = CRGB(0,0,200);
leds[LED_map(10,3)] = CRGB(0,0,200);
leds[LED_map(10,4)] = CRGB(0,0,200);
//leds[LED_map(10,5)] = CRGB(0,0,200);
leds[LED_map(10,9)] = CRGB(0,0,200);
leds[LED_map(10,10)] = CRGB(0,0,200);
leds[LED_map(10,11)] = CRGB(0,0,200);
leds[LED_map(10,12)] = CRGB(0,0,200);
leds[LED_map(11,1)] = CRGB(0,0,200);
leds[LED_map(11,2)] = CRGB(0,0,200);
leds[LED_map(11,3)] = CRGB(0,0,200);
leds[LED_map(11,4)] = CRGB(0,0,200);
leds[LED_map(11,5)] = CRGB(0,0,200);
leds[LED_map(11,8)] = CRGB(0,0,200);
leds[LED_map(11,9)] = CRGB(0,0,200);
leds[LED_map(11,10)] = CRGB(0,0,200);
leds[LED_map(11,11)] = CRGB(0,0,200);
leds[LED_map(11,12)] = CRGB(0,0,200);
leds[LED_map(12,1)] = CRGB(0,0,200);
leds[LED_map(12,2)] = CRGB(0,0,200);
leds[LED_map(12,3)] = CRGB(0,0,200);
leds[LED_map(12,4)] = CRGB(0,0,200);
leds[LED_map(12,5)] = CRGB(0,0,200);
leds[LED_map(12,6)] = CRGB(0,0,200);
leds[LED_map(12,7)] = CRGB(0,0,200);
leds[LED_map(12,8)] = CRGB(0,0,200);
leds[LED_map(12,9)] = CRGB(0,0,200);
leds[LED_map(12,10)] = CRGB(0,0,200);
leds[LED_map(12,11)] = CRGB(0,0,200);
leds[LED_map(12,12)] = CRGB(0,0,200);


FastLED.show();
}
