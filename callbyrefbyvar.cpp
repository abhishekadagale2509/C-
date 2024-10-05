#include<iostream>
using namespace std;
int swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;


}

int main()
{int a=10,b=20;
cout<<"the value of a is "<<a<<"the value of b is "<<b<<endl;
 swap(a,b);
 cout<<"the value of x is "<<a<<"the value of y is "<<b;

    return 0;

}