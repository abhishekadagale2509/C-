#include <iostream>
using namespace std;
class shop
{

    int id[100];
    int price[100];
    int counter;

public:
    void count(void) 
    { counter = 0;
    }
    void getprice(void);
    void setprice(void);
};
void shop::setprice(void){
    cout<<"enter the id of item "<<endl;
    cin>>id[counter];
    cout<<"entere the price of item"<<endl;
    cin>>price[counter];
    counter++;


}
void shop::getprice(void)
{
for(int i=0;i<counter;i++){
    cout<<"item id is"<<id[i]<<"item price is"<<price[i]<<endl;
}
}
int main()
{ shop s;
s.count();
s.setprice();
s.setprice();
s.setprice();
s.getprice();
    return 0;
}