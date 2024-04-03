// C++ code
//

//cubo[profundidad][filas][columnas]
int cubo[3][3][3] = {
  { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } },
  { { 10, 11, 12 }, { 13, 14, 15 }, { 16, 17, 18 } },
  { { 19, 20, 21 }, { 22, 23, 24 }, { 25, 26, 27 } }
};

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

  Serial.println("Comienza cubo 3x3x3:");
  for (int p = 0; p < 3; p++) {
    for (int f = 0; f < 3; f++) {
      for (int c = 0; c < 3; c++) {
        Serial.print(" Posicion profundidad = ");
        Serial.print(p);
        Serial.print(" , fila = ");
        Serial.print(f);
        Serial.print(" , columna = ");
        Serial.print(c);
        Serial.print(" , Valor = ");
        Serial.println(cubo[p][f][c]);
      }
    }
  }
  Serial.println("Finaliza");
  delay(4000);
}