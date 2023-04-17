#define LEFTBUTTON 8
#define UPBUTTON 7
#define DOWNBUTTON 4
#define RIGHTBUTTON 2

#include <Keyboard.h>

//I made then static because othervise they use dynamic memory for some reason
static char left = 0;
static char up = 0;
static char down = 0;
static char right = 0;

void setup() {
  Keyboard.begin();
  pinMode(LEFTBUTTON, INPUT);
  pinMode(UPBUTTON, INPUT);
  pinMode(DOWNBUTTON, INPUT);
  pinMode(RIGHTBUTTON, INPUT);

}

void loop() {
  left = digitalRead(LEFTBUTTON);
  up = digitalRead(UPBUTTON);
  down = digitalRead(DOWNBUTTON);
  right = digitalRead(RIGHTBUTTON);

  if(left)
    Keyboard.press(KEY_LEFT_ARROW);
   else
    Keyboard.release(KEY_LEFT_ARROW);
    
  if(up)
    Keyboard.press(KEY_UP_ARROW);
  else
    Keyboard.release(KEY_UP_ARROW);
    
  if(down)
    Keyboard.press(KEY_DOWN_ARROW);
   else
    Keyboard.release(KEY_DOWN_ARROW);
    
  if(right)
    Keyboard.press(KEY_RIGHT_ARROW);
   else
    Keyboard.release(KEY_RIGHT_ARROW);
    
  //printState();
}

void printState(){
  Serial.print((left)? "L" : "0");
  Serial.print((up)? "U" : "0");
  Serial.print((down)? "D" : "0");
  Serial.println((right)? "R" : "0");
  
}
