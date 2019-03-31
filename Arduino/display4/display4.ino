#include "SevSeg.h"
SevSeg sevseg;

void setup() {
  // put your setup code here, to run once:
  byte numdigits = 1;
  byte digitpins[] = {};
  byte segmentpins[] = {6,5,2,3,4,7,8,9};
  bool resistorsonsegment = true;

  byte hardwareconfig = COMMON_CATHODE;
  sevseg.begin(hardwareconfig , numdigits , digitpins , segmentpins , resistorsonsegment);
  sevseg.setBrightness(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<10;i++){
    sevseg.setNumber(i);
    delay(1000);
    sevseg.refreshDisplay();  
  }
  
}
