//อย่าลืมต่อตัวต้านทานจำกัดแรงดันนะครับ
int A =3;   //A = Led Pin "3"

void setup() //Setup
{
  pinMode(A,OUTPUT);    //Set A(Pin"3") = OUTPUT
}

void loop()   //Loop
{
  for( int x=255 ; x >= 0 ; x=x-2 )   //loop 255 to 0
  {
    analogWrite(A,x);   //value = x

    delay(12);          //wait 12 ms
  }

}

//@WhiteSpaceCH