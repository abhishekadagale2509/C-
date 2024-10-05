#include<iostream>
using namespace std;
class Abc{
int a;
int b;
public:
void setdata(int v1,int v2){
    a=v1;
    b=v2;
}
void getdata(Abc c1,Abc c2){
    a=c1.a+c2.a;
    b=c1.b+c2.b;

}
void printfun(){
    cout<<"the complex no is"<<a<<"+"<<b<<"i"<<endl;

}
};
int main()
{
    Abc y,z;
    y.setdata(1,2);
    y.printfun();
    z.setdata(1,2);
    z.printfun();

    y.getdata(y,z);
    y.printfun();

}