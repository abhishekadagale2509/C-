#include<iostream>
#include<fstream>


using namespace std;

int main()
{
    string s2;
    ifstream in("sample.txt");

in>>s2;
getline(in,s2);
cout<<s2;


string s1="hello abhishek !!";
fstream out("sample.txt");

out<<s1;

    return 0;

}
