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
  //animation sequence with aliens and ship
  
  animate_ship();

  draw_alien(2,"down","purple");
  draw_alien(3,"up","purple");
  draw_alien(4,"down","purple");
  draw_alien(3,"up","purple");
  draw_alien(2,"down","purple");

  animate_ship();

  draw_alien(2,"down","green");
  draw_alien(3,"up","green");
  draw_alien(4,"down","green");
  draw_alien(3,"up","green");
  draw_alien(2,"down","green");
  
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



void draw_ship(int x)
{
  //draw ship at specified x coordinate (starting left)
  leds[LED_map(x,2)] = CRGB(255,255,255);
  leds[LED_map(x+1,2)] = CRGB(255,255,255);
  leds[LED_map(x+2,2)] = CRGB(255,255,255);
  leds[LED_map(x,3)] = CRGB(255,255,255);
  leds[LED_map(x+1,3)] = CRGB(255,255,255);
  leds[LED_map(x+2,3)] = CRGB(255,255,255);
  leds[LED_map(x+1,4)] = CRGB(255,255,255);

  //FastLED.show();
}


void animate_ship()
{
  //initialize laser starting points
  int laser1 = 2;
  int laser2 = -2;

  //forward animation
  for(int i=2;i<=9;i++)
  {
     //clear display
    for (int i=0;i<=143;i++){
      leds[i] = CRGB(0,0,0);
    }


    //draw lasers if within bounds
    if (laser1>=5){
      leds[LED_map(6,laser1)] = CRGB(255,255,255);
    }
    laser1 ++;

    if (laser2>=5){
      leds[LED_map(10,laser2)] = CRGB(255,255,255);
    }
    laser2 ++;


    draw_ship(i);
    
    FastLED.show();
    delay(125);
  }

  //backward animation
  for(int i=9;i>=2;i--)
  {
     //clear display
    for (int i=0;i<=143;i++){
      leds[i] = CRGB(0,0,0);
    }


    //continue drawing lasers at point where left off
    if (laser1<=12){
      leds[LED_map(6,laser1)] = CRGB(255,255,255);
    }
    laser1 ++;
     if (laser2<=12){
      leds[LED_map(10,laser2)] = CRGB(255,255,255);
    }
    laser2 ++;


    draw_ship(i);

    FastLED.show();
    delay(125);
  }
}


  
