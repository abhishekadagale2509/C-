#include<iostream>
using namespace std;
int swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=10,y=20;
    cout<<"the value of x is "<<x<<"the value of y is "<<y<<endl;
    //int swap(int,int);
    swap(&x,&y);
    cout<<"The value of a is "<<x<<"thev value of b is "<<y;

    return 0;

}