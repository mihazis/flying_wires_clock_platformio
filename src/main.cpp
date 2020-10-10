#include "Arduino.h"
#include <FastLED.h>

#define NUM_LEDS 8
#define BRIGHTNESS  15
#define DATA_PIN 2
#define CLOCK_PIN 13
#define COLOR_ORDER   GRB

CRGB leds[NUM_LEDS];

void setup() { 
    
    FastLED.addLeds<WS2813, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
    FastLED.setBrightness( BRIGHTNESS );
    fill_solid(leds, NUM_LEDS, CRGB::Black);
    FastLED.show();
    
}

void run_strip() {
 delay(103);
  for(int x = 0; x < 4; x++) {
     leds[x] = CRGB::Blue;
     
     
     FastLED.show();
    leds[x] = CRGB::Red;
    
     delay(100);}

 delay(103);
  for(int x = 4; x < 8; x++) {
     leds[x] = CRGB::Blue;
     
     
     FastLED.show();
    leds[x] = CRGB::Red;
    delay(100);
  }
}

void loop() { 
  //fill_solid(leds, NUM_LEDS, CRGB::Beige);
    FastLED.show();
}