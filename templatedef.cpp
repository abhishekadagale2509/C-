#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float>
class abhi
{
public:
    T1 a;
    T2 b;
    abhi(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};
int main()
{
    abhi<> ab(1, 1.23);
    ab.display();
    cout << endl;

    abhi<float, int> abb(1.45, 10);
    abb.display();

    return 0;
}