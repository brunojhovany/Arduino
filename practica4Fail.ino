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


   void display (int d1,int d2,int d3,int d4,int d5,int d6,int d7,int a,int b,int c,int d,int e,int f,int g)// Función del display
  {
  digitalWrite (d1,a);
  digitalWrite (d2,b);
  digitalWrite (d3,c);
  digitalWrite (d4,d);
  digitalWrite (d5,e);
  digitalWrite (d6,f);
  digitalWrite (d7,g);
  return 0;
  }

void loop() {
 int pa=digitalRead(9);
 int pb=digitalRead(10);
 int pc=digitalRead(11);
 int pd=digitalRead(12);
 int r;
 r=leerNumero(pa,pb,pc,pd);
  if (r==0){
  display(2,3,4,5,6,7,8,1,1,1,1,1,1,0 );
  }
 if (r==1){
  display(2,3,4,5,6,7,8,0,1,1,0,0,0,0);
  }
   if (r==2){
  display(2,3,4,5,6,7,8,1,1,0,1,1,0,1);
  }
   if (r==3){
  display(2,3,4,5,6,7,8,1,1,1,1,0,0,1);
  }
   if (r==4){
  display(2,3,4,5,6,7,8,0,1,1,0,0,1,1);
  }
   if (r==5){
  display(2,3,4,5,6,7,8,0,1,1,0,0,0,0);
  }
   if (r==6){
  display(2,3,4,5,6,7,8,0,1,1,0,0,0,0);
  }
   if (r==7){
  display(2,3,4,5,6,7,8,0,1,1,0,0,0,0);
  }
   if (r==8){
  display(2,3,4,5,6,7,8,0,1,1,0,0,0,0);
  }
   if (r==9){
  display(2,3,4,5,6,7,8,0,1,1,0,0,0,0);
  }

}
