#include <FastLED.h>
#define LED_PIN     7
#define NUM_LEDS    100
CRGB leds[NUM_LEDS];

int x = 0;
int sound;
void setup() {
 FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);

Serial.begin(9600);
}

void loop() {
 sound = analogRead(x);
 Serial.println(sound);
 if (sound < 4) {

 } else {
   if (sound > 4 && sound <= 7) {
     for (int i = NUM_LEDS-1; i >= 0; i--) {
       leds[i] = CRGB ( 0, 0, 255); //blue
       FastLED.show();
       delay(5);
     }
   }

   if (sound > 7 && sound <= 10) {
     for (int i = 0; i < NUM_LEDS; i++) {
       leds[i] = CRGB (255, 146, 16); //orange
       FastLED.show();
       delay(5);
     }
   }

   if (sound > 10 && sound <= 13) {
     for (int i = NUM_LEDS-1; i >= 0; i--) {
       leds[i] = CRGB ( 0, 255, 0); //green
       FastLED.show();
       delay(5);
     }
   }

   if (sound > 13 && sound <= 17) {
     for (int i = 0; i < NUM_LEDS; i++) {
       leds[i] = CRGB ( 255, 0, 0); //red
       FastLED.show();
       delay(5);
       FastLED.clear();
     }
   }

   if (sound > 17 && sound <= 20) {
     for (int i = NUM_LEDS-1; i >= 0; i--) {
       leds[i] = CRGB (211, 67, 252); //purple
       FastLED.show();
       delay(5);
       FastLED.clear();
     }
   }

   if (sound > 20 && sound <= 30) {
     for (int i = 0; i < NUM_LEDS; i++) {
       leds[i] = CRGB ( 100, 255, 255); //teal
       FastLED.show();
       delay(5);
       FastLED.clear();
     }
   }

   if (sound > 30 && sound <= 100) {
     for (int i = NUM_LEDS-1; i >= 0; i--) {
       leds[i] = CRGB (229, 108, 152); //pink
       FastLED.show();
       delay(5);
     }
   }

   if (sound > 100 && sound <= 150) {
     for (int i = 0; i < NUM_LEDS; i++) {
       leds[i] = CRGB (255, 254, 2); //yellow
       FastLED.show();
       delay(5);
       FastLED.clear();
     }
   }

   if (sound < 70) {
     for (int i = NUM_LEDS-1; i >= 0; i--) {
       leds[i] = CRGB (255, 255, 255); // white
       FastLED.show();
       delay(5);
     }
   }

   if (sound > 250) {
     for (int i = 0; i < NUM_LEDS; i++) {
       leds[i] = CRGB (255, 71, 50); //salmon
       FastLED.show();
       delay(5);
     }
   }
   delay(10);
   for (int i = NUM_LEDS-1; i >= 0; i--) {
     leds[i] = CRGB ( 0, 0, 0);
     FastLED.show();
     delay(5);
   }
//    exit(0);
 }
}
