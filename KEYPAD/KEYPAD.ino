#include <Keypad.h>

const byte ROWS = 4; //가로
const byte COLS = 4; //세로
char keys[ROWS][COLS] = {
  {'13','9','5','1'},
  {'14','10','6','2'},
  {'15','11','7','3'},
  {'16','12','8','4'}
};
byte rowPins[ROWS] = {16, 12, 8, 4}; //connect to row pinouts 
byte colPins[COLS] = {3, 4}; //connect to column pinouts

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
  Serial.print("Program Start");
}

void loop(){
  char key = keypad.getKey();

  if (key != NO_KEY){
    Serial.println(key);
  }
}
