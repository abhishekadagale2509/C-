#include <iostream>
using namespace std;
class y;

class x
{
    int a;

public:
    void setval(int data)
    {
        a = data;
    }
    friend void add(x, y);
};
class y
{
    int b;

public:
    void setvalue(int val)
    {
        b = val;
    }
    friend void add(x, y);
};
void add(x u, y v)
{
    cout << "sum of data is " << u.data + v.num;
}
int main()
{ x a1;
a1.setval(5);
y b1;
b1.setval();
add(a1,b1);
    return 0;
}