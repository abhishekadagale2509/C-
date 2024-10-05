#include<iostream>
using namespace std;


class base1{
  public :
  void greet(){
    cout<<"hello"<<endl;

  }
};

class base2{
    public:
    void greet(){
        cout<<"how are you ..!!"<<endl;


    }
};
class derive:public base1,public base2{
   
   public:
    void  greet(){ 
        base1::greet();

    }
};

int main(){
    base1 b1;
    b1.greet();
    base2 b2;
    b2.greet();

    derive dr;
    dr.greet();

    return 0;
}