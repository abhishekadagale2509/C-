#include<iostream>
using namespace std;

inline int square(int x){
 return x*x;

}
int main(){
    int no;
    cout<<"entere no"<<no;
    cin>>no;
    int result=square(no);
    cout<<"result is"<<result;

return 0;
}