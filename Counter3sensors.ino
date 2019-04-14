int sensorPin1 = 13;
int sensorPin2 = 12;
int sensorPin3 = 11;
int val1;
int val2;
int val3;
int counter = 0;

void setup(){
  pinMode(sensorPin1,INPUT);
  pinMode(sensorPin2,INPUT);
  pinMode(sensorPin3,INPUT);
  Serial.begin(9600);
}

void loop(){
  val1 = digitalRead(sensorPin1);
  val2 = digitalRead(sensorPin2);
  val3 = digitalRead(sensorPin3);
  if((val1 == LOW && val2 == LOW) || (val1 == LOW && val2 == LOW) || (val2 == LOW && val3 == LOW) ){
    delay(100);
    counter+=1;
    Serial.print(counter);
  }

}
