/*
  Blink a LED for the SHA2017 badge
  LED is connected to the X2 2x6 connector "Port Expander", to top right PIN1
  (GND) and to PIN5 (EXTIO-2, which is connected to IO17 on the ESP32)
  The pinout of the connector "Port Expander" is here:
  https://github.com/SHA2017-badge/PCB/blob/master/sha2017_rev0_1_0_dev_schematic.pdf
*/

#define LED_BUILTIN 17

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
