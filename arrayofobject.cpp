#include <iostream>
using namespace std;
class Abc
{
    int id;
    int sal;
    public:
    void setdata(void)
    {
        sal = 122;
        cout << "eneter the id" << endl;
        cin >> id;
    }
    void getdata(void)
    {
        cout << "the id " << id<<endl;
    }
};
int main()
{
    Abc a[4];
    for (int i = 0; i < 4; i++)
    {
        a[i].setdata();
        a[i].getdata();
    }
    return 0;
}
