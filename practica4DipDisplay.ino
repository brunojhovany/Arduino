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
    byte  Digit[11][7] =
    {
       { 1,1,1,1,1,1,0 },    // 0
       { 0,1,1,0,0,0,0 },    // 1
       { 1,1,0,1,1,0,1 },    // 2
       { 1,1,1,1,0,0,1 },    // 3
       { 0,1,1,0,0,1,1 },    // 4
       { 1,0,1,1,0,1,1 },    // 5
       { 1,0,1,1,1,1,1 },    // 6
       { 1,1,1,0,0,0,0 },    // 7
       { 1,1,1,1,1,1,1 },    // 8
       { 1,1,1,0,0,1,1 },    // 9
       { 0,0,0,0,0,0,0 }     //null
    };
    if (numero<=9){
  digitalWrite (d1,Digit[numero][0]);
  digitalWrite (d2,Digit[numero][1]);
  digitalWrite (d3,Digit[numero][2]);
  digitalWrite (d4,Digit[numero][3]);
  digitalWrite (d5,Digit[numero][4]);
  digitalWrite (d6,Digit[numero][5]);
  digitalWrite (d7,Digit[numero][6]);
    }
    else if(numero>=10){
      digitalWrite (d1,Digit[10][0]);
      digitalWrite (d2,Digit[10][1]);
      digitalWrite (d3,Digit[10][2]);
      digitalWrite (d4,Digit[10][3]);
      digitalWrite (d5,Digit[10][4]);
      digitalWrite (d6,Digit[10][5]);
      digitalWrite (d7,Digit[10][6]);
    return 0;}
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
