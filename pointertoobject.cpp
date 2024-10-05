#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    void setdata(int a,int b)
    {
        a=real;
        b=imag;

    }
    void getdata()
    {
        cout<<"the val a is "<<real<<endl;
        cout<<"the val of imag is "<<imag<<endl;

    }
};
int main()
{
 
    complex *ptr =new complex[4];
     ptr->setdata(10,20);
    ptr->getdata();

  
    


       /*complex x;
      complex *ptr=&x;
        (*ptr).setdata(50,10);
       (*ptr).getdata();*/


    return 0;

}