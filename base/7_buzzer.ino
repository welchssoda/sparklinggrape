//

#include "6_pitches.h"

int buzzer_timer;

int melody[] = {

  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {

  4, 8, 8, 4, 4, 4, 4, 4
};

void buzzer_setup() {
buzzer_timer = timer.setInterval(4000, buzzer_loop);
timer.disable(buzzer_timer);

  }
}

void buzzer_loop() {
  
for (int thisNote = 0; thisNote < 8; thisNote++) {
    
    int noteDuration = 1000 / noteDurations[thisNote];

    tone(6, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.

    // the note's duration + 30% seems to work well:

    int pauseBetweenNotes = noteDuration * 1.30;

    delay(pauseBetweenNotes);

    // stop the tone playing:

    noTone(6);

  }
}
