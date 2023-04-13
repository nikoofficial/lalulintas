int greenPin = 2; // Pin untuk lampu hijau
int yellowPin = 3; // Pin untuk lampu kuning
int redPin = 4; // Pin untuk lampu merah

void setup() {
  pinMode(greenPin, OUTPUT); // Mengatur pin lampu hijau sebagai output
  pinMode(yellowPin, OUTPUT); // Mengatur pin lampu kuning sebagai output
  pinMode(redPin, OUTPUT); // Mengatur pin lampu merah sebagai output
}

void loop() {
  // Lampu hijau menyala selama 10 detik
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);
  delay(10000);

  // Lampu kuning menyala selama 3 detik
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(redPin, LOW);
  delay(3000);

  // Lampu merah menyala selama 10 detik
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(10000);

  // Lampu kuning menyala selama 3 detik sebelum kembali ke lampu hijau
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);
  digitalWrite(redPin, LOW);
  delay(3000);
}