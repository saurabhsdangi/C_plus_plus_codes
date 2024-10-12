#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    vector<int> v= {2,1,4,3};
    cout<<v.size()<<endl;
    int i= 0;
    int m= INT_MIN;
    while(i< v.size()){
        if(i== (v.size() - 1)){
          v[i]= -1;
        }
        else{
            int nextSmaller= -1;
        for(int j= i + 1;j< v.size();j++){
           if(v[i]>v[j]){
            nextSmaller= v[j];
            break;
           }
        }
        v[i]= nextSmaller;
        }
        i++;
    }
    for(int i= 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}