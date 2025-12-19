//Code by erate
//https://github.com/eratenshi
//https://makerworld.com/en/@erate/

#include <FastLED.h>

// PIN D1 on XIAO ESP32C6 is GPIO1
#define LED_PIN    1

// Number of LEDs on the strip
#define NUM_LEDS   60

// Chip type and color order
#define CHIPSET    WS2812B
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

// Basic color
const CRGB BASE_COLOR = CRGB(0, 150, 200);
// Flash color
const CRGB FLASH_COLOR = CRGB(200, 255, 255);
// Halo color
const CRGB HALO_COLOR = CRGB(50, 220, 255);

void setup() {
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  // --- Changed again here ---
  FastLED.setBrightness(191); // Brightness 3/4 from maximum (Battery drops too fast)
  // -------------------------
  randomSeed(analogRead(0));
}

void loop() {
  // Fades every pixel slowly to Basic color
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i].nscale8(220); 
    leds[i] = blend(leds[i], BASE_COLOR, 80); 
  }
  
  // Creates random lightning effects
  int numFlashes = random(1, 4); 
  for (int i = 0; i < numFlashes; i++) {
    int flashCenter = random(0, NUM_LEDS); 
    int flashWidth = random(1, 3);      
    
    leds[flashCenter] = FLASH_COLOR;
    
    for (int j = 1; j <= flashWidth; j++) {
      if (flashCenter - j >= 0) {
        leds[flashCenter - j] = blend(leds[flashCenter - j], HALO_COLOR, 200); 
      }
      if (flashCenter + j < NUM_LEDS) {
        leds[flashCenter + j] = blend(leds[flashCenter + j], HALO_COLOR, 200); 
      }
    }
  }

  FastLED.show();
  
  delay(50); 
}