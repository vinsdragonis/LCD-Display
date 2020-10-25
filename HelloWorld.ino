//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.begin(16, 2);
  lcd.print("Finally done!!");
}

void loop()
{
  lcd.setCursor(0,1);
  lcd.print("This is Dragonis!!");
}
