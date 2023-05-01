// Code Made by Gaurav@Electrovilla:- www.youtube.com/@Electrovilla
// Tutorial Video:- https://youtu.be/9olFSDUw1So
int micPin = A0;          // pin that the mic is attached to
int micValue1 = 0;  
int micValue2 = 0; // the Microphone value
int led1 = 13; // Output at D13
boolean lightOn = false;


void setup() {
  pinMode(led1, OUTPUT);
  pinMode(micPin, INPUT);
  delay(500);
  Serial.begin(9600);  //for test the input value initialize serial
}

void loop() {
  micValue1 = analogRead(micPin);  // read pin value
  Serial.println(micValue1);
  delay(1);
  micValue2 = analogRead(micPin);
  Serial.println(micValue2);
  
  if (micValue1-micValue2 > 2||micValue2-micValue1 > 2){
  lightOn = !lightOn;
  delay(100);
  digitalWrite(led1, lightOn);
  }
} 


