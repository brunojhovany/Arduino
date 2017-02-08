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


   void display (int d1,int d2,int d3,int d4,int d5,int d6,int d7,int numero)// Función del display
  {
    int a, b, c, d, e, f, g;
    int  Digit[10][7] =                // Arduino UNO va muy justo de memoria. Por eso lo
    {                                   // definimos como byte y no como int
       { 1,1,1,1,1,1,0 },    // 0
       { 0,1,1,0,0,0,0 },    // 1
       { 1,1,0,1,1,0,1 },    // 2
       { 1,1,1,1,0,0,1 },    // 3
       { 0,0,1,0,0,1,1 },    // 4
       { 1,0,1,1,0,1,1 },    // 5
       { 1,0,1,1,1,1,1 },    // 6
       { 1,1,1,0,0,0,0 },    // 7
       { 1,1,1,1,1,1,1 },    // 8
       { 1,1,1,0,0,1,1 }     // 9
    };
    if (numero==2){
  a=Digit[2][0];b=Digit[2][1];c=Digit[2][2];d=Digit[2][3];e=Digit[2][4];f=Digit[2][5];g=Digit[2][6];
    }
  digitalWrite (d1,a);
  digitalWrite (d2,b);
  digitalWrite (d3,c);
  digitalWrite (d4,d);
  digitalWrite (d5,e);
  digitalWrite (d6,f);
  digitalWrite (d7,g);
  }

void loop() {
 int pa=digitalRead(9);
 int pb=digitalRead(10);
 int pc=digitalRead(11);
 int pd=digitalRead(12);
 int r;
 r=leerNumero(pa,pb,pc,pd);
 display(2,3,4,5,6,7,8,r);
}
