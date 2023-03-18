//LED1 = Pin13 & Gnd
//LED2 = Pin8 & Gnd
//อย่าลืมต่อตัวต้านทานจำกัดแรงดัน

void setup() //setup
{
  pinMode(LED_BUILTIN, OUTPUT);     // Set LED_BUILTN = OUTPUT (LED_BUILIN = pin "13" on Arduino UNO)
  pinMode(8, OUTPUT);               // Set Pin8 = OUTPUT
}

void loop() //loop
{
  digitalWrite(LED_BUILTIN, HIGH);  // LED_BUILTIN = ON
  digitalWrite(8, HIGH);            // Pin8 = ON
  delay(1000);                      // wait 1 second (1000ms = 1 second)
  digitalWrite(LED_BUILTIN, LOW);   // LED_BUILTIN = OFF 
  digitalWrite(8, LOW);             // Pin8 = OFF 
  delay(1000);                      // wait 1 second (1000ms = 1 second)
}

//@WhiteSpaceCH