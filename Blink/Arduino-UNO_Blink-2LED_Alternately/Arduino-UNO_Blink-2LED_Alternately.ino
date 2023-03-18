int LED2 = 8;                       // Set LED2 = pin 8
int Dely = 250;                     // Set Dely = Time delay (250 = 0.25 second)
//อย่าลืมต่อตัวต้านทานจำกัดแรงดันนะครับ

void setup() // Setup
{
  pinMode(LED_BUILTIN, OUTPUT);     // Set LED_BUILTIN = OUTPUT (LED_BUILIN = pin "13" on Arduino UNO)
  pinMode(LED2, OUTPUT);            // Set LED2(Pin 8) = OUTPUT
}

void loop() // Loop
{
  digitalWrite(LED_BUILTIN, HIGH);  // LED_BUILTIN = ON
  digitalWrite(LED2, LOW);          // LED2 = OFF

  delay(Dely);                      // wait = Dely

  digitalWrite(LED_BUILTIN, LOW);   // LED_BUILTIN = OFF 
  digitalWrite(LED2, HIGH);         // LED2 = ON
  
  delay(Dely);                      // wait = Dely
}

//@WhiteSpaceCH