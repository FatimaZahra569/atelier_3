#include <iostream>
using namespace std;
class complex{
protected :
double R ;
double I ;
public :
complex(double reel , double imagin){
  R = reel;
  I = imagin;
}

 void display( complex a,char op, complex b){
  complex c(0,0);
     switch (op)
     {
     case '+':{
      c.R = a.R + b.R;
      c.I = a.I + b.I;
     }break;
     case '-':{
        c.R = a.R - b.R;
       c.I = a.I - b.I ;
     } break;
         case '*':{
          c.R= (a.R * b.R) - (a.I * b.I);
          c.I = (a.R * b.I) + (a.I * b.R);
         }break;
       case '/':{ 
        c.R = ((a.R*b.R)+(a.I*b.I))/((b.R)*b.R + (b.R)*b.R);
        c.I = ((b.R*a.I)-(a.I*b.I))/((b.R)*b.R + (b.R)*b.R);

       }break;
       case '&':
       if((a.I>b.I) && (a.R>b.R)){
        cout<<"le premier est superrieur "<<endl ;
       }else{
         cout << "le deuxiemme est superrieur " <<endl;
       }
     }
   cout<<"L'operation est : "<<c.R<<" + "<<c.I<<"i"<<endl ;
}
};
int main(){
double R1,I1,R2,I2;
complex c(0,0);
char op;
cout<<"donnez votre relle :" ;
cin>> R1;
cout<<"donnez votre imaginaire :" ;
cin>> I1;
cout<<"donnez l'operation :";
cin>> op;
cout<<"donnez votre relle :" ;
cin>> R2;
cout<<"donnez votre imaginaire :" ;
cin>> I2;
complex a(R1,I1);
complex b(R2,I2);
c.display(a,op,b);
   return 0;
}