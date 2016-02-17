int pinAlarmCut = 7;
int pinAlarmOut = 8;
int pinAlarmOn = 12; 

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

  
  pinMode(pinAlarmCut, INPUT);
  pinMode(pinAlarmOut, OUTPUT);
  pinMode(pinAlarmOn, OUTPUT);

  digitalWrite(pinAlarmOut, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  int cutState = digitalRead(pinAlarmCut);
  
  if(cutState == 0)
  {
    Serial.write("TYV!!!\n");
    digitalWrite(pinAlarmOn, HIGH);
  }
  else
  {
    Serial.write("Alt vel\n");
    digitalWrite(pinAlarmOn, LOW);
  }
  delay(100);
}
