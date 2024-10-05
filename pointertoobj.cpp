#include<iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
    void getdata(){
      cout<<"the value of real is "<<real<<endl;
      cout<<"the value of imaginary is"<<imaginary<<endl;

    }
    void setdata(int a,int b){
        real=a;
        imaginary=b;

    }
};
int main()
{ // complex c1;
  // complex *ptr=&c1;
   complex *ptr=new complex;
 
   (*ptr).setdata(50,40);
  // (*ptr).getdata();
    ptr->getdata();
    return 0;

}