const int zelenaLED = 6;
const int rdecaLED = 7;
const int tipkaNatakanje = 8;
const int tipkaOdtekanje = 9;
const int stikalo1 = 2;
const int stikalo2 = 3;

enum MagnetniVentil {
  ZAPRT,
  ODPRT
};

enum StanjeTekocine {
  POD_SPDNJIM_NIVOJEM,
  MED_NIVOJEMA,
  NA_ZGORNJEM_NIVOJU
};

MagnetniVentil mv1Stanje = ZAPRT;
MagnetniVentil mv2Stanje = ZAPRT;
StanjeTekocine tekocinaStanje = MED_NIVOJEMA;

void preveriStanjeTekocine() {
  if (digitalRead(stikalo1) == LOW) {
    tekocinaStanje = POD_SPDNJIM_NIVOJEM;
    mv1Stanje = ODPRT;
    mv2Stanje = ZAPRT;
  }

  if (digitalRead(stikalo2) == LOW) {
    tekocinaStanje = NA_ZGORNJEM_NIVOJU;
    mv1Stanje = ZAPRT;
    mv2Stanje = ODPRT;
  }

  if (digitalRead(stikalo1) == HIGH && digitalRead(stikalo2) == HIGH) {
    tekocinaStanje = MED_NIVOJEMA;
    mv1Stanje = ZAPRT;
    mv2Stanje = ZAPRT;
  }
}

void upravljajMV1() {
  if (mv1Stanje == ODPRT) {
    digitalWrite(zelenaLED, HIGH);
    delay(500);
    digitalWrite(zelenaLED, LOW);
    delay(500);
  }
}

void upravljajMV2() {
  if (mv2Stanje == ODPRT) {
    digitalWrite(rdecaLED, HIGH);
    delay(500);
    digitalWrite(rdecaLED, LOW);
    delay(500);
  }
}

void setup() {
  pinMode(zelenaLED, OUTPUT);
  pinMode(rdecaLED, OUTPUT);
  pinMode(tipkaNatakanje, INPUT);
  pinMode(tipkaOdtekanje, INPUT);
  pinMode(stikalo1, INPUT);
  pinMode(stikalo2, INPUT);
}

void loop() {
  preveriStanjeTekocine();

  if (digitalRead(tipkaNatakanje) == HIGH) {
    if (tekocinaStanje != NA_ZGORNJEM_NIVOJU) {
      mv1Stanje = ODPRT;
      mv2Stanje = ZAPRT;
    }
  }

  if (digitalRead(tipkaOdtekanje) == HIGH) {
    if (tekocinaStanje != POD_SPDNJIM_NIVOJEM) {
      mv1Stanje = ZAPRT;
      mv2Stanje = ODPRT;
    }
  }

  if (digitalRead(tipkaOdtekanje)== HIGH && digitalRead(tipkaNatakanje)== HIGH) {
    if (tekocinaStanje != POD_SPDNJIM_NIVOJEM) {
      mv1Stanje = ODPRT;
      mv2Stanje = ODPRT;
    }
  }

  if (digitalRead(tipkaOdtekanje)== HIGH && digitalRead(tipkaNatakanje)== HIGH) {
    if (tekocinaStanje != NA_ZGORNJEM_NIVOJU) {
      mv1Stanje = ODPRT;
      mv2Stanje = ODPRT;
    }
  }

  upravljajMV1();
  upravljajMV2();
}