//Very simple code plus a MOSFET to cut off the power supplied to this Arduino.

int count=0;//This will count how many times we blink before turning off

void setup() {
  pinMode(13, OUTPUT);//This is the blinky light
  pinMode(12, OUTPUT);//This is the MOSFET gate
  digitalWrite(12, HIGH);//Immediately activate the MOSFET gate
}

void loop() {
  
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
  count++;
  if(count>5)//After the fifth blink
  {
    digitalWrite(12, LOW);//Shut down the gate cutting off the power.
  }
}
