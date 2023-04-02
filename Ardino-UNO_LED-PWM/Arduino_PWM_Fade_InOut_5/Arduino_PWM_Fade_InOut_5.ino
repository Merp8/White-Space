//อย่าลืมต่อตัวต้านทานจำกัดแรงดันนะครับ
int A = 3;    //A = Led Pin "3"
int B = 5;    //B = Led Pin "5"
int C = 6;    //C = Led Pin "6"
int D = 9;    //D = Led Pin "9"
int E = 10;   //E = Led Pin "10"

void setup()  //Setup
{
  pinMode(A,OUTPUT);    //Set A(Pin"3") = OUTPUT
  pinMode(B,OUTPUT);    //Set B(Pin"5") = OUTPUT
  pinMode(C,OUTPUT);    //Set C(Pin"6") = OUTPUT
  pinMode(D,OUTPUT);    //Set D(Pin"9") = OUTPUT
  pinMode(E,OUTPUT);    //Set E(Pin"10") = OUTPUT
}

void loop()   //Loop
{
  for (int x = 0 ; x<=255 ; x=x+1)  //loop 0 to 255
  {
    analogWrite(A,x);    //value = x
    analogWrite(B,x);
    analogWrite(C,x);
    analogWrite(D,x);
    analogWrite(E,x);
    delay(3);             //wait 3 ms
  }

  for (int x = 255 ; x>=0 ; x=x-1)    //loop 255 to 0
  {
    analogWrite(A,x);     //value = x
    analogWrite(B,x);     
    analogWrite(C,x);     
    analogWrite(D,x);     
    analogWrite(E,x);
    delay(3);             //wait 3 ms
  }

}

//@WhiteSpaceCH