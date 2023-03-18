void setup() //setup
{
  pinMode(LED_BUILTIN, OUTPUT);     // LED_BUILIN = pin "13" in Arduino UNO
}

void loop() //loop
{
  digitalWrite(LED_BUILTIN, HIGH);  // ON
  delay(1000);                      // wait 1 second (1000ms = 1 second)
  digitalWrite(LED_BUILTIN, LOW);   // OFF 
  delay(1000);                      // wait 1 second (1000ms = 1 second)
}


//@WhiteSpaceCH