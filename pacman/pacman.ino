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
  red_ghost(1);
  red_ghost(2);
  red_ghost(1);
  red_ghost(2);
  red_ghost(1);
  red_ghost(2);
  red_ghost(1);
  red_ghost(2);
  red_ghost(1);
  red_ghost(2);

  blue_ghost(1);
  blue_ghost(2);
  blue_ghost(1);
  blue_ghost(2);
  blue_ghost(1);
  blue_ghost(2);
  blue_ghost(1);
  blue_ghost(2);
  blue_ghost(1);
  blue_ghost(2);
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





void red_ghost(int position)
{
  //draw red ghost in specified position
  
  //clear display
  for (int i=0;i<=143;i++){
    leds[i] = CRGB(0,0,0);
  }

  
  //draw body
  leds[LED_map(3,4)] = CRGB(255,0,0);
  leds[LED_map(3,5)] = CRGB(255,0,0);
  leds[LED_map(3,6)] = CRGB(255,0,0);
  leds[LED_map(3,7)] = CRGB(255,0,0);
  
  leds[LED_map(4,4)] = CRGB(255,0,0);
  leds[LED_map(4,5)] = CRGB(255,0,0);
  leds[LED_map(4,6)] = CRGB(255,0,0);
  leds[LED_map(4,7)] = CRGB(255,0,0);
  leds[LED_map(4,8)] = CRGB(255,0,0);
  leds[LED_map(4,9)] = CRGB(255,0,0);

  leds[LED_map(5,4)] = CRGB(255,0,0);
  leds[LED_map(5,5)] = CRGB(255,0,0);
  leds[LED_map(5,6)] = CRGB(255,255,255);
  leds[LED_map(5,7)] = CRGB(255,255,255);
  leds[LED_map(5,8)] = CRGB(255,255,255);
  leds[LED_map(5,9)] = CRGB(255,0,0);

  leds[LED_map(6,4)] = CRGB(255,0,0);
  leds[LED_map(6,5)] = CRGB(255,0,0);
  leds[LED_map(6,6)] = CRGB(255,255,255);
  leds[LED_map(6,7)] = CRGB(0,0,255);
  leds[LED_map(6,8)] = CRGB(255,255,255);
  leds[LED_map(6,9)] = CRGB(255,0,0);
  leds[LED_map(6,10)] = CRGB(255,0,0);

  leds[LED_map(7,4)] = CRGB(255,0,0);
  leds[LED_map(7,5)] = CRGB(255,0,0);
  leds[LED_map(7,6)] = CRGB(255,0,0);
  leds[LED_map(7,7)] = CRGB(255,0,0);
  leds[LED_map(7,8)] = CRGB(255,0,0);
  leds[LED_map(7,9)] = CRGB(255,0,0);
  leds[LED_map(7,10)] = CRGB(255,0,0);

  leds[LED_map(8,4)] = CRGB(255,0,0);
  leds[LED_map(8,5)] = CRGB(255,0,0);
  leds[LED_map(8,6)] = CRGB(255,255,255);
  leds[LED_map(8,7)] = CRGB(255,255,255);
  leds[LED_map(8,8)] = CRGB(255,255,255);
  leds[LED_map(8,9)] = CRGB(255,0,0);
  leds[LED_map(8,10)] = CRGB(255,0,0);

  leds[LED_map(9,4)] = CRGB(255,0,0);
  leds[LED_map(9,5)] = CRGB(255,0,0);
  leds[LED_map(9,6)] = CRGB(255,255,255);
  leds[LED_map(9,7)] = CRGB(0,0,255);
  leds[LED_map(9,8)] = CRGB(255,255,255);
  leds[LED_map(9,9)] = CRGB(255,0,0);

  leds[LED_map(10,4)] = CRGB(255,0,0);
  leds[LED_map(10,5)] = CRGB(255,0,0);
  leds[LED_map(10,6)] = CRGB(255,0,0);
  leds[LED_map(10,7)] = CRGB(255,0,0);
  leds[LED_map(10,8)] = CRGB(255,0,0);
  leds[LED_map(10,9)] = CRGB(255,0,0);

  leds[LED_map(11,4)] = CRGB(255,0,0);
  leds[LED_map(11,5)] = CRGB(255,0,0);
  leds[LED_map(11,6)] = CRGB(255,0,0);
  leds[LED_map(11,7)] = CRGB(255,0,0);




  //draw bottom for specified position
  if (position == 1)
  {
    leds[LED_map(3,2)] = CRGB(255,0,0);
    leds[LED_map(3,3)] = CRGB(255,0,0);

    leds[LED_map(4,3)] = CRGB(255,0,0);

    leds[LED_map(6,3)] = CRGB(255,0,0);

    leds[LED_map(7,2)] = CRGB(255,0,0);
    leds[LED_map(7,3)] = CRGB(255,0,0);

    leds[LED_map(8,3)] = CRGB(255,0,0);

    leds[LED_map(10,3)] = CRGB(255,0,0);

    leds[LED_map(11,2)] = CRGB(255,0,0);
    leds[LED_map(11,3)] = CRGB(255,0,0);
  }

  if (position == 2)
  {
    leds[LED_map(3,3)] = CRGB(255,0,0);

    leds[LED_map(5,3)] = CRGB(255,0,0);

    leds[LED_map(6,2)] = CRGB(255,0,0);
    leds[LED_map(6,3)] = CRGB(255,0,0);

    leds[LED_map(8,2)] = CRGB(255,0,0);
    leds[LED_map(8,3)] = CRGB(255,0,0);    

    leds[LED_map(9,3)] = CRGB(255,0,0);

    leds[LED_map(11,3)] = CRGB(255,0,0);
  }



  //show it
  FastLED.show();
  delay(200);
  
}






