#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;

    }
    number(int num)
    {
        a=num;   

    }
    number(number &obj){
        cout<<"copy constructor called";

        a=obj.a;

    }
    void display(){
        cout<<"the no for a is "<<a<<endl;

    }
};
int main()
{
    number n1,n2,n3(5);
    n1.display();
    n2.display();
    n3.display();
    number z4(n3);


    return 0;

}