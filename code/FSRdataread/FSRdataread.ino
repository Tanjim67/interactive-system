
int buzzerPin = 2;
int sensorPin = A0;    
int sensorValue = 0; 

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue=map(analogRead(sensorPin),0,630,0,100);
  Serial.println(sensorValue);
  Serial.print(" ");
  delay(50);
  if (sensorValue >=90){
    delay(1000);
    if(sensorValue >=90){
      digitalWrite(buzzerPin, HIGH);
    }
  }
 else 
  digitalWrite(buzzerPin, LOW);
}
