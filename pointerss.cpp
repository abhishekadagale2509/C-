#include <iostream>

using namespace std;
int main()
{
    int a = 3;
    int *ptr = &a;
    int **c = &ptr;
    cout << &a << endl;
    cout << ptr << endl;
    cout << c;

    return 0;
}