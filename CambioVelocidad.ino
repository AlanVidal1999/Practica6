void setup() { 
  pinMode(4,OUTPUT); //Salida a Motor
  pinMode(5,OUTPUT); //Salida a Motor
  pinMode(A0,INPUT); //VoltajePotenciometro
  pinMode(6,OUTPUT); //Modulador
}
int pot1;
double voltaje;
double x;
void loop() {
  pot1= analogRead(A0);
  voltaje = pot1*5/1023;
  x = voltaje*255/5;
  digitalWrite(4,HIGH);
  analogWrite(6,x);  
}
