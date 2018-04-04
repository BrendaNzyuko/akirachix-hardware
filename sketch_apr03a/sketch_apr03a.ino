int LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1, HIGH);
  Serial.print("LED on \n");
  delay(1000);
  digitalWrite(0, LOW);
  Serial.print("LED off \n");
  delay(1000);
  

}
