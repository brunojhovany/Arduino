int P=0;
int led=12;
void setup() {

  pinMode(led,OUTPUT);
}

void loop() {

  P=analogRead(A0);

  if(P<=341 || P>=693){
    digitalWrite(led,LOW);

    } else {
        digitalWrite(led,HIGH);}
 }
