/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/AnalogReadSerial/
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(6, OUTPUT);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  int mappedValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(6, mappedvalue) } 
   // print out the value you read:
  Serial.println(sensorValue);
  delay(1);  // delay in between reads for stability

  if(sensorValue > 200) {
    digitalWrite(6, HIGH);  // turn the LED on (HIGH is the voltage level)
     }                    // wait for a second
  else{
    digitalWrite(6, LOW);}
    

    

/*
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
   delay(sensorValue);                      // wait for a second
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(sensorValue); edits
*/