#include "pitches.h"
int melody[] = {
  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_A4, 
  NOTE_A4, NOTE0, NOTE_G4, NOTE_G4, NOTE_G4, NOTE0, NOTE_A4, NOTE_A4, 
  NOTE_A4, NOTE0, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_A4, 
  NOTE_A4, NOTE_A4, NOTE0, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4,
  NOTE0
  };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4,4,4,4,4,4,
  4,4,4,4,4,4,
  4,4,4,4,4,4,
  4,4,4,4,4,4,
  4,4,4,4,4,4};

void setup() {

}

void loop() {
    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote <= 7; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = 300;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
   
    }
     // iterate over the notes of the melody:
    for (int thisNote = 8; thisNote <= 10; thisNote++) {
  
    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = 300;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
  //delay(200);
     // iterate over the notes of the melody:
    for (int thisNote = 11; thisNote <= 13; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = 300;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
  //delay(200);
     for (int thisNote = 14; thisNote <= 20; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = 300;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
  //delay(200);
     for (int thisNote = 21; thisNote <= 25; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = 300;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
  //delay(400);
      for (int thisNote = 26; thisNote <= 30; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = 300;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
  delay(400);
}
