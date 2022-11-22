#include<iostream>
using namespace std;
class test{
    private:
    int n;
    public:
    test();
    static int count;
    void call();
};
test::test(){
    cout<<"enter un nombre : ";cin>>n;
}
int test::count=1;
void test::call(){
    cout<<"la fonction call : ";
    cout<<n<<endl;
    count++;
}
int main(){
    test p,t,i;
    p.call();
    t.call();i.call();
    cout<<"la fonction call etre apple : "<<test::count-1<<" fois";
return 0;
}