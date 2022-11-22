#include<iostream>
#include<cmath>
using namespace std;
class vecteur3d{
private:
float x,y,z;
public:
vecteur3d(float c1=0,float c2=0,float c3=0);
vecteur3d somme(vecteur3d);
vecteur3d somme1(vecteur3d &);
vecteur3d somme(vecteur3d *);
int produit(vecteur3d);
int produit1(vecteur3d &);
int produit(vecteur3d *);
void coincide(vecteur3d);
void coincide1(vecteur3d &);
void coincide(vecteur3d *);
int norme();
vecteur3d normaux(vecteur3d);
vecteur3d normaux1(vecteur3d &);
vecteur3d normaux(vecteur3d *);
void display();
};
vecteur3d::vecteur3d(float c1,float c2,float c3){
    x=c1;
    y=c2;
    z=c3;
}
vecteur3d vecteur3d::somme(vecteur3d v){
    vecteur3d s(0,0,0);
    s.x=v.x+this->x;
    s.y=v.y+this->y;
    s.z=v.z+this->z;
    return s;
}
vecteur3d vecteur3d::somme1(vecteur3d &v){
    vecteur3d s(0,0,0);
    s.x=v.x+this->x;
    s.y=v.y+this->y;
    s.z=v.z+this->z;
    return s;
}
vecteur3d vecteur3d::somme(vecteur3d *v){
    vecteur3d s(0,0,0);
    s.x=v->x+this->x;
    s.y=v->y+this->y;
    s.z=v->z+this->z;
    return s;
}
int vecteur3d::produit(vecteur3d v){
   return (this->x*v.x + this->y+v.y + this->z*v.z);
}
int vecteur3d::produit1(vecteur3d &v){
    return (this->x*v.x + this->y+v.y + this->z*v.z);
}
int vecteur3d::produit(vecteur3d *v){
    return (x * (v->x) + y * (v->y) + z * (v->z));
}
void vecteur3d::coincide(vecteur3d v){
    if(this->x==v.x && this->y==v.y && this->z==v.z)
    cout<<"les deux vecteur sont les meme ! ";
    else cout<<"les deux vecteurs sont pas les meme ! ";
}
void vecteur3d::coincide1(vecteur3d &v){
    if(this->x==v.x && this->y==v.y && this->z==v.z)
    cout<<"les deux vecteur sont les meme ! ";
    else cout<<"les deux vecteurs sont pas les meme ! ";
}
void vecteur3d::coincide(vecteur3d *v){
    if(this->x==v->x && this->y==v->y && this->z==v->z)
    cout<<"les deux vecteur sont les meme ! ";
    else cout<<"les deux vecteurs sont pas les meme ! ";
}
int vecteur3d::norme(){
    return sqrt(x*x+y*y+z*z);
}
vecteur3d vecteur3d::normaux(vecteur3d v){
    if(this->norme()>v.norme())
    return *this;
    else return v;
}
vecteur3d vecteur3d::normaux1(vecteur3d &v){
     if(this->norme()>v.norme())
    return *this;
    else return v;
}
vecteur3d vecteur3d::normaux(vecteur3d *v){
     if(this->norme()>v->norme())
    return *this;
    else return *v;
}
void vecteur3d::display(){
    cout<<"la vecteur : ";
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
int main(){
    
    float c1,c2,c3;
    cout<<"entere les compasantes de la 1er vecteur : "<<endl;
    cin>>c1;cin>>c2;cin>>c3;
    vecteur3d v1(c1,c2,c3);
    cout<<endl;
    cout<<"entere les compasantes de la 2eme vecteur : "<<endl;
    cin>>c1;cin>>c2;cin>>c3;
    vecteur3d v2(c1,c2,c3);
     cout<<endl;
    cout<<"-----------le resultat est renvoye par valeur---------------"<<endl;
    cout<<"la norme de la 1er vecteur : "<<v1.norme();
     cout<<endl;
    cout<<"la norme de la 2eme vecteur : "<<v2.norme();
     cout<<endl;
    v1.coincide(v2);
     cout<<endl;
    v1.normaux(v2);
     cout<<endl;
    cout<<"la somme de deux vecteur : ";
    v1.somme(v2).display();
     cout<<endl;
    cout<<"le produit de deux vecteur est : "<<v1.produit(v2);
    cout<<endl;
    cout<<"----------le resultat est renvoye par adresse-----------"<<endl;
    cout<<"la norme de la 1er vecteur : "<<v1.norme();
     cout<<endl;
    cout<<"la norme de la 2eme vecteur : "<<v2.norme();
     cout<<endl;
    v1.coincide1(v2);
     cout<<endl;
    v1.normaux1(v2);
     cout<<endl;
    cout<<"la somme de deux vecteur : ";
    v1.somme1(v2).display();
     cout<<endl;
    cout<<"le produit de deux vecteur est : "<<v1.produit1(v2);
cout<<endl;
cout<<"----------le resultat est renvoye par reference-----------"<<endl;
cout<<"la norme de la 1er vecteur : "<<v1.norme();
     cout<<endl;
    cout<<"la norme de la 2eme vecteur : "<<v2.norme();
     cout<<endl;
    v1.coincide(&v2);
     cout<<endl;
    v1.normaux(&v2);
     cout<<endl;
    cout<<"la somme de deux vecteur : ";
    v1.somme(&v2).display();
     cout<<endl;
    cout<<"le produit de deux vecteur est : "<<v1.produit(v2);
}