///////////////////////////////////////////////////////////////////////////////////////////
//
// ALA library example: SimpleRgbStrip
//
// Example to demonstrate how to create display a color-fading animation for a
// WS2812 RGB LED strip.
//
// Web page: http://yaab-arduino.blogspot.com/p/ala-example-simplergbstrip.html
//
///////////////////////////////////////////////////////////////////////////////////////////

#include <AlaLedRgb.h>

AlaLedRgb rgbStrip1;
AlaLedRgb rgbStrip2;
AlaLedRgb rgbStrip3;
AlaLedRgb rgbStrip4;
AlaLedRgb rgbStrip5;
AlaLedRgb rgbStrip6;
int incomingByte;
int a = 6;
 boolean cometcol;
    boolean fade;
    boolean sparker;
void setup()
{
  Serial.begin(9600);
  // initialize the WS2812 strip with 30 leds on pin 6
  rgbStrip1.initWS2812(30, 6);
  rgbStrip2.initWS2812(30, 6);
  rgbStrip3.initWS2812(30, 6);
  rgbStrip4.initWS2812(30, 6);
  rgbStrip5.initWS2812(30, 6);
  rgbStrip6.initWS2812(30, 6);
  // set a color-fading animation with a duration of 5 seconds and an RGB palette
  rgbStrip1.setAnimation(ALA_COMETCOL, 5000, alaPalRgb);
  rgbStrip2.setAnimation(ALA_FADECOLORS, 500, alaPalRgb);
  rgbStrip3.setAnimation(ALA_LARSONSCANNER2, 500, alaPalRgb);
  rgbStrip4.setAnimation(ALA_PLASMA, 500, alaPalRgb);
  rgbStrip5.setAnimation(ALA_BOUNCINGBALLS, 500, alaPalRgb);
  rgbStrip6.setAnimation(ALA_STROBO, 500, alaPalRgb);



  
}

void loop()
{
   
    if ( a == 1) {
       
      rgbStrip1.runAnimation();
   }
     if (a == 2) {
      
      rgbStrip3.runAnimation();
     }
   
   if (a == 3){
    
    rgbStrip2.runAnimation();
   }
   if (a == 4){
    
    rgbStrip4.runAnimation();
   }
    if (a == 5){
    
    rgbStrip5.runAnimation();
   }
   if (a == 6){
    
    rgbStrip6.runAnimation();
   }
   }
  
  
  // run the animation
 
