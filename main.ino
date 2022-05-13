int LED = 7; 
int Shock_sensor = 3; 
int vibrate; 
void setup () {
  pinMode (LED, OUTPUT);   
  pinMode (Shock_sensor, INPUT); // input dari sensor
} 
void loop () {
  vibrate = digitalRead (Shock_sensor); 
  if (vibrate == HIGH ) {
    // apabila sensor kesan vibration/input, LED flashes (berkelip)
    digitalWrite(LED, LOW);
  } else {
    digitalWrite (LED, HIGH);
  }
}
