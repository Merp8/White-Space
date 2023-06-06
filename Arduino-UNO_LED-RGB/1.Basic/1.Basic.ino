const int Red_pin = 9;     //Pin Red   (require PWM)
const int Green_pin = 10;  //Pin Green (require PWM)
const int Blue_pin = 11;   //Pin Blue  (require PWM)

void setup() {

  pinMode(Red_pin,OUTPUT);
  pinMode(Green_pin,OUTPUT);
  pinMode(Blue_pin,OUTPUT);

}

void loop() {
  
  analogWrite(Red_pin,255);     //Red   brightness level (0-255)
  analogWrite(Green_pin,0);     //Green brightness level (0-255)
  analogWrite(Blue_pin,0);      //Blue  brightness level (0-255)

}
