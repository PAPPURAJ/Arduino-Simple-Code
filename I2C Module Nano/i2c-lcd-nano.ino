
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);



void setup()
{
  lcd.init();
  lcd.backlight();
 
}

void loop()
{
  
 display("Hi","Hello");// Type your text
  delay(20);


}

void display(String a, String b){
  lcd.setCursor(0,0);
  lcd.print(a+"                ");
  lcd.setCursor(0,1);
  lcd.print(b+"                ");
}
