void setup() {
  Serial.begin(9600);
  Serial.println("Kalkulator Arduino UNO");
  Serial.println("Ketik format: angka1 operator angka2");
  Serial.println("Contoh: 10 + 5");
}

void loop() {
  if (Serial.available()) {
    float a, b;
    char op;

    a = Serial.parseFloat();
    op = Serial.read();
    b = Serial.parseFloat();

    float hasil = 0;

    if (op == '+') hasil = a + b;
    if (op == '-') hasil = a - b;
    if (op == '*') hasil = a * b;
    if (op == '/') hasil = a / b;

    Serial.print("Hasil: ");
    Serial.println(hasil);
  }
}
