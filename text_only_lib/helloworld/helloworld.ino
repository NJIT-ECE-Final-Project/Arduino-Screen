#include <SSD1306_text.h>
#include <Wire.h>

#define OLED_RESET 4
SSD1306_text display(OLED_RESET);

void setup(void) {

  Wire.begin(); 
  Wire.setClock(3000000); //3MHz
  
  display.init();
  display.clear();

}

void loop(void) {

  long start = millis();
  
  display.clear();
  display.setCursor(0,0);
  display.print("Hello World!");
  //display.setCursor(1,0);
  //display.print("Testing123...");

  long end = millis();

  Serial.println(end - start);

  delay(1);
}
