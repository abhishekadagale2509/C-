#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;

public:
    void setno(int a)
    {
        rollno = a;
    }
    void printno(void)
    {
        cout << "your roll no is" << rollno << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printmarks(void)
    {
        cout << "your result is here maths:" << maths << "physics" << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float sr)
    {
        score = sr;
    }
    void printscore(void)
    {
        cout << "your score is " << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printno();
        printmarks();
        printscore();
    }
};
int main()
{
    result res;

    res.setno(10);

    res.setmarks(50, 80);
    res.setscore(80);
    res.display();

    return 0;
}