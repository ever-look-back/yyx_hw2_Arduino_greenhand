#include <Arduino.h>
#include <LiquidCrystal.h>


#define RS 8
LiquidCrystal lcd(RS, 7, 5, 4, 3, 2);
byte heart[] = {   // 创建字符(心形)：可以用word8*5的表格；0b开头表示2进制，0表示灭，1表示亮
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000,
  0b00000
};

void setup() {
  pinMode(6, OUTPUT);   // 不知道有没有必要
  analogWrite(6, 100);   // 模拟输出，调节对比度
  lcd.begin(16, 2);

  lcd.setCursor(4, 0);
  lcd.print("I");
  lcd.createChar(0, heart);
  lcd.setCursor(6,0);
  lcd.write(byte(0));   // 转换为字符型数据
  lcd.print(" ZJU");
  lcd.setCursor(0, 1);
  lcd.print("ZJU lets me die!");
}

void loop() {
  // lcd.scrollDisplayLeft();
  // delay(1000);
}

