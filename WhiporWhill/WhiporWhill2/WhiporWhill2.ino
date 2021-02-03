int tiltSwitch = 0;
int buzzer = 1;

int tilted;

void setup() {
pinMode(buzzer, OUTPUT);
pinMode(tiltSwitch, INPUT);
}

void loop() {

tilted = digitalRead(tiltSwitch);

if(tilted == 0){
   tone(buzzer, 1000);
   delay(300);
   tone(buzzer,500);
   delay(300);
   tone(buzzer,1000);
   delay(800);
   tone(buzzer,0);
   delay(200);
  
}
else if (tilted == 1){
//  digitalWrite(ledPin, LOW);
noTone(buzzer);
}
 
}
