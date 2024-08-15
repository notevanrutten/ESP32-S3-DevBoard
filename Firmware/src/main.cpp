#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
}

int num = 0;

void loop()
{
  Serial.println(num);
  delay(1000);
  num++;
}
