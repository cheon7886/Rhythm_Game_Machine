int latchPin = 11;
int clockPin = 13;
int dataPin = 12;

int xPin = A0;
int yPin = A1;
//int buttonPin = 2;

int xPosition = 0;
int yPosition = 0;
//int buttonState = 0;

int flag[4][8][8] = {
    {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 1, 1, 1, 1, 0, 0},
        {0, 1, 1, 1, 1, 1, 1, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 0, 0},
        {0, 1, 1, 1, 1, 1, 1, 0},
        {0, 1, 1, 1, 1, 1, 1, 0},
        {0, 0, 0, 0, 1, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 1, 1, 1, 1, 1, 1, 0},
        {0, 0, 1, 1, 1, 1, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
    },
    {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 0, 0, 0},
        {0, 1, 1, 1, 1, 1, 1, 0},
        {0, 1, 1, 1, 1, 1, 1, 0},
        {0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
    }
};

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);

  for (int i = 2; i <= 9; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }

  Serial.begin(9600);
}

int score = 0;
int asdf;

void loop() {
    int rnd = random(0, 4);
   asdf = JoyValue();
    for(int i = 0; i <= 500; i++){
    make_screen(flag[rnd]);
  
    }
      if(asdf == rnd){
      score += 100;
      Serial.print("You earned +100 point!  ");
      Serial.print("your score is = ");
      Serial.println(score);
      beep();
    }
  
    
   
    
    
    delay(2000);
}

int int_to_bin(int *arr) {
  int result = 0, bin = 1;
  
  for (int i = 0; i < 8; i++) {
     if (arr[7 - i] == 1) {
      result += bin;
     }
     bin *= 2;
  }

  return result;
}


void make_screen(int arr[][8]) {
  int pinNums[8] = {9, 2, 3, 4, 5, 6, 7, 8};
  
  for (int i = 0; i < sizeof(pinNums) / sizeof(int); i++) {
    digitalWrite(latchPin, 0);
    digitalWrite(pinNums[i], LOW);

    shiftOut(dataPin, clockPin, int_to_bin(arr[i]));
    digitalWrite(pinNums[i], HIGH);
    digitalWrite(latchPin, 1);
  }
  
}

void shiftOut(int myDataPin, int myClockPin, byte myDataOut) {
  int i=0;
  int pinState;
  
  pinMode(myClockPin, OUTPUT);
  pinMode(myDataPin, OUTPUT);

  digitalWrite(myDataPin, 0);
  digitalWrite(myClockPin, 0);

  for (i=7; i>=0; i--)  {
    digitalWrite(myClockPin, 0);

    if ( myDataOut & (1<<i) ) {
      pinState= 1;
    }
    else {  
      pinState= 0;
    }

    digitalWrite(myDataPin, pinState);
    digitalWrite(myClockPin, 1);
    digitalWrite(myDataPin, 0);
  }


  digitalWrite(myClockPin, 0);
}

int JoyValue() {
  xPosition = map(analogRead(xPin), 0, 1024, -50, 50);
  yPosition = map(analogRead(yPin), 0, 1024, -50, 50);
  //buttonState = 1 - digitalRead(buttonPin);

  if (xPosition > 10){
    return 1;
    //Serial.print(blueup);
    //delay(100);
  }
  if (xPosition < -10){
    return 2;
    //Serial.print(bluedn);
    //delay(100);
  }
  if (yPosition > 10){
    return 3;
    //Serial.print(whtup);
    //delay(100);
  }
  if (yPosition < -10){
    return 4;
    //Serial.print(whtdn);
    //delay(100);
  }
}
void beep(){
  tone(A2, 392,250);
}

