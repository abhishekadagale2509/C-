#include<iostream>
using namespace std;
class point
{
int a,b;
public:

point(int x,int y)
{
    a=x;
    b=y;

}
void pointdisplay()
{
    cout<<a<<"and "<<b<<endl;

}
};
int main()
{point p(4,5);
p.pointdisplay();
point q=point(6,5);
q.pointdisplay();
    return 0;

}