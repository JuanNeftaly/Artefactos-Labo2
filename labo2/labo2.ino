// variables 
int LDR = A0;
int sensor = 0;
float valor = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = analogRead(LDR);
  valor = (sensor*5.0)/1023.0;
  Serial.println(valor);
  delay(1000); // tiempo de espera antes del siguiente
}
