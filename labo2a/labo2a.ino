int red = 6;
int green = 5;
int blue = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  setColor(255,0,0);
  delay(1000);
  setColor(0,255,0);
  delay(1000);
  setColor(0,0,255);
  delay(1000);
  setColor(125,255,100);
  delay(1000);
}

// funcion 
void setColor(int r, int g, int b){
  digitalWrite(red, r);
  digitalWrite(green,g);
  digitalWrite(blue, b);
}