int xPin=A0;
int yPin=A1;
int buttonPin=2;

int xPosition;
int yPosition;
int buttonSituation;


void setup() {
  
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  

}

void loop() {
  xPosition=analogRead(xPin);
  yPosition=analogRead(yPin);

  buttonSituation=digitalRead(buttonPin);

  Serial.print("X Konumu: ");
  Serial.print(xPosition);
  Serial.print(", ");
  
  Serial.print("Y Konumu: ");
  Serial.print(yPosition);
  Serial.print(", ");
  
  Serial.print("Buton Durumu: ");
  Serial.println(buttonSituation);
  
  
  delay(100);

}
