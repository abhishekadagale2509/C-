#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string s1;
    ofstream of("sample.txt");
    cout<<"enetere string"<<endl;
    cin>>s1;
    of<<s1;
    of.close();
    
    string s2;

    ifstream off("simple.txt");
     //off>>s2;
    getline(off,s2);
    cout<<s2;
    off.close();

    return 0;

}