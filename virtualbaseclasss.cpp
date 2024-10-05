#include<iostream>
using namespace std;
class student{
    protected:
    int rollno;
    public:
    void setrollno(int no){
        rollno=no;

    }
    void printno(void){
        cout<<"the roll no is "<<rollno<<endl;

    }
};
class test:virtual public student{
    protected:
    float maths, physics;
    public:
    void setmarks(float m1,float m2){
        maths=m1;
        physics=m2;

    }
    void printmarks(void){
        cout<<"maths marks"<<maths<<"physics marks is "<<physics<<endl;

    }
};
class sports:virtual public student{
    protected:
    float score;
    public :
    void setscore(float s){
        score=s;

    }
    void printscore(void){
        cout<<"score is "<<score<<endl;

    }
};
class result:public test,public sports{
    private:
    float total;
    public:
    void display(void){
        total=maths+physics+score;
        printno();
        printmarks();
        printscore();
        cout<<total;


    }
};


int main()
{
    result r;
    r.setrollno(20);
    r.setmarks(80.00,90.56);
    r.setscore(88.20);
    //r.display();

    return 0;

}