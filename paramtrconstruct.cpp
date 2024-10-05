#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int,int);
    void func(){
        cout<<a+b<<endl;

    }
};
complex::complex(int x,int y){
    a=x;
    b=y;

}
int main()
{
    complex a(40,50);
    a.func();
    complex b=complex(4,5);
    b.func();

    

    return 0;

}