const int potPin = 35;
int potVal = 0;
int led = LED_BUILTIN;
int ledState = LOW;
int buzzer = 18;
int button = 19;

unsigned long prevTime = 0;
const long interTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(button, INPUT_PULLDOWN);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currTime = millis(); 
  unsigned long potVal = analogRead(potPin);
  

  if (currTime - prevTime >= potVal){
    prevTime = currTime;

    if (ledState == LOW){
      ledState = HIGH;
    }else{
      ledState = LOW;
    }

    digitalWrite(led, ledState);
  }
}
