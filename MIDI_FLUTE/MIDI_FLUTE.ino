/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
int b1 = 2;
int b2 = 3;
int b3 = 4;
int b4 = 5;
int b5 = 6;
int b6 = 7;



// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  pinMode(b1, INPUT_PULLDOWN);
  pinMode(b2, INPUT_PULLDOWN);
  pinMode(b3, INPUT_PULLDOWN);
  pinMode(b4, INPUT_PULLDOWN);
  pinMode(b5, INPUT_PULLDOWN);
  pinMode(b6, INPUT_PULLDOWN);

  pinMode(A0, INPUT_PULLDOWN);

}

// the loop routine runs over and over again forever:
void loop() {

  int b1State = digitalRead(b1);
  int b2State = digitalRead(b2);
  int b3State = digitalRead(b3);
  int b4State = digitalRead(b4);
  int b5State = digitalRead(b5);
  int b6State = digitalRead(b6);



  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.print("B1:");
  Serial.print(b1State);
  Serial.print("  |  ");

Serial.print("B2:");
  Serial.print(b2State);
  Serial.print("  |  ");

    Serial.print("B3:");
  Serial.print(b3State);
  Serial.print("  |  ");

Serial.print("B4:");
  Serial.print(b4State);
  Serial.print("  |  ");

      Serial.print("B5:");
  Serial.print(b5State);
  Serial.print("  |  ");

Serial.print("B6:");
  Serial.print(b6State);
  Serial.print("  |  ");

  Serial.print("Pressure:");
  Serial.println(sensorValue);
  



  
  delay(200);        // delay in between reads for stability
}
