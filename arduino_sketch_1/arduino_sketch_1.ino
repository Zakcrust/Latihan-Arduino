// this could be costumize as avaiable port
int led = 13;
int out;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available() > 0)
  {
    int readData = Serial.read();
    if(readData == 'a');
    {
       digitalWrite(led,HIGH);
       Serial.println("LED Nyala");  
    }
    else if(readData == 'b');
    {
      digitalWrite(led,LOW);
      Serial.println("LED Mati");
    }
  }
  // put your main code here, to run repeatedly:

}
