//Deklarera vilken PIN sensorPin ska vara i
int sensorPin = 13;
//Deklarering av variabel som sedan ska vara lika med Inputsignalen
int value;
//Deklarera Räknaren till 0
int counter = 0;

void setup(){
  //Sätta sensorpin som en inputSignal
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
}

void loop(){
  //Value är nu lika med inputsignalen
  value = digitalRead(sensorPin);
//Om Arduino får en signal av IR-sensorn, vänta 0,1 sekunder, Lägg till 1 på countern, skriv ut countervariabeln.
  if(value == LOW){
    delay(100);
    counter+=1;
    Serial.print(counter);
  }

}
