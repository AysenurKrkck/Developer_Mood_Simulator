#include <Wire.h>
#include <hd44780.h>                        
#include <hd44780ioClass/hd44780_I2Cexp.h> 

// Global standartlara uygun olarak nesne ismi 'lcd' olarak belirlendi.
// Object named 'lcd' for global coding standards.
hd44780_I2Cexp lcd; 

// TR: Case 0 için Üzgün Surat İkonu :(
// EN: Case 0: Sad Face Icon :(
byte sadFace[8] = {
  B00000,
  B01010,
  B01010,
  B00000,
  B00000,
  B01110,
  B10001,
  B00000
};

// TR: Case 1 için Kalp İkonu <3
// EN: Case 1: Heart Icon <3
byte heartIcon[8] = {
  B00000,
  B01010,
  B10101,
  B10001,
  B01010,
  B00100,
  B00000,
  B00000  
};

// TR: Case 2 için Kilit İkonu 🔒
// EN: Case 2: Lock Icon 🔒
byte lockIcon[8] = {
  B00100, 
  B01010, 
  B01010, 
  B11111, 
  B11011, 
  B11111, 
  B11111, 
  B00000  
};

void setup() {
  // TR: 16 sütun, 2 satırlık LCD ekranı başlat ve arka ışığı aç.
  // EN: Initialize 16x2 LCD and turn on the backlight.
  lcd.begin(16, 2); 
  lcd.backlight();
  
  // TR: Özel karakterleri LCD'nin 0, 1 ve 2 numaralı bellek slotlarına kaydet.
  // EN: Register custom characters to LCD memory slots 0, 1, and 2.
  lcd.createChar(0, sadFace);
  lcd.createChar(1, heartIcon);
  lcd.createChar(2, lockIcon);
}

void loop() {
  // TR: A0 pininden potansiyometre değerini oku (0 - 1023).
  // EN: Read analog value from potentiometer via A0 pin (0 - 1023).
  int analogValue = analogRead(A0);

  // TR: Okunan analog veriyi switch-case için 0 ile 4 arasına indirge.
  // EN: Map the analog raw value into 0-4 range for switch-case logic.
  int stage = map(analogValue, 0, 1023, 0, 4);

  switch (stage)
  {
    case 0: 
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Code won't work"); // TR: 15 karakter metin | EN: 15 char text
      lcd.setCursor(15, 0);         // TR: İkonu 16. sütuna (indis 15) sabitle | EN: Fix icon at 16th column
      lcd.write(byte(0));            
      lcd.setCursor(0, 1);
      lcd.print("But why?!!      "); 
      delay(150);
      break;

    case 1: 
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Code is working"); // TR: 15 karakter metin | EN: 15 char text
      lcd.setCursor(15, 0);         // TR: İkonu 16. sütuna sabitle | EN: Fix icon at 16th column
      lcd.write(byte(1));            
      lcd.setCursor(0, 1);
      lcd.print("But why?!!      "); 
      delay(150);
      break;

    case 2: 
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Don't touch it!"); // TR: 15 karakter metin | EN: 15 char text
      lcd.setCursor(15, 0);         // TR: İkonu 16. sütuna sabitle | EN: Fix icon at 16th column
      lcd.write(byte(2));            
      lcd.setCursor(0, 1);
      lcd.print("It will break.. "); 
      delay(150);
      break;
  }
}
