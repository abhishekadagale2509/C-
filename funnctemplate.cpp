/*#include<iostream>
using namespace std;
 
float funcAverage(int a, int b){
    float avg= (a+b)/2.0; 
    return avg;
}
int main(){
    float a;
    a = funcAverage(5,2);
    printf("The average of these numbers is %f",a);
    return 0;
}
*/

#include<iostream>
using namespace std;


template <class T1,class T2>
float avg(T1 a,T2 b){
    float avg=(a+b)/2;
    return avg;

}
int main()
{
    float a;
    a=avg(5,2);
    printf("%f",a);


    return 0;

}