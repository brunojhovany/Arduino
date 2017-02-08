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
    byte  Digit[10][7] =
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
       { 1,1,1,0,0,1,1 }     // 9
    };
    if (numero==0){
      a=Digit[0][0];b=Digit[0][1];c=Digit[0][2];d=Digit[0][3];e=Digit[0][4];f=Digit[0][5];g=Digit[0][6];
    }
     if (numero==1){
      a=Digit[1][0];b=Digit[1][1];c=Digit[1][2];d=Digit[1][3];e=Digit[1][4];f=Digit[1][5];g=Digit[1][6];
    }
     if (numero==2){
      a=Digit[2][0];b=Digit[2][1];c=Digit[2][2];d=Digit[2][3];e=Digit[2][4];f=Digit[2][5];g=Digit[2][6];
    }
     if (numero==3){
      a=Digit[3][0];b=Digit[3][1];c=Digit[3][2];d=Digit[3][3];e=Digit[3][4];f=Digit[3][5];g=Digit[3][6];
    }
     if (numero==4){
      a=Digit[4][0];b=Digit[4][1];c=Digit[4][2];d=Digit[4][3];e=Digit[4][4];f=Digit[4][5];g=Digit[4][6];
    }
     if (numero==5){
      a=Digit[5][0];b=Digit[5][1];c=Digit[5][2];d=Digit[5][3];e=Digit[5][4];f=Digit[5][5];g=Digit[5][6];
    }
     if (numero==6){
      a=Digit[6][0];b=Digit[6][1];c=Digit[6][2];d=Digit[6][3];e=Digit[6][4];f=Digit[6][5];g=Digit[6][6];
    }
     if (numero==7){
      a=Digit[7][0];b=Digit[7][1];c=Digit[7][2];d=Digit[7][3];e=Digit[7][4];f=Digit[7][5];g=Digit[7][6];
    }
     if (numero==8){
      a=Digit[8][0];b=Digit[8][1];c=Digit[8][2];d=Digit[8][3];e=Digit[8][4];f=Digit[8][5];g=Digit[8][6];
    }
     if (numero==9){
      a=Digit[9][0];b=Digit[9][1];c=Digit[9][2];d=Digit[9][3];e=Digit[9][4];f=Digit[9][5];g=Digit[9][6];
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
