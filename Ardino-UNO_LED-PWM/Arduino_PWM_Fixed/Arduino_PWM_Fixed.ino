//อย่าลืมต่อตัวต้านทานจำกัดแรงดันนะครับ
void setup() //Setup
{
  pinMode(3,OUTPUT); //Set Pin "3" = OUTPUT
}

void loop() //Loop
{
  analogWrite(3,20);   // Set led Pin "3" value = 20(0-255)
}

//@WhiteSpaceCH