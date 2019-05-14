int  switchPin=D3; //d3
int LedPin=D0; //d0
int switchValue;

void setup() {
  pinMode(LedPin,OUTPUT);
  pinMode(switchpin,INPUT_PULLUP);
}

void loop() {
  //Read the switch value
  switchValue=digitalRead(switchPin);
  digitalWrite(LedPin,!switchValue);
}
