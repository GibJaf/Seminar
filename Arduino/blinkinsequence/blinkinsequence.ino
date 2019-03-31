int LED1 = 8;
int LED2 = 7;
int LED3 = 5;
int LED4 = 4;
int LED5 = 3;
int LED6= 2;

void setup() {
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
   pinMode(LED5, OUTPUT);
   pinMode(LED6, OUTPUT);
  }

void loop() {
  digitalWrite(LED1, HIGH);    // turn on LED1
  delay(100);                 
  digitalWrite(LED2, HIGH);    // turn on LED2
  delay(100);                       
  digitalWrite(LED3, HIGH);    // turn on LED3
  delay(100);                  
  digitalWrite(LED4, HIGH);    // turn on LED4
  delay(100);                  
  digitalWrite(LED5, HIGH);    // turn on LED5
  delay(100);                  
  digitalWrite(LED6, HIGH);    // turn on LED6
  delay(1000);                 
  digitalWrite(LED6, LOW);     // turn off LED1
  delay(100);                  
  digitalWrite(LED5, LOW);     // turn off LED2
  delay(100);                  
  digitalWrite(LED4, LOW);     // turn off LED3
  delay(100);                  
  digitalWrite(LED3, LOW);     // turn off LED4
  delay(100);                  
  digitalWrite(LED2, LOW);     // turn off LED5
  delay(100);                  
  digitalWrite(LED1, LOW);     // turn off LED5
  delay(100);                  
}
