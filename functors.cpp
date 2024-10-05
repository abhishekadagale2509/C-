#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main(){
int arr[]={1,23,34,45,3,8};
//sort(arr,arr+5);
sort(arr,arr+6,greater<int>());
for(int i=0;i<6;i++){
    cout<<arr[i]<<endl;

}
return 0;
}