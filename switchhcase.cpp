#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"entere age"<<endl;
    cin>>age;
    switch(age){
        case 18:
        cout<<"you are in 18 above group";
        break;
        case 17:
        cout<<"you are below 18";
        break;
        case 0:
        cout<<"you just born now";
        break;
        default:
        cout<<"you are not in cases";
    
    }
    return 0;

}