#include<iostream>
using namespace std;
class shop{
int id[100];
int price[100];
int counter;

public:
void count(void){
    counter=0;
}
void setfun(void);
void getfun(void);
};

void shop::setfun(){
    cout<<"item id is \t"<<endl;
    cin>>id[counter];
    cout<<"item price is \t"<<endl;
    cin>>price[counter];
    counter++;



}
void shop::getfun()
{
    for(int i=0;i<counter;i++){
        cout<<"id is "<<id[i]<<"\tprice is "<<price[i]<<endl;

    }
}
int main()
{
    shop s;
    s.count();
    s.setfun();
     s.setfun();
      s.setfun();
    s.getfun();
    return 0;

}