#include<iostream>
#include<vector>
#include<stdbool.h>
using namespace std;

void checkSorted(vector<int> vec){
    int count= 0;
    for(int i=1;i<vec.size();i++){
        if(vec[i-1]>vec[i]){
            count++;
        }
        if(vec[vec.size()-1]>vec[0]){
            count++;
            }
}
    if(count<= 1){
        cout<<"True";
    }
    else
    cout<<"False";
}
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);

    checkSorted(v);
}