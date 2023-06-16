const int ledPin = 11;
const int ldrPin =3;
int value = 0;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(ldrPin,INPUT);
  digitalWrite(ledPin,0);
}

void loop() {
  // put your main code here, to run repeatedly:

  int value = digitalRead(ldrPin);
  Serial.println(value);
  delay(100);

}
