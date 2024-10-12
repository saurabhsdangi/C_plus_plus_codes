#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
int s= 0, e= v.size()- 1;
while(s<= e){
    swap (v[s], v[e]);
    s++;
    e--;
    
}
return v;
}

vector<int> print(vector<int> v){
      for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
      }
      cout<<endl;
}

int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    vector<int> ans= reverse(arr);
    
    cout<<"Array is:\n";
    print(arr);

    cout<<"Reversed array is:\n";
    print(ans);
}