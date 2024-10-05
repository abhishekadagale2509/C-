#include <iostream>
#include<cmath>
using namespace std;
class simplecal
{
    int a, b;

public:
    void getdatasimple()
    {
        cout << "the value of a is " << endl;
        cin >> a;
        cout << "the value of b is" << endl;
        cin >> b;
    }
    void simpleoperation()
    {

        cout << "the value of a+b is " << a + b << endl;
        cout << "the value of a-b is " << a - b << endl;
        cout << "the value of a*b is " << a * b << endl;
        cout << "the value of a%b is " << a % b << endl;
    }
};
class scientificcal
{

    int a, b;

public:
    void getdatascience()
    {
        cout << "the value of a is " << endl;
        cin >> a;
        cout << "the value of b is" << endl;
        cin >> b;
    }
    void scientificoperation()
    {

        cout << "the value of is " << sin(a) << endl;
        cout << "the value of is " << cos(a) << endl;
        cout << "the value of is " << exp(a) << endl;
        cout << "the value of is " << tan(a) << endl;
    }
};
class hybrid:virtual public simplecal,public scientificcal{};

int main()
{hybrid call;
call.getdatascience();
call.scientificoperation();
call.getdatasimple();
call.simpleoperation();

    return 0;
}