void blue_ghost(int position)
{
  //draw red ghost in specified position
  
  //clear display
  for (int i=0;i<=143;i++){
    leds[i] = CRGB(0,0,0);
  }

  
  //draw body
  leds[LED_map(2,4)] = CRGB(0,0,255);
  leds[LED_map(2,5)] = CRGB(0,0,255);
  leds[LED_map(2,6)] = CRGB(0,0,255);
  leds[LED_map(2,7)] = CRGB(0,0,255);
  
  leds[LED_map(3,4)] = CRGB(0,0,255);
  leds[LED_map(3,5)] = CRGB(255,255,255);
  leds[LED_map(3,6)] = CRGB(0,0,255);
  leds[LED_map(3,7)] = CRGB(0,0,255);
  leds[LED_map(3,8)] = CRGB(0,0,255);
  leds[LED_map(3,9)] = CRGB(0,0,255);

  leds[LED_map(4,4)] = CRGB(0,0,255);
  leds[LED_map(4,5)] = CRGB(0,0,255);
  leds[LED_map(4,6)] = CRGB(255,255,255);
  leds[LED_map(4,7)] = CRGB(0,0,255);
  leds[LED_map(4,8)] = CRGB(0,0,255);
  leds[LED_map(4,9)] = CRGB(0,0,255);

  leds[LED_map(5,4)] = CRGB(0,0,255);
  leds[LED_map(5,5)] = CRGB(255,255,255);
  leds[LED_map(5,6)] = CRGB(0,0,255);
  leds[LED_map(5,7)] = CRGB(0,0,255);
  leds[LED_map(5,8)] = CRGB(255,255,255);
  leds[LED_map(5,9)] = CRGB(0,0,255);
  leds[LED_map(5,10)] = CRGB(0,0,255);

  leds[LED_map(6,4)] = CRGB(0,0,255);
  leds[LED_map(6,5)] = CRGB(0,0,255);
  leds[LED_map(6,6)] = CRGB(255,255,255);
  leds[LED_map(6,7)] = CRGB(0,0,255);
  leds[LED_map(6,8)] = CRGB(0,0,255);
  leds[LED_map(6,9)] = CRGB(0,0,255);
  leds[LED_map(6,10)] = CRGB(0,0,255);

  leds[LED_map(7,4)] = CRGB(0,0,255);
  leds[LED_map(7,5)] = CRGB(255,255,255);
  leds[LED_map(7,6)] = CRGB(0,0,255);
  leds[LED_map(7,7)] = CRGB(0,0,255);
  leds[LED_map(7,8)] = CRGB(255,255,255);
  leds[LED_map(7,9)] = CRGB(0,0,255);
  leds[LED_map(7,10)] = CRGB(0,0,255);

  leds[LED_map(8,4)] = CRGB(0,0,255);
  leds[LED_map(8,5)] = CRGB(0,0,255);
  leds[LED_map(8,6)] = CRGB(255,255,255);
  leds[LED_map(8,7)] = CRGB(0,0,255);
  leds[LED_map(8,8)] = CRGB(0,0,255);
  leds[LED_map(8,9)] = CRGB(0,0,255);

  leds[LED_map(9,4)] = CRGB(0,0,255);
  leds[LED_map(9,5)] = CRGB(255,255,255);
  leds[LED_map(9,6)] = CRGB(0,0,255);
  leds[LED_map(9,7)] = CRGB(0,0,255);
  leds[LED_map(9,8)] = CRGB(0,0,255);
  leds[LED_map(9,9)] = CRGB(0,0,255);

  leds[LED_map(10,4)] = CRGB(0,0,255);
  leds[LED_map(10,5)] = CRGB(0,0,255);
  leds[LED_map(10,6)] = CRGB(0,0,255);
  leds[LED_map(10,7)] = CRGB(0,0,255);




//draw bottom for specified position
  if (position == 1)
  {
    leds[LED_map(2,2)] = CRGB(0,0,255);
    leds[LED_map(2,3)] = CRGB(0,0,255);

    leds[LED_map(3,3)] = CRGB(0,0,255);

    leds[LED_map(5,3)] = CRGB(0,0,255);

    leds[LED_map(6,2)] = CRGB(0,0,255);
    leds[LED_map(6,3)] = CRGB(0,0,255);

    leds[LED_map(7,3)] = CRGB(0,0,255);

    leds[LED_map(9,3)] = CRGB(0,0,255);

    leds[LED_map(10,2)] = CRGB(0,0,255);
    leds[LED_map(10,3)] = CRGB(0,0,255);
  }

  if (position == 2)
  {
    leds[LED_map(2,3)] = CRGB(0,0,255);

    leds[LED_map(4,3)] = CRGB(0,0,255);

    leds[LED_map(5,2)] = CRGB(0,0,255);
    leds[LED_map(5,3)] = CRGB(0,0,255);

    leds[LED_map(7,2)] = CRGB(0,0,255);
    leds[LED_map(7,3)] = CRGB(0,0,255);    

    leds[LED_map(8,3)] = CRGB(0,0,255);

    leds[LED_map(10,3)] = CRGB(0,0,255);
  }
  

  //show it
  FastLED.show();
  delay(200);
  
}








  
