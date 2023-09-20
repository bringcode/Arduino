void setup()
{
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  pinMode(7, OUTPUT);
}

void loop()
{
  int toggle = 0;
  digitalWrite(7, toggle);
  delay(1000);

  for (int i = 0; i< 10; i++) {
    toggle = toggle_state(toggle);
    digitalWrite(7, toggle);
    delay(100);
  }

  digitalWrite(7, 1);
  while (1) {}
}

int toggle_state(int toggle) {
    return 1 - toggle;
  }