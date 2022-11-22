#include<iostream>
using namespace std;
class shape{
    public : 
float lar , lon;
shape();
};
shape::shape(){
    cout<<"donner la longueur : ";cin>>lon;
    cout<<"donner la largeur  :";cin>>lar; 
}
class triangle:public shape{
    public:
float area();
};
class rectangle:public shape{
public:
float area();
};
float rectangle::area(){
    float r=lar*lon;
    return r;
}
float triangle::area(){
    float r=(lar*lon)/2;
    return r;
}
int main (){
    cout<<"saisir les dimention de rectangle : "<<endl;
    rectangle R;
    cout<<"l\'aire : "<<R.area()<<endl;
    cout<<"saisir les dimention de triangle : "<<endl;
    triangle T;
    cout<<"l\'aire : "<<T.area();
    return 0;
}