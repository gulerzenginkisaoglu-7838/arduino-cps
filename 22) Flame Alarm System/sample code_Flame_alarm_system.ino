/*
 * Author: MIUZEI
 * IDE V1.6.9
 * Email:support@miuzeipro.com 
 */
int beep = 8;
int flameVal = 0; 

void setup() {
  pinMode(beep, OUTPUT); 
}

void loop() {
  flameVal = analogRead(A0); 
  if (flameVal >= 200)     //According to the serial data to adjust.
  { 
    digitalWrite(beep, HIGH);
  }
  else
  { 
    digitalWrite(beep, LOW);
  }
}


