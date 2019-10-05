#include <Arduino.h>
#include <SPI.h>
#include <ILI9341_t3.h>
#include <font_Arial.h>

const uint8_t TFT_CS = 9;
const uint8_t TFT_DC = 10;

ILI9341_t3 tft = ILI9341_t3(TFT_CS, TFT_DC);

void setup() {
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  tft.setTextColor(ILI9341_WHITE, ILI9341_BLACK);
  tft.setFont(Arial_18);
  tft.setRotation(3);
}

void loop() {
  tft.setCursor(0, 0);
  tft.println("Hello");
  tft.println("on LCD");
  tft.println("at " + String(millis()));
  delay(1000);
}
