int redLED = 13;
int yellowLED = 12;
int blueLED = 11;
int greenLED = 10;

void setup() 
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop()
{
  digitalWrite(redLED, HIGH); 
  digitalWrite(redLED, HIGH); 
  delay(1000); 
  digitalWrite(redLED, LOW); 
  digitalWrite(redLED, LOW); 
  delay(1000);  
  digitalWrite(yellowLED, HIGH); 
  digitalWrite(yellowLED, HIGH); 
  delay(1000); 
  digitalWrite(yellowLED, LOW); 
  digitalWrite(yellowLED, LOW); 
  delay(1000); 
  digitalWrite(blueLED, HIGH); 
  digitalWrite(blueLED, HIGH); 
  delay(1000); 
  digitalWrite(blueLED, LOW); 
  digitalWrite(blueLED, LOW); 
  delay(1000); 
  digitalWrite(greenLED, HIGH); 
  digitalWrite(greenLED, HIGH); 
  delay(1000); 
  digitalWrite(greenLED, LOW); 
  digitalWrite(greenLED, LOW); 
  delay(1000);                
   
}
