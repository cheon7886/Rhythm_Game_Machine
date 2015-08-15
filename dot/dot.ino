int clock = 4;
int latch = 2;
int data = 3;


void setup() {

  pinMode(clock, OUTPUT);
  pinMode(latch, OUTPUT);
  pinMode(data, OUTPUT);

}

void loop() {
  int dataval[8] = {0x66, 0x99, 0x00, 0x00, 0x7e, 0x42, 0x3c, 0x00};
  int scanval[8] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
    for(int i = 0; i<8; i++){
      digitalWrite(latch, LOW);
      shiftOut(data, clock, LSBFIRST, scanval[i]);
      shiftOut(data, clock, LSBFIRST, dataval[i]);

      digitalWrite(latch, HIGH);
      delay(1);
      
    }
  digitalWrite(latch, LOW);
  shiftOut(data,clock,MSBFIRST, 0x00);
  shiftOut(data,clock,MSBFIRST, 0x00);
  digitalWrite(latch, HIGH);
  delay(1);
}
