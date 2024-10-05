#include<iostream>
using namespace std;
template<class T1,class T2>
class A{
public:
T1 data1;
T2 data2;
A(T1 a,T2 b){
data1=a;
data2=b;

}
void display(){
    cout<<data1<<"\t"<<data2;

}
};
int main()
{
    A<int ,float>obj(1,10.20);
    obj.display();
    return 0;

}