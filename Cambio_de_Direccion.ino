void setup() { 
  pinMode(4,OUTPUT); //Salida a Motor 1
  pinMode(5,OUTPUT); //Salida a Motor 2
  pinMode(A0,INPUT); //VoltajePotenciometro
  pinMode(6,OUTPUT); //Modulador
}
int pot1;
double voltaje;
double x;
void loop() {
  pot1= analogRead(A0);
  voltaje = pot1*5/1023;
  if(voltaje<2.5)
  {
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    x=map(voltaje,0,2.5,25.5,0);
    analogWrite(6,x); 
  }
  if(voltaje>2.5)
  {
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    x=map(voltaje,2.5,5,0,25.5);
    analogWrite(6,x); 
  }
  if(voltaje==2.5)
  {
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    x=0;
    analogWrite(6,x);
  }
  
   
}
