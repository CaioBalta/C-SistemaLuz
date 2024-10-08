ATV 03

const int pinoLDR = A0;   
const int led1 = 6;       
const int led2 = 7;       
const int led3 = 8;       
const int led4 = 9;      
const int led5 = 10;     


int limiar1 = 678;
int limiar2 = 600;
int limiar3 = 400;
int limiar4 = 200;
int limiar5 = 100;

void setup() {
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  
  int valorLDR = analogRead(pinoLDR);

  
  Serial.print("Luminosidade: ");
  Serial.println(valorLDR);

  
  if (valorLDR < limiar5) {
    digitalWrite(led5, HIGH);  
  } else {
    digitalWrite(led5, LOW);   
  }

  if (valorLDR < limiar4) {
    digitalWrite(led4, HIGH); 
  } else {
    digitalWrite(led4, LOW);   
  }

  if (valorLDR < limiar3) {
    digitalWrite(led3, HIGH);  
  } else {
    digitalWrite(led3, LOW);  
  }

  if (valorLDR < limiar2) {
    digitalWrite(led2, HIGH);  
  } else {
    digitalWrite(led2, LOW);   
  }

  if (valorLDR < limiar1) {
    digitalWrite(led1, HIGH);  
  } else {
    digitalWrite(led1, LOW);   
  }

 
  delay(500);
}