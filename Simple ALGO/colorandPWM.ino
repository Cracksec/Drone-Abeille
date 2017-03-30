int moteur = 11;
int inter = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(moteur, OUTPUT);
  pinMode(inter, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(inter) == HIGH){   //Si la couleur capté correspond à la couleur de la fleur (précision avec RGB)
  analogWrite(moteur, 191); //On fait tourner le moteur
  }
  else
  {
    analogWrite(moteur, 0); //sinon le moteur ne tourne pas
    }
}
