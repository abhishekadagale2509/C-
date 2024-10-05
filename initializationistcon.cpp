#include<iostream>
using namespace std;
class Test{
    int a,b;
    public:
   // Test(int i,int j):a(i),b(j){
    Test(int i,int j):a(i),b(i+j){
cout<<"val of  a is "<<a<<endl;
cout<<"val of b is "<<b<<endl;

    }
};
int main()
{ Test t(4,6);
    return 0;

}