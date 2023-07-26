#include <Adafruit_ILI9341.h>

#define PIN_CS GPIO_NUM_1
#define PIN_DC GPIO_NUM_3
#define PIN_RST GPIO_NUM_5
#define PIN_LED GPIO_NUM_7
#define PIN_MOSI GPIO_NUM_13
#define PIN_SCLK GPIO_NUM_15

static Adafruit_ILI9341 lcd(PIN_CS, PIN_DC, PIN_MOSI, PIN_SCLK, PIN_RST);

void setup()
{
    pinMode(PIN_LED, OUTPUT);
    digitalWrite(PIN_LED, HIGH);
    lcd.begin();
    lcd.startWrite();
    lcd.setRotation(2);
    lcd.writeFillRect(0, 0, lcd.width(), lcd.height(), 0x0007);
    const char* hello = "Hello, World!";
    int16_t x, y;
    uint16_t w, h;
    lcd.setTextSize(3);
    lcd.setTextColor(0xFFFF, 0x0000);
    lcd.getTextBounds(hello, 0, 0, &x, &y, &w, &h);
    lcd.setCursor(lcd.width() / 2 - w / 2, lcd.height() / 2 - h / 2);
    lcd.print(hello);
    lcd.endWrite();
}

void loop() { }
