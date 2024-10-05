#include<iostream>
using namespace std;
typedef struct student{
    int id;
    float mark;

}emp;
int main()
{
    emp harry,abc;
    harry.id=90;
    harry.mark=90.66;
    abc.id=91;
    abc.mark=80.66;
    cout<<harry.id<<endl;
     cout<<harry.mark<<endl;
      cout<<abc.id<<endl;
       cout<<abc.mark<<endl;

    return 0;

}