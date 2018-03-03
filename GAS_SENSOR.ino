int blue=10;
int red=11;
int green=12;
int limit=200;
int buzzer=13;
int smoke=A5;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smoke, INPUT);
  Serial.begin(9600);
}
void loop()
{
  int sensor=analogRead(smoke);
  Serial.println(sensor);
  if(sensor > limit)
  {
    digitalWrite(green,LOW);
    digitalWrite(buzzer,HIGH);
    digitalWrite(red,HIGH);
  }
  else
  {
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);   
    digitalWrite(buzzer,LOW);                    
  }

}   


