int getLampBrightness(bool switchOn, int brightnessSetting) {
  if (switchOn) {
    return brightnessSetting;
  } else {
    return 0;
  }
}

void setup() {
  Serial.begin(115200);

  int brightnessSetting = 100;
  bool switchOn = false;

  int lampBrightness = getLampBrightness(switchOn, brightnessSetting);

  Serial.print("Brightness setting: ");
  Serial.println(brightnessSetting);

  Serial.print("Switch state: ");
  Serial.println(switchOn ? "On" : "Off");

  Serial.print("Lamp brightness: ");
  Serial.println(lampBrightness);
}

void loop() {
}