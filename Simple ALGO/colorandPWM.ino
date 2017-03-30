int moteur = 11;
int inter = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(moteur, OUTPUT);
  pinMode(inter, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10);
  if (digitalRead(inter) == HIGH){
  analogWrite(moteur, 191);
  }
  else
  {
    delay(10);
    analogWrite(moteur, 0);
    }
}
