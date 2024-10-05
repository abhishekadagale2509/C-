#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int sum(int ,int);
    cout<<"entere value a is "<<endl;
    cin>>a;
    cout<<"entere value b is "<<endl;
    cin>>b;
    sum(a,b);
   return 0;

}
int sum(int x,int y){
    cout<<"the sum is \t"<<x+y;


}