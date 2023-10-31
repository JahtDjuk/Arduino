// Definitions and Initilizations
//
#define LED 2 // define digital pin 2 as the LED
int POTEN = A1; // initialize analog pin 1 as the potentiometer 

void setup() {
  // Setting the pins
  //
  pinMode(LED,OUTPUT); // pin set to output as it powers the LED
  pinMode(POTEN, INPUT); // pin set to input as it is erading the value from the potentiometer
  Serial.begin(9600); // Initiliaze serial communication

}


void loop() {
  // Read value from potentiometer
  //
  int value = analogRead(POTEN);
  // Print value
  //
  Serial.print("Value Read: ");
  Serial.println(value);
  // Turn the LED on
  //
  digitalWrite(LED,HIGH);
  delay(value); // the delay is set as the value read from the potentiometer
  
  //Turn the LED off
  //
  digitalWrite(LED,LOW);
  delay(value);
}
