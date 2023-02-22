void openDoors() {
}
void closeDoors() {
}
void up() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
}
void down() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
}
void stop() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
}
void blink(int duration) {
  // blink led
  digitalWrite(LED_BUILTIN, HIGH);
  delay(duration);
  digitalWrite(LED_BUILTIN, LOW);
  delay(duration);
}
void getButtons() {
}
void setup() {
  // put your setup code here, to run once:
  int level;
  int direction = 0;
  pinMode(LED_BUILTIN, OUTPUT); // blinky light
  pinMode(2, OUTPUT); // down 
  pinMode(3, OUTPUT); // up
  pinMode(4, INPUT); // first floor up
  pinMode(5, INPUT); // second floor down
  pinMode(6, INPUT); // second floor up
  pinMode(7, INPUT); // third floor down
  bool firstUp = false;
  bool secondDown = false;
  bool secondUp = false;
  bool thirdDown = false;
}

void loop() {
  getButtons();
  // blink led
  blink(100);
}
