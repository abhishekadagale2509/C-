#include<iostream>
using namespace std;
struct employee {
        int id;
        char name[30];

    };
int main()
{
    struct employee emp;
    emp.id=10;
    //emp.name='a';
    cout<<emp.id;
    


    
    return 0;

}