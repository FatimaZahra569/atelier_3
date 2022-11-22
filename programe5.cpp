#include<iostream>
#include<string>
using namespace std;
class animal{
public:
int age;
string nom;
virtual void set_value()=0;
};
class dolphin:public animal{
    private:
    string lieu;
    public:
    void set_value();
};
class zebra:public animal{
    private:
    string lieu;
    public:
    void set_value();
};
void dolphin::set_value(){
cout<<"entrer le nom de ce dolphin : ";cin>>nom;
cout<<"entrer son age : ";cin>>age;
cout<<"entrer le lieu d'origine : ";cin>>lieu;
}
void zebra::set_value(){
cout<<"entrer le nom de cette zebra : ";cin>>nom;
cout<<"entrer son age : ";cin>>age;
cout<<"entrer le lieu d'origine : ";cin>>lieu;
}
int main (){
    dolphin D;
    zebra Z;
    cout<<"dolphin : "<<endl;
    D.set_value();
    cout<<"zibra : "<<endl;
    Z.set_value();
return 0;
}