#include <Arduino.h>
#include "pitches.h"



void mario1()
{
    tone(12, 2637, 150);
    delay(150*1.3);
    tone(12, 2637, 150);
    delay(150*1.3*2);
    tone(12, 2637, 150);
    delay(150*1.3*2);
    tone(12, 2093, 150);
    delay(150*1.3);
    tone(12, 2637, 150);
    delay(150*1.3*2);
    tone(12, 3137, 150);
    delay(150*1.3*4);
    tone(12, 1568, 150);
    delay(1000);
}

void mario2()
{
    tone(12, 784, 83);
    delay(83*1.3);
    tone(12, 1047, 83);
    delay(83*1.3);
    tone(12, 1319, 83);
    delay(83*1.3);
    tone(12, 1568, 83);
    delay(83*1.3);
    tone(12, 2093, 83);
    delay(83*1.3);
    tone(12, 2637, 83);
    delay(83*1.3);
    tone(12, 3136, 999);
    delay(83*1.3*3);
    tone(12, 2637, 999);
    delay(83*1.3*3);

    tone(12, 831, 83);
    delay(83*1.3);
    tone(12, 1109, 83);
    delay(83*1.3);
    tone(12, 1245, 83);
    delay(83*1.3);
    tone(12, 1661, 83);
    delay(83*1.3);
    tone(12, 2093, 83);
    delay(83*1.3);
    tone(12, 2489, 83);
    delay(83*1.3);
    tone(12, 3322, 999);
    delay(83*1.3*3);
    tone(12, 2489, 999);
    delay(83*1.3*3);

    tone(12, 1047, 83);
    delay(83*1.3);
    tone(12, 1175, 83);
    delay(83*1.3);
    tone(12, 1397, 83);
    delay(83*1.3);
    tone(12, 1865, 83);
    delay(83*1.3);
    tone(12, 2349, 83);
    delay(83*1.3);
    tone(12, 2794, 83);
    delay(83*1.3);
    tone(12, 3729, 999);
    delay(83*1.3*2);
    tone(12, 3729, 83);
    delay(83*1.3);
    tone(12, 3729, 83);
    delay(83*1.3);
    tone(12, 3729, 83);
    delay(83*1.3);
    tone(12, 3729, 83);
    delay(83*1.3);
    tone(12, 4186);
    delay(500);
    noTone(12);

    delay(5000);
}

void pacman(){
    int tonePin = 12;
    tone(tonePin, 523, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 1046, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 783, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 659, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 1046, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 783, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 659, 213.28125);
    delay(236.979166667);
    delay(13.0208333333);
    tone(tonePin, 554, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 1108, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 830, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 698, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 1108, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 830, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 698, 213.28125);
    delay(236.979166667);
    delay(13.0208333333);
    tone(tonePin, 523, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 1046, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 783, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 659, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 1046, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 783, 106.40625);
    delay(118.229166667);
    delay(6.77083333333);
    tone(tonePin, 659, 213.28125);
    delay(236.979166667);
    delay(13.0208333333);
    tone(tonePin, 739, 70.78125);
    delay(78.6458333333);
    delay(4.6875);
    tone(tonePin, 783, 70.78125);
    delay(78.6458333333);
    delay(4.6875);
    tone(tonePin, 830, 70.78125);
    delay(78.6458333333);
    delay(4.6875);
    tone(tonePin, 830, 70.78125);
    delay(78.6458333333);
    delay(4.6875);
    tone(tonePin, 880, 70.78125);
    delay(78.6458333333);
    delay(4.6875);
    tone(tonePin, 932, 70.78125);
    delay(78.6458333333);
    delay(4.6875);
    tone(tonePin, 932, 70.78125);
    delay(78.6458333333);
    delay(4.6875);
    tone(tonePin, 987, 70.78125);
    delay(78.6458333333);
    delay(4.6875);
    tone(tonePin, 1046, 70.78125);
    delay(78.6458333333);
    delay(4.6875);
    tone(tonePin, 1046, 213.28125);
    delay(236.979166667);
}

void waka1() {
    int tonePin = 12;
    tone(tonePin, 1479, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 24, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 2489, 80.5008944544);
       delay(89.4454382826);
       tone(tonePin, 659, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 2637, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 698, 40.2504472272);
       delay(44.7227191413);
       delay(22.3613595707);
       tone(tonePin, 2959, 40.2504472272);
       delay(44.7227191413);
       delay(22.3613595707);
       tone(tonePin, 739, 20.1252236136);
       delay(22.3613595707);
       delay(44.7227191413);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 2217, 60.3756708408);
       delay(67.084078712);
       tone(tonePin, 587, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1174, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 622, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 2489, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 659, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1318, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 698, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(44.7227191413);
       delay(22.3613595707);
       tone(tonePin, 523, 40.2504472272);
       delay(44.7227191413);
       delay(22.3613595707);
       tone(tonePin, 554, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 2217, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 587, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 622, 20.1252236136);
       delay(22.3613595707);
       delay(44.7227191413);
       delay(22.3613595707);
       delay(44.7227191413);
       tone(tonePin, 554, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 466, 40.2504472272);
       delay(44.7227191413);
       delay(22.3613595707);
       tone(tonePin, 987, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 523, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 2093, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 554, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 587, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 2489, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(44.7227191413);
       delay(44.7227191413);
       tone(tonePin, 1661, 60.3756708408);
       delay(67.084078712);
       tone(tonePin, 440, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 1864, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 493, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1975, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 523, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 554, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 440, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 1661, 40.2504472272);
       delay(44.7227191413);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 391, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 466, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 174, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 739, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 932, 40.2504472272);
       delay(44.7227191413);
       tone(tonePin, 1108, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1396, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1318, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1479, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1661, 20.1252236136);
       delay(22.3613595707);
       delay(44.7227191413);
       delay(22.3613595707);
       tone(tonePin, 27, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 103, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 369, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 174, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 554, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 739, 20.1252236136);
       delay(22.3613595707);
       delay(22.3613595707);
       tone(tonePin, 932, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1108, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1318, 40.2504472272);
       delay(44.7227191413);
       tone(tonePin, 1479, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1661, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1760, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 1864, 20.1252236136);
       delay(22.3613595707);
       tone(tonePin, 2093, 20.1252236136);
       delay(22.3613595707);

}

void waka(double speed){
    int melody[] = {
        NOTE_E4, NOTE_AS4, NOTE_DS5, NOTE_FS5, NOTE_A5,
        NOTE_B5, NOTE_GS5, NOTE_F5, NOTE_CS5, NOTE_GS4
    };

    int noteDurations[] = {
        16,16,16,16,16,
        16,16,16,16,16
    };
    for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(melody[0]); thisNote++){

        /*
          to calculate the note duration, take one second divided by the note type.
          e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
        */

        int noteDuration = speed*400/noteDurations[thisNote];
        tone(12, melody[thisNote],noteDuration);

        /*
          to distinguish the notes, set a minimum time between them.
          the note's duration + 30% seems to work well:
         */
        int pauseBetweenNotes = noteDuration * 1.30;
        delay(pauseBetweenNotes);

        noTone(12); //stop the tone playing:
    }
    digitalWrite(12,LOW);
}
