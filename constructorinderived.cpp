#include<iostream>
using namespace std;
class base1{
    int data1;
    public:
    base1(int i){
        data1=i;

    }
    void printdata1(){
        cout<<"val of data1 is "<<data1<<endl;
    }

};
class base2{
    int data2;
    public:
    base2(int i){
        data2=i;
        
    }
    void printdata2(){
        cout<<"the val of data2 is"<<data2<<endl;

    }
};
class Derive:public base1,public base2{
int derive1,derive2;
public:
Derive(int a,int b, int c, int d):base1(a) ,base2(b){
derive1=c;
derive2=d;
}
void printdata(){

    cout<<"the val of der1 is"<<derive1<<endl;
    cout<<"the val of der2 is"<<derive2<<endl;
}
};
int main()
{
    Derive x(7,8,9,4);
    x.printdata1();
    x.printdata2();
    x.printdata();

    return 0;

}