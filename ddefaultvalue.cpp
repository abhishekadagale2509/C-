#include<iostream>
using namespace std;
int fun(int currentm,float factor=1.1)
{
return currentm*factor;

}
int main()
{
    int money=10000;
    cout<<"your money in bank acc"<<money<<"the you gate intrest"<<fun(money);
    return 0;

}