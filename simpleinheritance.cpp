#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;

    Employee(int inpid)
    {
        id = inpid;
        salary = 34.00;
    }
    Employee() {}
};
class prog :public Employee
{
public:
    

    prog(int inpid){
        id = inpid;
    }int langid = 8;
    
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee e1(5), e2(7);
    cout << e1.id <<" is id and salry is"<< e1.salary << endl;
    cout << e2.id << " is id and salry is"<<e2.salary << endl;


    prog p1(20);
    cout << p1.langid << endl;
    // cout<<p1.id;
    p1.getdata();

    return 0;
}