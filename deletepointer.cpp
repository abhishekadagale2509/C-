#include<iostream>
using namespace std;
class Base1{
    public:
    int a=10;
    void show()
{    int *ptr=&a;
    cout<<"the val is "<<*(ptr)<<endl;
} 
void display(){
    int *p=new int(80);
    cout<<*(p)<<endl;

}  
void arr(){
    int *arr=new int[3];
    arr[0]=5;
    arr[1]=6;
    arr[2]=7;
    cout<<arr[0];
    delete []arr;

}
};
int main()
{
    Base1 b;
    b.show();
    b.display();
    b.arr();
    return 0;

}