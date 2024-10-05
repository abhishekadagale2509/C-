#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x,int y=10)
    {
        a=x;
        b=y;


    }
    void printfun();
    
};
void complex:: printfun(){
cout<<"the value of"<<a <<"and"<<b<<endl;

}
int main()
{
    complex c(4);
    c.printfun();
    return 0;

}