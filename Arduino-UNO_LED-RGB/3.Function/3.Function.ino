const int Red_pin =  9;    //Pin Red   (require PWM)
const int Green_pin = 10;  //Pin Green (require PWM)
const int Blue_pin = 11;   //Pin Blue  (require PWM)

void setup() {

  pinMode(Red_pin,OUTPUT);
  pinMode(Green_pin,OUTPUT);
  pinMode(Blue_pin,OUTPUT);

}

void loop(){
  
  Red();                        //Red Function
  delay(500);                   //wait 0.5 second
  Green();                      //Green Function
  delay(500);
  Blue();                       //Blue Function
  delay(500);

}

void Red(){
  analogWrite(Red_pin,255);     //Red
  analogWrite(Green_pin,0);
  analogWrite(Blue_pin,0);
}

void Green(){
  analogWrite(Red_pin,0);
  analogWrite(Green_pin,255);   //Green
  analogWrite(Blue_pin,0);
}

void Blue(){
  analogWrite(Red_pin,0);
  analogWrite(Green_pin,0);
  analogWrite(Blue_pin,255);    //Blue
}