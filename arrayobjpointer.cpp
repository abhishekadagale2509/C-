#include<iostream>
using namespace std;


class shopitem{
    int id;
    float price;
    public:
    void setdata(int a,int b)
    {
        id=a;
        price=b;

    }
    void getdata()
    {
        cout<<"entere value of id ::"<<id<<endl;
        cout<<"entere price ::"<<price<<endl;

    }
};
int main()
{/*int size=3;
int *ptr =&size;
int *ptr=new int[20];
*/
int size=4;
shopitem *ptr=new shopitem[size];
int p,q;

for(int i=0;i<size;i++){
    cout<<"id and price of item is ::"<<i+1<<endl;
    cin>>p,q;
    (*ptr).setdata(4,6);
    ptr->getdata();
}




    return 0;

}
