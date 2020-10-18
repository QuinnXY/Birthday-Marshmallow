#include <Adafruit_CircuitPlayground.h>

// note frequencies
int NOTEG = 196, NOTEA = 220, NOTEB = 247, NOTEC = 262;
int NOTED = 294, NOTEE = 330, NOTEF = 350, NOTEHG = 196;
int NOTEHA = 220, NOTEHB = 494, NOTEHC = 523;
int NOTEHD = 587, NOTEHE = 659, NOTEHF = 698;
int NOTEBb = 116, NOTEEb = 155;

//time in milliseconds
int shortNote = 700;
int longNote = 1000;

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void loop() {
  //main code here, to run repeatedly:
  CircuitPlayground.playTone( NOTEE, 250);
delay(25);

CircuitPlayground.playTone( NOTEE, 250);
delay(25);

CircuitPlayground.playTone( NOTEE, 250);
delay(25);

CircuitPlayground.playTone( NOTEF, 250);
delay(25);

CircuitPlayground.playTone( NOTEG, 250);
delay(25);

CircuitPlayground.playTone( NOTEG, 250);
delay(25);

CircuitPlayground.playTone( NOTEF, 250);
delay(25);

CircuitPlayground.playTone( NOTEE, 250);
delay(25);

CircuitPlayground.playTone( NOTED, 250);
delay(25);

CircuitPlayground.playTone( NOTEC, 250);
delay(25);

CircuitPlayground.playTone( NOTEC, 250);
delay(25);

CircuitPlayground.playTone( NOTED, 250);
delay(25);

CircuitPlayground.playTone( NOTEE, 250);
delay(25);

CircuitPlayground.playTone( NOTEE, 350);
delay(50);

CircuitPlayground.playTone( NOTED, 250);
delay(25);

CircuitPlayground.playTone( NOTED, 250);
delay(25);

CircuitPlayground.playTone( NOTEE, 250);
delay(25);

CircuitPlayground.playTone( NOTEE, 250);
delay(25);

CircuitPlayground.playTone( NOTEF, 250);
delay(25);

CircuitPlayground.playTone( NOTEG, 250);
delay(25);

CircuitPlayground.playTone( NOTEG, 250);
delay(25);

CircuitPlayground.playTone( NOTEF, 250);
delay(25);

CircuitPlayground.playTone( NOTEE, 250);
delay(25);

CircuitPlayground.playTone( NOTED, 250);
delay(25);

CircuitPlayground.playTone( NOTEC, 250);
delay(25);

CircuitPlayground.playTone( NOTEC, 250);
delay(25);

CircuitPlayground.playTone( NOTED, 250);
delay(25);

CircuitPlayground.playTone( NOTEE, 250);
delay(25);

CircuitPlayground.playTone( NOTED, 350);
delay(50);

CircuitPlayground.playTone( NOTEC, 250);
delay(25);

CircuitPlayground.playTone( NOTEC, 350);
delay(25);

}