#include<iostream>
using namespace std;
class Abc{
int a,b;
public:
void setno(int n1,int n2){
    a=n1;
    b=n2;

}
void printno(){
    cout<<a<<"+"<<b<<"i"<<endl;

}
friend Abc sumfun(Abc x,Abc y);


};
Abc sumfun(Abc x,Abc y){
    Abc z;
    z.setno((x.a+y.a),(x.b+y.b));
}
int main()

{

Abc v;
v.setno(1,2);
//sum=sumfun(x,y);
sum.printno();
   return 0;

}