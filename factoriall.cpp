#include<iostream>
using namespace std;
int fact(int no)
{
if(no<=1)
{
    return 1;

}
return no*fact(no-1);
cout<<no;
}
int main()
{
    int a=5;
    cout<<"entere the value of a is\t"<<fact(a);
    

    return 0;

}