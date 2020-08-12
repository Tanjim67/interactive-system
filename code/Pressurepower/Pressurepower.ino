//This is a simple code for IAS'20 project by Tanjim Ul Haque. The project is a textile pressure sensor
// Where it will trigger an action (buzzer) when a certain pressure is applied over a period of time.

int buzzerPin = 2; //here buzzer cts as the service provided when a user is in danger
int sensorPin = A0;    
int sensorValue = 0; 

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue=map(analogRead(sensorPin),0,630,0,100); //mapping the value to 0-100 range
  Serial.println(sensorValue);
  Serial.print(" ");
  delay(50);
  if (sensorValue >=60){    //when the pressure value is greater than 60 it will wait for a certain time
    delay(3000);
    if(sensorValue >=60){   // if the user faces an emergency or presses the button for a long time it triggers the action
      digitalWrite(buzzerPin, HIGH);
    }
  }
 else                       //else it will consider it as a user error and does not trigger anything. 
  digitalWrite(buzzerPin, LOW);
}
