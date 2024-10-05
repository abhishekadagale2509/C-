#include<iostream>
using namespace std;
class binary{
    string s;
    public:
    void read(void);
    void check(void);
    void onescompi(void);
    void display(void);
};
void binary::read(void){
    cout<<"entere binary no";
    cin>>s;
}
void binary::check(void){
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrect";
            exit(0);

        }
    }
}
int main()
{
    binary b;
    b.read();
    b.check();
    return 0;

}