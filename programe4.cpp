#include<iostream>
using namespace std;
class myclass{
    public:
    myclass();
    ~myclass();
};
myclass::myclass(){
    cout<<"constrecteur par defaut ! "<<endl;
}
myclass::~myclass(){
    cout<<"destructeur !";
}
int main(){
    myclass *p=new myclass;
    delete p;
    return 0;
};