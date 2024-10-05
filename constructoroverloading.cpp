#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int x ,int y)
    {
        a=x;
        b=y;


    }
    complex(int x){
        a=x;
        b=0;
    }
    complex(){
        a=0;
        b=0;
    }
    void princon(){
        cout<<a<<"and"<<b<<endl;

    }
    
};
int main()
{
    complex c(4,5);
    c.princon();
    complex d(4);
    d.princon();
    complex e;
    e.princon();

    

    return 0;

}