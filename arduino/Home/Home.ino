#include "WaterLevel.cpp"

WaterLevel water = new WaterLevel(A0);
void setup() {
  Serial.begin(115200);
  pinMode(13, OUTPUT);
}

void loop() {
  if ( water.isTouching() ) digitalWrite(13, HIGH);
  else digitalWrite(13, LOW);
}
