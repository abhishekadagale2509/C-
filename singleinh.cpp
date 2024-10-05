#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata(void)
{
    data1 = 10;
    data2 = 20;
}

int base::getdata1(void)
{
    return data1;
}
int base::getdata2(void)
{
    return data2;
}
class derive : public base
{
    int data3;

public:
    void process();
    void display();
};
void derive::process(void){
data3=data2* getdata1();
}
void derive :: display(){
    cout<<"value of data 1 is "<<getdata1()<<endl;
cout<<"the data2 is" <<data2<<endl;
cout<<"the data value of data3 is "<<data3<<endl;

}
int main()
{  /* base ba;
ba.setdata();
ba.getdata1();
ba.getdata2();*/
derive dr;
dr.setdata();
dr.process();
dr.display();

    return 0;
}