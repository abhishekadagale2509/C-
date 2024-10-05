/*#include<iostream>
using namespace std;
class baseclass{
   
    public:
     int a;
    void display(void){
        cout<<"val of a is"<<a;

    }

};
class deriveclass :public baseclass{
 
    public:
       int b;
    void display(void){
        cout<<"val of a is"<<a;
        cout<<"val b is"<<b;
    }
};
int main()
{
    baseclass *base;
    baseclass s; 
    deriveclass d;
   
    base=&d;
    base->a=50;
    /*give eroor base class pointer
     can accesss only those proporties which are
     inherit base->b=10;
    
    
     base->display();


    return 0;

}*/
#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();

    base_class_pointer->var_base = 3400; 
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 9448;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();

    return 0;
}

