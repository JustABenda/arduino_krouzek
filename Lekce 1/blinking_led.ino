#define LED_PIN 4 //Vytvoření přezdívky pro číslo pinu na kterém je LED

void setup() { //Kód, který probíhá jednou na začátku, tj. při zapnutí nebo restartování Arduina
  pinMode(LED_PIN, OUTPUT); //Inicializuje pin uložený pod přezdívkou LED_PIN na OUTPUT tj. výstup
  digitalWrite(LED_PIN, LOW); //Vypne LED abychom začínali se zhasnutou LED
}

void loop() { //Kód, který se spustí po proběhnutí funkce setup() a do nekonečna se opakuje
  digitalWrite(LED_PIN, HIGH); //Nastav LED pod pinem LED_PIN na hodnotu HIGH=Zapnout
  delay(500); //Čekej 500ms
  digitalWrite(LED_PIN, LOW); //Nastav LED pod pinem LED_PIN na hodnotu LOW=Vypnout
  delay(500); //Čekej 500ms
}
