int speakerPin = 9;
int photocellPin = 0;
 
void setup()
{
}
 
void loop()
{
int reading = analogRead(photocellPin);
int pitch = 330 + reading / 4;
tone(speakerPin, pitch);
}
