#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derive : public Base1, public Base2
{
    public:
    void display(){
        cout<<"the val of base1 is"<<base1int<<endl;
        cout<<"the val of base2 is"<<base2int<<endl;
        cout<<"the val of sum is "<<base1int+base2int;


    }
};
int main()
{
    Derive d;
    d.set_base1int(4);
    d.set_base2int(5);
    d.display();
    return 0;
}