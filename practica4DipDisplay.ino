void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
   pinMode(9, INPUT);
   pinMode(10, INPUT);
   pinMode(11, INPUT);
   pinMode(12, INPUT);
}
  int leerNumero (int p1, int p2, int p3, int p4){
    int acomulador;
      if(p1==HIGH){
          acomulador=1+acomulador;
        }
        if(p2==HIGH){
          acomulador=2+acomulador;
        }
        if(p3==HIGH){
          acomulador=4+acomulador;
        }
        if(p4==HIGH){
          acomulador=8+acomulador;
        }
        return acomulador;
    }


   void display (int a, int b, int c, int d, int e, int f, int g,int numero)// Función del display
  {
  digitalWrite (2,a);
  digitalWrite (3,b);
  digitalWrite (4,c);
  digitalWrite (5,d);
  digitalWrite (6,e);
  digitalWrite (7,f);
  digitalWrite (8,g);
  }

void loop() {
 int pa=digitalRead(9);
 int pb=digitalRead(10);
 int pc=digitalRead(11);
 int pd=digitalRead(12);
 int r;
 r=leerNumero(pa,pb,pc,pd);
 if (r>5){
    digitalWrite(8,HIGH);
  }
}
