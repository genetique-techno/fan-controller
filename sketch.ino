// pinouts
int switchPin = 2; // the On/Off switch
int speedPin = A2; // the potentiometer pin
int directionPin = 4; // switch fan between intake/exhaust
int fanPin = 9; // fan's pin for PWM signal

// init vars
int speed = 0;
int powerState = 0;
int direction = 0;
int fanPower = 0;

void setup() {
  Serial.begin(9600);
  pinMode(switchPin, INPUT); // sets switch pin to INPUT
  pinMode(speedPin, INPUT);
  pinMode(directionPin, INPUT);
  pinMode(fanPin, OUTPUT);

}

void loop() {
  powerState = digitalRead(switchPin);
  speed = analogRead(speedPin);
  direction = digitalRead(directionPin);

  fanPower = 0;
  // fanPower = map(speed, 0, 0, 1023, 255);
  analogWrite(fanPin, fanPower);

  Serial.println(speed);
}
