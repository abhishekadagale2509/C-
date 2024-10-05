/*#include<iostream>
using namespace std;
class Base{
    public:
    int a=1;
    virtual void display(){
        cout<<a<<endl;

    }
};
class Derive:public Base{
    public:
    int b=2;
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;

    }
};

int main()
{
    Base *baseptr;
    Base x;
    Derive y;
    
    
    baseptr=&y;
    baseptr->display();

    return 0;

}
*/
#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){
            cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}