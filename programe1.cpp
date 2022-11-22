#include<iostream>
using namespace std;
class mere{
    public:
    void display();
};
class fil:public mere{
public:
void display();
};
void mere::display(){
    cout<<"je suis de la classe mere "<<endl;
}
void fil::display(){
    cout<<"je suis de la classe fil"<<endl;
}
int main (){
    mere a;
    fil b;
    a.display();
    b.display();
    return 0;
}