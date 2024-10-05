/*#include<iostream>
using namespace std;
class Abc{
    int a,b;
    public:
    Abc(void);
    void printno(){
        cout<<"sum is "<<a+b;

    }
};
Abc::Abc(void){
    a=10;
 b=20;
}

int main()
{
    Abc x;
    x.printno();
    return 0;


}*/

#include <iostream>
using namespace std;
class Abc
{
    int a, b;
    Abc(void);

public:
    void pri()
    {
        cout << "sum is " << a + b;
    }
};
Abc::Abc(void)
{
    a = 10;
    b = 20;
}
int main()
{
    Abc z;
    z.pri();
    return 0;
}