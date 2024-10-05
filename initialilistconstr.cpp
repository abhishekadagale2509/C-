#include<iostream>
using namespace std;

class Base{
    int a;
    int b;

    public:

    Base(int i,int j):a(i),b(j){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;

    };
};
int main()
{  Base b1(20,30);
return 0;

}