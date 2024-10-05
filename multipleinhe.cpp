#include <iostream>
using namespace std;

class base11
{
protected:
    int base1;

public:
    void setbase1(int a)
    {
        base1 = a;
    }
};

class base22
{
protected:
    int base2;

public:
    void setbase2(int a)
    {
        base2 = a;
    }
};

class derive : public base11, public base22
{
public:
    void show(){
        cout << "the value of base 1 is " << base1 << endl;
        cout << "the value of base 2 is " << base2 << endl;
        cout << "the value of base 1 anad base 2 addition is " << base1 + base2 << endl;
    }
};
int main()
{
    derive der;

    der.setbase1(10);
    der.setbase2(20);
    der.show();

    return 0;
}
