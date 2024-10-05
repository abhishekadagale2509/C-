#include<iostream>
using namespace std;
/*class A{
    int a;
    public:
    void setdata(int a){
        this->a=a;


    }
    void getdata(void){
        cout<<a;


    }
};
int main()
{
    A b;
    b.setdata(40);
    b.getdata();
    return 0;
}*/
class A{
    int a;
    public:
    A& setdata(int a){
        this->a=a;


    }
    void getdata(void){
        cout<<a;


    }
};
int main()
{
    A b;
    b.setdata(40);
    b.getdata();
    return 0;
}
