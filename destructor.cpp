#include<iostream>
using namespace std;
int count=0;

class num{
    
    public:
    num(){
        count++;
        cout<<"these is time when constructor called"<<count<<endl;


    }
    ~num(){
        
        cout<<"these is time when destru called"<<count<<endl;
     count--;
    }

};
int main()
{num n1;
{
    cout<<"create two more obj"<<endl;
    num n2,n3;
    cout<<"existing the block";


}
cout<<"back to main"<<endl;

    return 0;

}