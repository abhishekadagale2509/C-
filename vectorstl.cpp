  #include<iostream>
  #include<vector>
  using namespace std;
 void display(vector <int>&v){
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";

    }cout<<endl;

 }
  int main(){
    vector<int>vec1;
    int elements;
    for(int i=0;i<4;i++){
        cout<<"enetere an elements to vetcor";
        cin>>elements;
        vec1.push_back(elements);
    }
    display(vec1);
    vector<int>::iterator iter=vec1.begin();
    vec1.insert(iter+1,5,565);
    display(vec1);

  
  return 0;
  }