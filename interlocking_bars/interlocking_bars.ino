#include <FastLED.h>
#define LED_PIN     6
#define NUM_LEDS    144
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(80);
}


void loop() {

  //pink horizontal
  for (int i = 1; i <= 12; i++) {
    //half going right
    leds[LED_map(i,1)] = CRGB (255, 105, 180);
    leds[LED_map(i,3)] = CRGB (255, 105, 180);
    leds[LED_map(i,5)] = CRGB (255, 105, 180);
    leds[LED_map(i,7)] = CRGB (255, 105, 180);
    leds[LED_map(i,9)] = CRGB (255, 105, 180);
    leds[LED_map(i,11)] = CRGB (255, 105, 180);
    //half going left
    leds[LED_map(13-i,2)] = CRGB (255, 105, 180);
    leds[LED_map(13-i,4)] = CRGB (255, 105, 180);
    leds[LED_map(13-i,6)] = CRGB (255, 105, 180);
    leds[LED_map(13-i,8)] = CRGB (255, 105, 180);
    leds[LED_map(13-i,10)] = CRGB (255, 105, 180);
    leds[LED_map(13-i,12)] = CRGB (255, 105, 180);
    
    FastLED.show();
    delay(125);
  }

  //blue vertical
  for (int i = 1; i <= 12; i++) {
    //half going up
    leds[LED_map(1,i)] = CRGB (0,191,255);
    leds[LED_map(3,i)] = CRGB (0,191,255);
    leds[LED_map(5,i)] = CRGB (0,191,255);
    leds[LED_map(7,i)] = CRGB (0,191,255);
    leds[LED_map(9,i)] = CRGB (0,191,255);
    leds[LED_map(11,i)] = CRGB (0,191,255);
    //half going down
    leds[LED_map(2,13-i)] = CRGB (0,191,255);
    leds[LED_map(4,13-i)] = CRGB (0,191,255);
    leds[LED_map(6,13-i)] = CRGB (0,191,255);
    leds[LED_map(8,13-i)] = CRGB (0,191,255);
    leds[LED_map(10,13-i)] = CRGB (0,191,255);
    leds[LED_map(12,13-i)] = CRGB (0,191,255);
    
    FastLED.show();
    delay(125);
  }
  
  //purple horizontal
  for (int i = 1; i <= 12; i++) {
    //half going right
    leds[LED_map(i,1)] = CRGB (138,43,226);
    leds[LED_map(i,3)] = CRGB (138,43,226);
    leds[LED_map(i,5)] = CRGB (138,43,226);
    leds[LED_map(i,7)] = CRGB (138,43,226);
    leds[LED_map(i,9)] = CRGB (138,43,226);
    leds[LED_map(i,11)] = CRGB (138,43,226);
    //half going left
    leds[LED_map(13-i,2)] = CRGB (138,43,226);
    leds[LED_map(13-i,4)] = CRGB (138,43,226);
    leds[LED_map(13-i,6)] = CRGB (138,43,226);
    leds[LED_map(13-i,8)] = CRGB (138,43,226);
    leds[LED_map(13-i,10)] = CRGB (138,43,226);
    leds[LED_map(13-i,12)] = CRGB (138,43,226);
    
    FastLED.show();
    delay(125);
  }

//green vertical
  for (int i = 1; i <= 12; i++) {
    //half going up
    leds[LED_map(1,i)] = CRGB (0,255,127);
    leds[LED_map(3,i)] = CRGB (0,255,127);
    leds[LED_map(5,i)] = CRGB (0,255,127);
    leds[LED_map(7,i)] = CRGB (0,255,127);
    leds[LED_map(9,i)] = CRGB (0,255,127);
    leds[LED_map(11,i)] = CRGB (0,255,127);
    //half going down
    leds[LED_map(2,13-i)] = CRGB (0,255,127);
    leds[LED_map(4,13-i)] = CRGB (0,255,127);
    leds[LED_map(6,13-i)] = CRGB (0,255,127);
    leds[LED_map(8,13-i)] = CRGB (0,255,127);
    leds[LED_map(10,13-i)] = CRGB (0,255,127);
    leds[LED_map(12,13-i)] = CRGB (0,255,127);
    
    FastLED.show();
    delay(125);
  }


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




