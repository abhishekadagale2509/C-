#include <iostream>
using namespace std;
class student
{
protected:
    int rollno;
    public:
    void setrollno(int);
    void getrollno(void);
};
void student::setrollno(int no)
{
    rollno = no;
}
void student::getrollno()
{
    cout << "roll no is" << rollno << endl;
}
class exam : public student
{
protected:
    float math;
    float physics;
    public:
    void setmarks(float, float);
    void getmarks(void);
};
void exam::setmarks(float m1, float m2)
{
    math = m1;
    physics = m2;
}
void exam::getmarks()
{
    cout << "math mars" << math << endl;
    cout << "physics marks is " << physics << endl;
}
class result : public exam
{
    float percent;

    public:
    void display()
    {
        getrollno();
        getmarks();
        cout << "percentage is " << (math + physics) / 2;
    }
};

int main()
{
    result harry;
    harry.setrollno(1);
    harry.setmarks(40.00, 80.89);
    harry.display();

    return 0;
}