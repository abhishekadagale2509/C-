#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
int main()
{
      
    /*ofstream of("sample.txt");
  string str="hello0000";
    of<<str;
    of.close();*/
    ofstream of;
    of.open("sample.txt");
      of<<"hii abhi";
    of.close();

   /* ifstream iff("sample.txt");
    string str1;
    //iff>>str1;
    getline(iff,str1);
    cout<<str1;
    iff.close();*/
    ifstream iff;
    iff.open("sample.txt");
    string str1;


    while(iff.eof()==0){
        getline(iff,str1);
        cout<<str1<<endl;


    }iff.close();

    


return 0;

}