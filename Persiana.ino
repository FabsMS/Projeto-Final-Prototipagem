#include <Stepper.h>

const int passosParaVoltaCompleta = 2048; 

// Constante para definir o número de voltas que o motor fará para abrir/fechar a persiana
const int NumeroVoltas = 5;

// Conexões:
// - IN1 do driver → pino digital 8
// - IN2 do driver → pino digital 9
// - IN3 do driver → pino digital 10
// - IN4 do driver → pino digital 11
Stepper MotorDePasso(passosParaVoltaCompleta, 8, 10, 9, 11);

// Definição dos pinos dos sensores
const int PinoSensorChuva = 2;   // Sensor de chuva no pino digital 2
const int PinoSensorLuminosidade = A0; // Sensor de luminosidade no pino analógico A0

// Variável para rastrear o estado atual da persiana
// false = persiana aberta; true = persiana fechada
bool isClosed = false;

void setup() {
  pinMode(PinoSensorChuva, INPUT);
  Serial.begin(9600);  
  MotorDePasso.setSpeed(18); //Velocidade de rotações por minuto

void loop() {
  // Leitura dos sensores
  int NivelChuva = digitalRead(PinoSensorChuva);
  int NivelLuz = analogRead(PinoSensorLuminosidade);
  
  Serial.print("Chuva: ");
  Serial.print(NivelChuva);
  Serial.print(" | Luz: ");
  Serial.println(NivelLuz);
  
  // Se estiver chovendo OU estiver muito claro, fecha a persiana
  if ((NivelChuva == LOW || NivelLuz > 350) && !isClosed) {
    Serial.println("Fechando persiana...");
    MotorDePasso.step(-passosParaVoltaCompleta * NumeroVoltas);
    isClosed = true;
  }
  // Se não estiver chovendo E não estiver muito claro, abre a persiana
  else if ((NivelChuva == HIGH && NivelLuz <= 350) && isClosed) {
    Serial.println("Abrindo persiana...");
    MotorDePasso.step(passosParaVoltaCompleta * NumeroVoltas);
    isClosed = false;
  }
  
  delay(1000); // uma leitura a cada segundo
