#include "pitches.h"
int melody[] = {
  NOTE_C4, NOTE0, NOTE_G4, NOTE_G4, NOTE_G4, NOTE0, NOTE_G4, NOTE0,
  NOTE_GS4, NOTE_G4, NOTE_GS4, NOTE_AS4, NOTE_G4, NOTE0, NOTE_G4,
  NOTE0, NOTE_AS3, NOTE_F4, NOTE0, NOTE_F4,  NOTE_DS4, NOTE0,
  NOTE_F4, NOTE0, NOTE_G4, NOTE_GS4, NOTE_G4, NOTE_F4, NOTE_G4,
  NOTE_F4, NOTE_DS4, NOTE_F4, /* */  NOTE_C4, NOTE0, NOTE_G4, NOTE_G4, 
  NOTE_G4, NOTE0, NOTE_G4, NOTE0, NOTE_GS4, NOTE_G4, NOTE_GS4, 
  NOTE_AS4, NOTE_G4, NOTE0, NOTE_G4, NOTE0, NOTE_AS3, NOTE_F4, 
  NOTE0, NOTE_F4,  NOTE_DS4, NOTE0,  NOTE_D4 , NOTE0,
  NOTE_C4,
        //57
  
  };

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4,4,16,16,4,4,
  4,4,4,4,4,4,
  4,4,4,4,4,4,
  4,4,4,4,4,4,
  4,4,4,4,4,4,
  4,4,4,4,4,4,
  4,4,4,4,4,4,
  4,4,4,4,4,4,
  4,4,4,4,4,4,
  4,4,4};

void setup() {

}

void loop() {
    // iterate over the notes of the melody:
    for (int thisNote = 0; thisNote <= 32; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = 160;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
   
    }
    
        // iterate over the notes of the melody:
    for (int thisNote = 33; thisNote <= 57; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000/noteDurations[thisNote];
    tone(8, melody[thisNote],noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = 160;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
   
    }
     delay(1000);
}
