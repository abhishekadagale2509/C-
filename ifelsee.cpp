#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"entere age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you are child"<<endl;
    }
    else if(age==18){
        cout<<"you are now younger"<<endl;

    }
    else if (age<1){
        cout<<"not born";
    }
    else{
        cout<<"you are older";
    }
    return 0;

}