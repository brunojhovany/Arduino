int pin1=2,pin2=3,pin3=4,pin4=5;
int A=7,B=8;
int LED=12;
int A_2,B_2;
int pin11=0,pin22=0,pin33=0,pin44=0,resA=0,resB=0;
void setup() {

  pinMode(pin1,INPUT);
  pinMode(pin2,INPUT);
  pinMode(pin3,INPUT);
  pinMode(pin4,INPUT);

    pinMode(A,INPUT);
    pinMode(B,INPUT);
    pinMode(LED,OUTPUT);
}
void loop() {
  A_2=digitalRead(A);
  B_2=digitalRead(B);

if(A_2==HIGH){
      pin11=digitalRead(pin1);
      pin22=digitalRead(pin2);
      pin33=digitalRead(pin3);
      pin44=digitalRead(pin4);
    if(pin11==HIGH){
      resA=resA+1;
    }
    if(pin22==HIGH){
      resA=resA+2;
    }
    if(pin33==HIGH){
      resA=resA+4;
    }
    if(pin44==HIGH){
      resA=resA+8;
    }
      resA=resA;
   while(A_2==HIGH &&  B_2==LOW){

        A_2=digitalRead(A);

      }

  if(B_2==HIGH && A_2==LOW){
      pin11=digitalRead(pin1);
      pin22=digitalRead(pin2);
      pin33=digitalRead(pin3);
      pin44=digitalRead(pin4);
    if(pin11==HIGH){
      resB=resB+1;
    }
    if(pin22==HIGH){
      resB=resB+2;
    }
    if(pin33==HIGH){
      resB=resB+4;
    }
    if(pin44==HIGH){
      resB=resB+8;
    }
      resB=resB;
       while(A_2==LOW && B_2==HIGH){

        B_2=digitalRead(B);
        delay
      }


           if(resA>resB){
        digitalWrite(LED,HIGH);
        delay(4000);
      }
    }

    else{
       digitalWrite(LED,HIGH);
      delay(300);
       digitalWrite(LED,LOW);
      delay(300);
      resA=0;
      resB=0;
    }

}
}
