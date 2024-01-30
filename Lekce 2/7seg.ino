#define LED_PIN_A 2
#define LED_PIN_B 3
#define LED_PIN_C 4
#define LED_PIN_D 5
#define LED_PIN_E 6
#define LED_PIN_F 7
#define LED_PIN_G 8

#define ACTIVE HIGH  //Tyto dva řádky si mohou prohodit hodnoty pokud jsou se společným plusem nebo naopak se společným mínusem
#define UNACTIVE LOW //Tyto dva řádky si mohou prohodit hodnoty pokud jsou se společným plusem nebo naopak se společným mínusem

void setup() { //Inicializuje všechny piny pro 7 segment
  pinMode(LED_PIN_A, OUTPUT);
  pinMode(LED_PIN_B, OUTPUT);
  pinMode(LED_PIN_C, OUTPUT);
  pinMode(LED_PIN_D, OUTPUT);
  pinMode(LED_PIN_E, OUTPUT);
  pinMode(LED_PIN_F, OUTPUT);
  pinMode(LED_PIN_G, OUTPUT);
  //Vypne všechny piny pro 7 segment
  digitalWrite(LED_PIN_A, UNACTIVE);
  digitalWrite(LED_PIN_B, UNACTIVE);
  digitalWrite(LED_PIN_C, UNACTIVE);
  digitalWrite(LED_PIN_D, UNACTIVE);
  digitalWrite(LED_PIN_E, UNACTIVE);
  digitalWrite(LED_PIN_F, UNACTIVE);
  digitalWrite(LED_PIN_G, UNACTIVE);
}

uint8_t cislo = 0; //Vytvoření malé proměnné cislo

void loop() {
  cislo = cislo + 1; // Do čísla přičte 1
  if(cislo > 9){
    cislo = 0;
  }
  digitalWrite(LED_PIN_A, UNACTIVE);
  digitalWrite(LED_PIN_B, UNACTIVE);
  digitalWrite(LED_PIN_C, UNACTIVE);
  digitalWrite(LED_PIN_D, UNACTIVE);
  digitalWrite(LED_PIN_E, UNACTIVE);
  digitalWrite(LED_PIN_F, UNACTIVE);
  digitalWrite(LED_PIN_G, UNACTIVE);
  if(cislo == 1){ //Zapne piny pro 1
    digitalWrite(LED_PIN_A, UNACTIVE);
    digitalWrite(LED_PIN_B, ACTIVE);
    digitalWrite(LED_PIN_C, ACTIVE);
    digitalWrite(LED_PIN_D, UNACTIVE);
    digitalWrite(LED_PIN_E, UNACTIVE);
    digitalWrite(LED_PIN_F, UNACTIVE);
    digitalWrite(LED_PIN_G, UNACTIVE);
  }
  if(cislo == 2){ //Zapne piny pro 2
    digitalWrite(LED_PIN_A, ACTIVE);
    digitalWrite(LED_PIN_B, ACTIVE);
    digitalWrite(LED_PIN_C, UNACTIVE);
    digitalWrite(LED_PIN_D, ACTIVE);
    digitalWrite(LED_PIN_E, ACTIVE);
    digitalWrite(LED_PIN_F, UNACTIVE);
    digitalWrite(LED_PIN_G, ACTIVE);
  }
  if(cislo == 3){ //Zapne piny pro 3
    digitalWrite(LED_PIN_A, ACTIVE);
    digitalWrite(LED_PIN_B, ACTIVE);
    digitalWrite(LED_PIN_C, ACTIVE);
    digitalWrite(LED_PIN_D, ACTIVE);
    digitalWrite(LED_PIN_E, UNACTIVE);
    digitalWrite(LED_PIN_F, UNACTIVE);
    digitalWrite(LED_PIN_G, ACTIVE);
  }
  if(cislo == 4){ //Zapne piny pro 4
    digitalWrite(LED_PIN_A, UNACTIVE);
    digitalWrite(LED_PIN_B, ACTIVE);
    digitalWrite(LED_PIN_C, ACTIVE);
    digitalWrite(LED_PIN_D, UNACTIVE);
    digitalWrite(LED_PIN_E, UNACTIVE);
    digitalWrite(LED_PIN_F, ACTIVE);
    digitalWrite(LED_PIN_G, ACTIVE);
  }
  if(cislo == 5){ //Zapne piny pro 5
    digitalWrite(LED_PIN_A, ACTIVE);
    digitalWrite(LED_PIN_B, UNACTIVE);
    digitalWrite(LED_PIN_C, ACTIVE);
    digitalWrite(LED_PIN_D, ACTIVE);
    digitalWrite(LED_PIN_E, UNACTIVE);
    digitalWrite(LED_PIN_F, ACTIVE);
    digitalWrite(LED_PIN_G, ACTIVE);
  }
  if(cislo == 6){ //Zapne piny pro 6
    digitalWrite(LED_PIN_A, ACTIVE);
    digitalWrite(LED_PIN_B, UNACTIVE);
    digitalWrite(LED_PIN_C, ACTIVE);
    digitalWrite(LED_PIN_D, ACTIVE);
    digitalWrite(LED_PIN_E, ACTIVE);
    digitalWrite(LED_PIN_F, ACTIVE);
    digitalWrite(LED_PIN_G, ACTIVE);
  }
  if(cislo == 7){ //Zapne piny pro 7
    digitalWrite(LED_PIN_A, ACTIVE);
    digitalWrite(LED_PIN_B, ACTIVE);
    digitalWrite(LED_PIN_C, ACTIVE);
    digitalWrite(LED_PIN_D, UNACTIVE);
    digitalWrite(LED_PIN_E, UNACTIVE);
    digitalWrite(LED_PIN_F, UNACTIVE);
    digitalWrite(LED_PIN_G, UNACTIVE);
  }
  if(cislo == 8){ //Zapne piny pro 8
    digitalWrite(LED_PIN_A, ACTIVE);
    digitalWrite(LED_PIN_B, ACTIVE);
    digitalWrite(LED_PIN_C, ACTIVE);
    digitalWrite(LED_PIN_D, ACTIVE);
    digitalWrite(LED_PIN_E, ACTIVE);
    digitalWrite(LED_PIN_F, ACTIVE);
    digitalWrite(LED_PIN_G, ACTIVE);
  }
  if(cislo == 9){ //Zapne piny pro 9
    digitalWrite(LED_PIN_A, ACTIVE);
    digitalWrite(LED_PIN_B, ACTIVE);
    digitalWrite(LED_PIN_C, ACTIVE);
    digitalWrite(LED_PIN_D, ACTIVE);
    digitalWrite(LED_PIN_E, UNACTIVE);
    digitalWrite(LED_PIN_F, ACTIVE);
    digitalWrite(LED_PIN_G, ACTIVE);
  }
  if(cislo == 0){ //Zapne piny pro 0
    digitalWrite(LED_PIN_A, ACTIVE);
    digitalWrite(LED_PIN_B, ACTIVE);
    digitalWrite(LED_PIN_C, ACTIVE);
    digitalWrite(LED_PIN_D, ACTIVE);
    digitalWrite(LED_PIN_E, ACTIVE);
    digitalWrite(LED_PIN_F, ACTIVE);
    digitalWrite(LED_PIN_G, UNACTIVE);
  }
  delay(500);
}
