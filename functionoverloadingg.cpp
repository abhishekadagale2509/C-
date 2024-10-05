#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int volume(int l,int b,int h)
{
    return l*b*h;

}
int main()
{
    cout << "the sum of 3 and 6 is" << sum(3, 6)<<endl;
    cout << "the sum of 3 and 6 ,4 is" << sum(3, 6, 4)<<endl;
    cout<<"the volume of rect is"<<volume(2,4,5)<<endl;
    return 0;
}