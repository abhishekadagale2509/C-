#include<iostream>
using namespace std;

template<class T1=int,class T2=char>

class Defaul{
    public:
    T1 data1;
    T2 data2;
    Defaul(T1 x,T2 y){
        data1=x;
        data2=y;


    }
    void display(){
        cout<<data1<<endl;
        cout<<data2<<endl;


    }
    
};
int main()
{Defaul<>d(10,'a');
d.display();

    return 0;

}