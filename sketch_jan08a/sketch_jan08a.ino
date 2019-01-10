int Laser = 6;
int Detector = 7;

int x = 0;

void setup()
{ 
  Serial.begin (9600);
  pinMode(Laser, OUTPUT);
  pinMode(Detector, INPUT);
 
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  
}

void loop()
{
  digitalWrite(Laser, HIGH);
  boolean val = digitalRead(Detector);
  Serial.println(val);
}  

void loop()
{
  
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(10, HIGH);
  while (analogRead(A7) == 1) {
    digitalWrite(3, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    while (analogRead(A7) == 1) {
      digitalWrite(5, LOW);
      delay(1000); // Wait for 1000 millisecond(s)
      while (analogRead(A7) == 1) {
        digitalWrite(10, LOW);
      }
    }
  }
}
