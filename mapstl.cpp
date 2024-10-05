#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> marks;
    marks["abhi"] = 98;
    marks["sachin"] = 99;

    marks.insert({{"dada",169},{"bro",170}});
    map<string, int>::iterator iter;

    for (iter = marks.begin(); iter != marks.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout<<"the size is "<<marks.max_size()<<endl;
    
    return 0;
}