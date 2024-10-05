#include<iostream>
using namespace std;
class complex{
int a,b;

public :
complex(void);
void pointerr(){
    cout<<"sum is "<<a+b;
     

}
};
complex::complex(void){
    a=10;
    b=20;

}
int main()
{
    complex c;
    c.pointerr();
    return 0;

}