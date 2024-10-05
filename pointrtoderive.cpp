#include<iostream>
using namespace std;

class base{
    public:
    int varbase;
    void display(void){
        cout<<"display base class variable"<<varbase<<endl;

    }

};
class derive:public base{
    public:
    int varderive;
    void display(){
        cout<<"the value of varbase is "<<varbase<<endl;
        cout<<"the value of varderive is "<<varderive<<endl;

    }
};
int main()
{ base * baseptr;
base b1;
derive d1;
baseptr=&b1;


baseptr->varbase=50;

baseptr->display();

    return 0;

}