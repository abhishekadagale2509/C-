#include<iostream>
using namespace std;
union employee {
    int id;
    float marks;

};
int main()
{ union employee emp;
emp.id=10;
emp.marks=80.00;
cout<<emp.id<<endl;
//cout<<emp.marks<<endl;

    return 0;

}