#include <iostream>
using namespace std;

class Emp
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "the id is " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id is " << id << "\tand employee no is " << count << endl;
    }
};

int Emp::count = 0;
int main()
{
    Emp abc, xyz, uvw;
    abc.setdata();
    abc.getdata();

    xyz.setdata();
    xyz.getdata();

    uvw.setdata();
    uvw.getdata();
    return 0;
}