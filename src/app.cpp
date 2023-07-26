#include <Adafruit_ILI9341.h>

#define PIN_CS GPIO_NUM_1
#define PIN_DC GPIO_NUM_3
#define PIN_SDA GPIO_NUM_13
#define PIN_SCL GPIO_NUM_15

static Adafruit_ILI9341 lcd(PIN_CS, PIN_DC, PIN_SDA, PIN_SCL);

void setup()
{
    lcd.begin();
    lcd.startWrite();
    lcd.setRotation(2);
    lcd.writeFillRect(0, 0, lcd.width(), lcd.height(), 0x0007);
    const char* hello = "Hello, World!";
    int16_t x, y;
    uint16_t w, h;
    lcd.setTextSize(3);
    lcd.getTextBounds(hello, 0, 0, &x, &y, &w, &h);
    lcd.setCursor(lcd.width() / 2 - w / 2, lcd.height() / 2 - h / 2);
    lcd.setTextColor(0xFFFF, 0x0000);
    lcd.print(hello);
    lcd.endWrite();
}

void loop() { }
