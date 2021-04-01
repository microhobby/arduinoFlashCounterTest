#include <Arduino.h>
#include <EEPROM.h>
#include "bootloader.h"

void setup()
{
	pinMode(13, OUTPUT);

	Serial.begin(115200);

	EEPROM.begin();
	int flash_count = EEPROM.read(512);

	Serial.print("Flash counter EEPROM :::: ");
	Serial.println(flash_count);
	Serial.println("******************");
	Serial.print("Flash counter BOOT SECTION :::: ");
	Serial.println(flashCounter());

	EEPROM.end();
}

void loop()
{
	digitalWrite(13, !digitalRead(13));
	delay(500);
}
