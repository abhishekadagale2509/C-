#include <iostream>
using namespace std;
template <class T1, class T2>
float funavg(T1 a, T2 b)
{
    float avg = (a + b)/2.0;
    return avg;
}
template<class T>
void swapp(T &a,T &b){
    T temp;
    temp=a;
    a=b;
    b=temp;



}

int main()
{
    float a;
    a = funavg(5, 2);
    printf  ("the value is %.3f\n", a);
int x=5;
int y=10;
swapp(x,y);
cout<<x<<endl<<y;

    return 0;
}