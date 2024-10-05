#include<iostream>
using namespace std;
int swapbyval(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"the value of a is"<<a<<"the value of b is "<<b;


}
int main()
{
    int x=10,y=20;
    cout<<"the value of x is "<<x<<endl<<"the value of y is "<<y<<endl;
    int swapbyval(int, int);
    swapbyval(x,y);
    cout<<"the value of x is"<<x<<"the value of y is "<<y;
    
    return 0;
}