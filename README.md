# Solo-Leveling-Demon-King-Sword
Official LED animation code for the Demon King Sword (Solo Leveling) 3D project. Optimized for Seeed Studio XIAO ESP32-C6 and WS2812B LED strips

# Solo Leveling: Demon King Sword (Official Code)

This is the official repository for the LED code used in my **Demon Monarch Sword** 3D design on MakerWorld.

## 🔗 Links
- **3D Model & Print Instructions:** [MakerWorld - Demon Monarch Sword](https://makerworld.com/en/models/1389751-demon-monarch-sword-solo-leveling-anime-with-leds#profileId-1439817)
- **My Profile:** [MakerWorld @erate](https://makerworld.com/en/@erate/)

## ⚡ Project Overview
This code creates a dynamic "Blue Lightning" effect inspired by Solo Leveling. I have specifically optimized this version for the **Seeed Studio XIAO ESP32-C6**.

### Key Features:
- [cite_start]**FastLED Integration:** Smooth blending between base, flash, and halo colors[cite: 6, 8, 9].
- [cite_start]**Power Optimized:** Brightness is set to `191` (75%) to prevent excessive drain on the dual 402030 battery setup[cite: 4].
- [cite_start]**Hardware:** Designed for the XIAO ESP32-C6 (GPIO 1 for LED Data)[cite: 1].

## 🛠️ Hardware Setup
- **Microcontroller:** Seeed Studio XIAO ESP32-C6.
- [cite_start]**LED Strip:** 60x WS2812B LEDs[cite: 1].
- **Power:** 2x 402030 Li-Po batteries in parallel.

## 🚀 Installation
1. [cite_start]Install the `FastLED` library in your Arduino IDE[cite: 1].
2. [cite_start]Connect your LED strip to **D1 (GPIO 1)**[cite: 1].
3. Upload `Solo_Leveling_Demon_King_Sword.ino` to your board.
