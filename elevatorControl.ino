const int leveledPin  = 2;
const int BLevel1     = 3;
const int BLevel2     = 4;
const int BLevel4     = 5;
const int button1Up   = 6;
const int button2Up   = 7;
const int button2Down = 8;
const int button3Down = 9;
const int inputPin9   = 10; //not assigned
const int safetyBreak = 11;
const int upperLimit  = 12;
const int lowerLimit  = 13;

const int motorUp     = A0;
const int motorDown   = A1;
const int doorAOpen   = A2;
const int doorAClose  = A3;
const int doorBOpen   = A4;
const int doorBClose  = A5;

void setup() {
  pinMode(inputPin1, INPUT);
  pinMode(inputPin2, INPUT);
  pinMode(inputPin3, INPUT);
  pinMode(inputPin4, INPUT);
  pinMode(inputPin5, INPUT);
  pinMode(inputPin6, INPUT);
  pinMode(inp, INPUT);

  pinMode(motorUp, OUTPUT);
  pinMode(outputPin2, OUTPUT);
  pinMode(outputPin3, OUTPUT);
  pinMode(outputPin4, OUTPUT);
  pinMode(outputPin5, OUTPUT);
  pinMode(outputPin6, OUTPUT);
}

void loop() {
  // Read inputs
  int input1 = digitalRead(inputPin1);
  int input2 = digitalRead(inputPin2);
  int input3 = digitalRead(inputPin3);
  int input4 = digitalRead(inputPin4);
  int input5 = digitalRead(inputPin5);
  int input6 = digitalRead(inputPin6);
  int input7 = digitalRead(inputPin7);

  // Perform desired actions based on inputs

  // Set outputs
  digitalWrite(outputPin1, HIGH);
  digitalWrite(outputPin2, LOW);
  digitalWrite(outputPin3, HIGH);
  digitalWrite(outputPin4, LOW);
  digitalWrite(outputPin5, HIGH);
  digitalWrite(outputPin6, LOW);
}
