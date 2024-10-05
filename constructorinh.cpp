#include <iostream>
using namespace std;

class base1
{
    int a1;

public:
    base1(int i)
    {
        a1 = i;
    }

    void getbase1(void)
    {
        cout << "the value of base1 is " << a1 << endl;
    }
};
class base2
{
    int a2;

public:
    base2(int i)
    {
        a2 = i;
    }
    void getbase2(void)
    {
        cout << "the value of base2 is " << a2 << endl;
    }
};
class derive : public base1, public base2
{
    int derive1, derive2;

public:
    derive(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derive1 = c;
        derive2 = d;
        cout << "derive class constructor caleed" << endl;
    }
    void printdata(void)
    {
        cout << "derive1 data is " << derive1 << endl;
        cout << "derive2 data is " << derive2 << endl;
    }
};

int main()
{derive dr(1,2,3,4);
dr.getbase1();
dr.getbase2();
dr.printdata();
    return 0;
}
