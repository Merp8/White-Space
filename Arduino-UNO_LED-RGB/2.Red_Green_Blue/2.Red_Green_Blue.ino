const int Red_pin =  9;    //Pin Red   (require PWM)
const int Green_pin = 10;  //Pin Green (require PWM)
const int Blue_pin = 11;   //Pin Blue  (require PWM)

void setup() {

  pinMode(Red_pin,OUTPUT);
  pinMode(Green_pin,OUTPUT);
  pinMode(Blue_pin,OUTPUT);

}

void loop() {
  
  //Red
  analogWrite(Red_pin,255);   //Red   brightness level Max (0-255)
  analogWrite(Green_pin,0);      
  analogWrite(Blue_pin,0);      

  delay(500);    //wait 0.5 second              

  //Green
  analogWrite(Red_pin,0);      
  analogWrite(Green_pin,255); //Green brightness level Max(0-255)
  analogWrite(Blue_pin,0);      

  delay(500);   

  //Blue
  analogWrite(Red_pin,0);      
  analogWrite(Green_pin,0);      
  analogWrite(Blue_pin,255);  //Blue  brightness level Max(0-255)

  delay(500);    

}
