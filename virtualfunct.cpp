#include<iostream>
using namespace std;


class base{
    public:
    int varbase;
    virtual void display()
    {
        cout<<"the value of var base 1 is "<<varbase<<endl;

    }
};
class derive:public base{
    int varderive;
    void display(){
        cout<<"the value of varbase is "<<varbase<<endl;
         cout<<"the value of varderive is "<<varderive<<endl;
        

    }
};
int main()
{  base *baseptr;
   base b1;
   derive d1;
   baseptr=& d1;
   baseptr->display();
   

    return 0;

}