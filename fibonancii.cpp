#include<iostream>
using namespace std;
int fib(int no)
{
if(no<2)
{
    return 1;

}return fib(no-2)+fib(no-1);
}
int main()
{
    int a;

    cout<<"the value of a is ";
    cin>>a;
    cout<<fib(a);
    return 0;

}