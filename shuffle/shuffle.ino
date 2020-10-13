#include <EEPROM.h>
#include <FastLED.h>

#define LED_PIN     6
#define NUM_LEDS    144
CRGB leds[NUM_LEDS];



void setup() 
{
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(150);
}




//pick random animation
int eeprom()
{
  int stored_val = EEPROM.read(0);
  int selection = ((stored_val + 3) % 7) + 1;
  EEPROM.update(0, selection);

  return selection;
}

int animation_select = eeprom();



void loop() 
{

  if (animation_select==1){ //pacman
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


  else if (animation_select==2){ //interlocking bars
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


  else if (animation_select==3){ //rainbow
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


  else if (animation_select==4){ //nyan cat
    //phase 1
    pos2_ny(1);
    pos1_ny(2);
    pos1_ny(3);
    pos1_ny(4);
    pos2_ny(5);
    pos2_ny(6);
    pos2_ny(7);
    nyan2();

    delay(300);

    //phase 2
    pos1_ny(1);
    pos2_ny(2);
    pos2_ny(3);
    pos2_ny(4);
    pos1_ny(5);
    pos1_ny(6);
    pos1_ny(7);
    nyan1();

    delay(300);
  }


  else if (animation_select==5){ //space invaders alien
    //Animation sequence with just the aliens
    draw_just_alien(3,"down","white");
    draw_just_alien(3,"up","white");
    draw_just_alien(4,"down","white");
    draw_just_alien(4,"up","white");
    draw_just_alien(3,"down","white");
    draw_just_alien(3,"up","white");
    draw_just_alien(2,"down","white");
    draw_just_alien(2,"up","white");

    draw_just_alien(3,"down","green");
    draw_just_alien(3,"up","green");
    draw_just_alien(4,"down","green");
    draw_just_alien(4,"up","green");
    draw_just_alien(3,"down","green");
    draw_just_alien(3,"up","green");
    draw_just_alien(2,"down","green");
    draw_just_alien(2,"up","green");

    draw_just_alien(3,"down","purple");
    draw_just_alien(3,"up","purple");
    draw_just_alien(4,"down","purple");
    draw_just_alien(4,"up","purple");
    draw_just_alien(3,"down","purple");
    draw_just_alien(3,"up","purple");
    draw_just_alien(2,"down","purple");
    draw_just_alien(2,"up","purple");
  }


  else if (animation_select==6){ //space invaders
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


  else //rocketship
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



void pos1_ny(int col)
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

void pos2_ny(int col)
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



void draw_just_alien(int y,char arm_pos[], char colour[])
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


  





  
