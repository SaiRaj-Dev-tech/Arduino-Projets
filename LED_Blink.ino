#define LED1 3  // Define your LED Pin Number
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1,HIGH);
  delay(2000);  // 2 Seconds On
  digitalWrite(LED1,LOW);
  delay(2000);  // 2 Seconds Off
}






