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
    //initialize star starting points
    int star2 = 12;
    int star3 = 56;
    int star4 = 47;
    int star5 = 22;
    int star6 = 51;
    int star7 = 37;
    int star8 = 27;
    int star9 = 17;
    int star10 = 32;
    int star11 = 42;
   
    

  
  //global clock of 50 frames
   for(int clock=0;clock<=50;clock++)
  {
    //for each frame we clear the screen, calculate where everything goes, display it and wait 200ms


    //clear display
    for (int i=0;i<=143;i++){
      leds[i] = CRGB(0,0,0);
    }
    

    
    //draw stars if within bounds
    if ((star2>=1) && (star2<=12)){
    leds[LED_map(2,star2)] = CRGB(255,255,255);
    }
    star2 --;

    if ((star3>=1) && (star3<=12)){
    leds[LED_map(3,star3)] = CRGB(255,255,255);
    }
    star3 --;

    if ((star4>=1) && (star4<=12)){
    leds[LED_map(4,star4)] = CRGB(255,255,255);
    }
    star4 --;

    if ((star5>=1) && (star5<=12)){
    leds[LED_map(5,star5)] = CRGB(255,255,255);
    }
    star5 --;

    if ((star6>=1) && (star6<=12)){
    leds[LED_map(6,star6)] = CRGB(255,255,255);
    }
    star6 --;

    if ((star7>=1) && (star7<=12)){
    leds[LED_map(7,star7)] = CRGB(255,255,255);
    }
    star7 --;

    if ((star8>=1) && (star8<=12)){
    leds[LED_map(8,star8)] = CRGB(255,255,255);
    }
    star8 --;

    if ((star9>=1) && (star9<=12)){
    leds[LED_map(9,star9)] = CRGB(255,255,255);
    }
    star9 --;

    if ((star10>=1) && (star10<=12)){
    leds[LED_map(10,star10)] = CRGB(255,255,255);
    }
    star10 --;

    if ((star11>=1) && (star11<=12)){
    leds[LED_map(11,star11)] = CRGB(255,255,255);
    }
    star11 --;




    //rocketship clock of 10 frames
    int rocket_clock = (clock % 10);
    
    if(rocket_clock==0){
      draw_ship1(2);
    }
    if(rocket_clock==1){
      draw_ship2(3);
    }
    if(rocket_clock==2){
      draw_ship1(4);
    }
    if(rocket_clock==3){
      draw_ship2(5);
    }
    if(rocket_clock==4){
      draw_ship1(6);
    }
    if(rocket_clock==5){
      draw_ship2(7);
    }
    if(rocket_clock==6){
      draw_ship1(6);
    }
    if(rocket_clock==7){
      draw_ship2(5);
    }
    if(rocket_clock==8){
      draw_ship1(4);
    }
    if(rocket_clock==9){
      draw_ship2(3);
    }
    
    
    
    FastLED.show();
    delay(200);
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





void draw_ship1(int x)
{
  //draw ship at specified x coordinate (starting left)
  leds[LED_map(x,4)] = CRGB(255,0,0);
  leds[LED_map(x,5)] = CRGB(255,0,0);
  
  leds[LED_map(x+1,3)] = CRGB(50,25,0);
  leds[LED_map(x+1,4)] = CRGB(50,25,0);
  leds[LED_map(x+1,5)] = CRGB(255,255,255);
  leds[LED_map(x+1,6)] = CRGB(255,255,255);
  leds[LED_map(x+1,7)] = CRGB(255,255,255);
  leds[LED_map(x+1,8)] = CRGB(255,255,255);
  leds[LED_map(x+1,9)] = CRGB(255,0,0);

  leds[LED_map(x+2,2)] = CRGB(50,25,0);
  leds[LED_map(x+2,3)] = CRGB(50,25,0);
  leds[LED_map(x+2,4)] = CRGB(255,0,0);
  leds[LED_map(x+2,5)] = CRGB(255,0,0);
  leds[LED_map(x+2,6)] = CRGB(255,255,255);
  leds[LED_map(x+2,7)] = CRGB(0,0,255);
  leds[LED_map(x+2,8)] = CRGB(255,255,255);
  leds[LED_map(x+2,9)] = CRGB(255,0,0);
  leds[LED_map(x+2,10)] = CRGB(255,0,0);

  leds[LED_map(x+3,3)] = CRGB(50,25,0);
  leds[LED_map(x+3,4)] = CRGB(50,25,0);
  leds[LED_map(x+3,5)] = CRGB(255,255,255);
  leds[LED_map(x+3,6)] = CRGB(255,255,255);
  leds[LED_map(x+3,7)] = CRGB(255,255,255);
  leds[LED_map(x+3,8)] = CRGB(255,255,255);
  leds[LED_map(x+3,9)] = CRGB(255,0,0);

  leds[LED_map(x+4,4)] = CRGB(255,0,0);
  leds[LED_map(x+4,5)] = CRGB(255,0,0);

  //FastLED.show();
}



void draw_ship2(int x)
{
  //draw ship at specified x coordinate (starting left)
  leds[LED_map(x,4)] = CRGB(255,0,0);
  leds[LED_map(x,5)] = CRGB(255,0,0);
  
  leds[LED_map(x+1,3)] = CRGB(255,128,0);
  leds[LED_map(x+1,4)] = CRGB(255,128,0);
  leds[LED_map(x+1,5)] = CRGB(255,255,255);
  leds[LED_map(x+1,6)] = CRGB(255,255,255);
  leds[LED_map(x+1,7)] = CRGB(255,255,255);
  leds[LED_map(x+1,8)] = CRGB(255,255,255);
  leds[LED_map(x+1,9)] = CRGB(255,0,0);

  leds[LED_map(x+2,2)] = CRGB(255,128,0);
  leds[LED_map(x+2,3)] = CRGB(255,128,0);
  leds[LED_map(x+2,4)] = CRGB(255,0,0);
  leds[LED_map(x+2,5)] = CRGB(255,0,0);
  leds[LED_map(x+2,6)] = CRGB(255,255,255);
  leds[LED_map(x+2,7)] = CRGB(0,0,255);
  leds[LED_map(x+2,8)] = CRGB(255,255,255);
  leds[LED_map(x+2,9)] = CRGB(255,0,0);
  leds[LED_map(x+2,10)] = CRGB(255,0,0);

  leds[LED_map(x+3,3)] = CRGB(255,128,0);
  leds[LED_map(x+3,4)] = CRGB(255,128,0);
  leds[LED_map(x+3,5)] = CRGB(255,255,255);
  leds[LED_map(x+3,6)] = CRGB(255,255,255);
  leds[LED_map(x+3,7)] = CRGB(255,255,255);
  leds[LED_map(x+3,8)] = CRGB(255,255,255);
  leds[LED_map(x+3,9)] = CRGB(255,0,0);

  leds[LED_map(x+4,4)] = CRGB(255,0,0);
  leds[LED_map(x+4,5)] = CRGB(255,0,0);

  //FastLED.show();
}
