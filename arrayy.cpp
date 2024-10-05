#include<iostream>
using namespace std;
int main()
{
    int a[4];
    int arr[]={10,20,30,40};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
     cout<<endl;
      cout<<endl;
    a[0]=60;
    a[1]=70;
    a[2]=80;
    a[3]=90;
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a[3]<<endl;
    cout<<endl;
     cout<<endl;
    int *ptr=arr;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;
    cout<<*(ptr+3)<<endl;
     cout<<endl;
      cout<<endl;

    cout<<*(ptr++)<<endl;
    cout<<*(++ptr)<<endl;
    cout<<*(++ptr)<<endl;
     cout<<endl; cout<<endl;



  return 0;
}