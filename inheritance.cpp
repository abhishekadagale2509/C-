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
        salary = 100;
    }
    Employee(){}
};
class programer:Employee{
   public:


   programer(int inpid){
    id=inpid;

   }
      int language=50;
      void getdata(){
        cout<<id<<endl;

      }
};

int main()
{
    Employee emp1(1);
    cout << emp1.salary << endl;
    programer pr1(2);
    cout<<pr1.language<<endl;
    pr1.getdata();



    return 0;
}