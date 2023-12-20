#define LedPin 5
#define Buzzer 4
#define Motion 2
#define Temp 15


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedPin, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(Motion, INPUT);
  pinMode(Temp, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int motion=digitalRead(Motion);
  if(motion==HIGH){
    Serial.println("Motion Detected:");
    digitalWrite(LedPin, HIGH);
    digitalWrite(Buzzer, HIGH);

    delay(1000);
    
  }
  else{
    digitalWrite(LedPin, LOW);
    digitalWrite(Buzzer, LOW);
  }

  int temp=analogRead(Temp);
  float temperature=((temp*5.0)/1023)*100;
  Serial.print(temperature);
  Serial.println("%C");
}
