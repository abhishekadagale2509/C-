#include <iostream>
using namespace std;
template <class T>
class abhi
{
public:
    T data;
    abhi(T a)
    {
        data = a;
    }
    void display();
    
};
template <class T>
void abhi<T>::display()
{
    cout << data;
}
void fun(int a)
{
    cout << "am the first fun()" << a << endl;
}
template <class T>
void fun(T a)
{
    cout << "i am templated fun()" << a << endl;
}
int main()
{
    //hi<float> ab(5.7);
    //ut << ab.data << endl;
    //.display();
fun(5);
    return 0;
}