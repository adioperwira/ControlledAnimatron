const int buttonPinA = 2;  // Define the pins for the buttons
const int buttonPinB = 3;
const int buttonPinC = 4;
const int buttonPinD = 5;

const int xPin = A0;  // Define the analog pins for X and Y axis
const int yPin = A1;

void setup() {
  Serial.begin(9600);

  pinMode(buttonPinA, INPUT_PULLUP);  // Set button pins as input with pull-up resistors
  pinMode(buttonPinB, INPUT_PULLUP);
  pinMode(buttonPinC, INPUT_PULLUP);
  pinMode(buttonPinD, INPUT_PULLUP);
}

void loop() {
  int xValue = analogRead(xPin);  // Read X and Y values
  int yValue = analogRead(yPin);

  bool buttonA = digitalRead(buttonPinA) == LOW;  // Check button states
  bool buttonB = digitalRead(buttonPinB) == LOW;
  bool buttonC = digitalRead(buttonPinC) == LOW;
  bool buttonD = digitalRead(buttonPinD) == LOW;

  // Print X and Y values to serial monitor
  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print(" Y: ");
  Serial.print(yValue);

  // Print button states
  if (buttonA) {
    Serial.print(" Button A Pressed");
  }
  if (buttonB) {
    Serial.print(" Button B Pressed");
  }
  if (buttonC) {
    Serial.print(" Button C Pressed");
  }
  if (buttonD) {
    Serial.print(" Button D Pressed");
  }

  Serial.println();  // Move to the next line in the serial monitor
  delay(500);  // Adjust the delay as needed
}