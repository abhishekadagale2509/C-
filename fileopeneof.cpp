#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out << "the name is abhi";
    out.close();

    ifstream in;
    string st,st2;
    

    in.open("simple.txt");
    // in>>str;
    // cout<<str;
    // getline(in,str);
    while (in.eof() == 0)
    {
        getline(in.st);
        cout <<st<<endl;
    }

    in.close();
    return 0;
}
