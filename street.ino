// The port on the aurdino where we connected the led
// Variable to store the port number for led
int led = 7;
// The port on aurdino where we connected the ldr registor
// Variable to store the port number for ldr
int ldrPin = A0;
// Setting the threshold value for further comparison
int t = 3;


void setup()
{
  // Creating communication channel
  Serial.begin(9600);
  // setting whether the device is input or output
  pinMode(led, OUTPUT);
}

void loop()
{
  // variable which will be used to store the values read by the LDR
  // analogRead is a method for reading the values from the input devices connected
  int data = analogRead(ldrPin);
  // printing the values for display purpose
  Serial.println("");
  Serial.print("Light Sensor");
  Serial.print("Value = ");
  Serial.print(data);


  // checking the values of the data read from the LDR
  if(data <= t)
  {
    // Turning the LED ON When the data value is less than or equal to the threshhold frequency
    // digiralWrite is a method used to tell the output devices what they need to do
    digitalWrite(led, HIGH);
  }
  else
  {
    // Turning the LED OFF When the data value is greater than the threshhold frequency
    digitalWrite(led, LOW);
  }
}