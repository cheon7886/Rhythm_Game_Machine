int xPin = A1;
int yPin = A0;
int buttonPin = 2;

int xPosition = 0;
int yPosition = 0;
int buttonState = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
  
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);

  //activate pull-up resistor on the push-button pin
  pinMode(buttonPin, INPUT_PULLUP); 
  
  // For versions prior to Arduino 1.0.1
  // pinMode(buttonPin, INPUT);
  // digitalWrite(buttonPin, HIGH);
  
}

void loop() {
  JoyValue();
}

void JoyValue() {
  xPosition = map(analogRead(xPin), 0, 1024, -50, 50);
  yPosition = map(analogRead(yPin), 0, 1024, -50, 50);
  buttonState = 1 - digitalRead(buttonPin);

  if (xPosition > 10){
    int blueup = 1;
    //Serial.print(blueup);
    //delay(100);
  }
  if (xPosition < -10){
    int bluedn = 2;
    //Serial.print(bluedn);
    //delay(100);
  }
  if (yPosition > 10){
    int whtup = 3;
    //Serial.print(whtup);
    //delay(100);
  }
  if (yPosition < -10){
    int whtdn = 4;
    //Serial.print(whtdn);
    //delay(100);
  }
}

