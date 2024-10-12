#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int> vec, int m)
{
    vector<int> temp(vec.size());
  for(int i= 0;i<temp.size();i++){
    temp[(i+m)%vec.size()]= vec[i];
  }
  vec= temp;
  return vec;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
   
    int k;
    cout<<"Enter value by times to shift:";
    cin>>k;

    vector<int> rotated= rotate(v, k);

    for(int i=0;i<rotated.size();i++){
        cout<<rotated[i]<<" ";
    }cout<<endl;
}