const int Red_pin =  9;    //Pin Red   (require PWM)
const int Green_pin = 10;  //Pin Green (require PWM)
const int Blue_pin = 11;   //Pin Blue  (require PWM)

void setup() {

  pinMode(Red_pin,OUTPUT);
  pinMode(Green_pin,OUTPUT);
  pinMode(Blue_pin,OUTPUT);

}

void loop(){

  set_color(255,0,0);   //Red
  delay(500);

  set_color(0,255,0);   //Green
  delay(500);

  set_color(0,0,255);   //Blue
  delay(500);
  
}

void set_color(int R,int G,int B){
  analogWrite(Red_pin,R);
  analogWrite(Green_pin,G);
  analogWrite(Blue_pin,B);
}