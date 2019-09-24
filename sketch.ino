int switchPin = 1; // the On/Off switch
int powerState = 0;

void setup() {
  pinMode(switchPin, INPUT); // sets switch pin to INPUT

}

void loop() {
  powerState = digitalRead(switchPin);
  
}
