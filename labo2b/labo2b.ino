int LDR = A0;
int sensor = 0;
float valor = 0;

int red = 6;
int green = 5;
int blue = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(LDR, INPUT);
  Serial.begin(9600);

  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = analogRead(LDR);
  valor = (sensor*5.0)/1023.0;
  Serial.println(valor);
  delay(1000);

  // variar colores 
    if (valor <= 0.15) {  // Tapado
      setColor(255, 0, 0);  
      delay(1000);
    } else if (valor > 0.15 && valor <= 2.00) {  // Iluminado
      setColor(0, 0, 255);  
      delay(1000);
    } else {  // Estado normal
      setColor(0, 255, 0);  
      delay(1000);
  }
}

void setColor(int r, int g, int b){
  digitalWrite(red, r);
  digitalWrite(green,g);
  digitalWrite(blue, b);
}
