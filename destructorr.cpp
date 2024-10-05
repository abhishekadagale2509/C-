#include<iostream>
using namespace std;
int count=0;

class num{
    public :
    num(){count++;

        cout<<"the value of count"<<count;

    }
    ~num(){count--;
        cout<<endl<<"the value of count in destr"<<count<<endl;
        

    }
};
int main()
{
 num n1;

    return 0;

}