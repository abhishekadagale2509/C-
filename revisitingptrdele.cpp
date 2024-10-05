#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "value of a is " << a << endl;

    float *p = new float(30.31);
    cout << "value of new ptr is " << *(p) << endl;

    int *arr = new int[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout << "the arr 1::" << arr[0]<<endl;
    cout << "the arr 2::" << arr[1]<<endl;
    cout << "the arr 3::" << arr[2]<<endl;
    cout << "the arr 4::" << arr[3]<<endl;
    cout << "the arr 5::" << arr[4]<<endl;
    return 0;
}