#include<iostream>
using namespace std;
class complex{
int a;
public:
complex(int num ){
    a=num;

}
complex(complex &obj){
    cout<<"copy constructor called !!!"<<endl;


    a=obj.a;

}
void display(){
    cout<<"the no for this obj is "<<a<<endl;
}

};
int main()
{  
complex x,y,z(20),z1;
x.display();
complex z1(z);
z1.display();
    return 0;

}