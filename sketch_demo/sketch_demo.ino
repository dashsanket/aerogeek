// Demo to light on LED at 13

int ledPin = 13;

void setup()
{
  // initialize pins as outputs
  pinMode(ledPin, OUTPUT);
  
}


void loop()
{
 digitalWrite(ledPin, HIGH);
 delay(1000);
 digitalWrite(ledPin, LOW);
 delay(1000);
}

