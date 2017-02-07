int pin1=2, pin2=3,pin3=4, pin4=5, entradaA=7, entradaB=8, LED=12, WARNING=9;
int estadoA=0,estadoB=0;
int valor1=0,valor2=0,valor3=0,valor4=0,resultA=0,resultB=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,INPUT);
  pinMode(pin2,INPUT);
  pinMode(pin3,INPUT);
  pinMode(pin4,INPUT);
    pinMode(WARNING,OUTPUT);
    pinMode(entradaA,INPUT);
    pinMode(entradaB,INPUT);
    pinMode(LED,OUTPUT);
}
void loop() {
  estadoA=digitalRead(entradaA);
  estadoB=digitalRead(entradaB);

  if(estadoA==HIGH && estadoB==HIGH){
    digitalWrite(WARNING,HIGH);
    delay(500);
    digitalWrite(WARNING,LOW);
    delay(500);
    digitalWrite(WARNING,HIGH);
    delay(500);
    digitalWrite(WARNING,LOW);
    delay(500);
  }else if(estadoA==HIGH){
      valor1=digitalRead(pin1);
      valor2=digitalRead(pin2);
      valor3=digitalRead(pin3);
      valor4=digitalRead(pin4);
    if(valor1==HIGH){
      resultA=1+resultA;
    }
    if(valor2==HIGH){
      resultA=2+resultA;
    }
    if(valor3==HIGH){
      resultA=4+resultA;
    }
    if(valor4==HIGH){
      resultA=8+resultA;
    }
      resultA=resultA;

      while(estadoA==HIGH && estadoB==LOW){
        digitalWrite(WARNING,HIGH);
        delay(4000);
        digitalWrite(WARNING,LOW);
        delay(1000);
        estadoA=digitalRead(entradaA);
      }
      digitalWrite(LED,HIGH);
      delay(700);
      digitalWrite(LED,LOW);

  }else if(estadoB==HIGH && estadoA==LOW){
      valor1=digitalRead(pin1);
      valor2=digitalRead(pin2);
      valor3=digitalRead(pin3);
      valor4=digitalRead(pin4);
    if(valor1==HIGH){
      resultB=1+resultB;
    }
    if(valor2==HIGH){
      resultB=2+resultB;
    }
    if(valor3==HIGH){
      resultB=4+resultB;
    }
    if(valor4==HIGH){
      resultB=8+resultB;
    }
      resultB=resultB;
       while(estadoA==LOW && estadoB==HIGH){
        digitalWrite(WARNING,HIGH);
        delay(4000);
        digitalWrite(WARNING,LOW);
        delay(1000);
        estadoB=digitalRead(entradaB);
      }
      digitalWrite(LED,LOW);

           if(resultA>resultB){
        digitalWrite(LED,HIGH);
        delay(10000);
      }else if(resultB>resultA){
        digitalWrite(LED,LOW);
        delay(10000);
      }
    }

    else{
      digitalWrite(WARNING,HIGH);
       digitalWrite(LED,HIGH);
      delay(300);
     digitalWrite(WARNING,LOW);
       digitalWrite(LED,LOW);
      delay(300);
      resultA=0;
      resultB=0;
    }

}
