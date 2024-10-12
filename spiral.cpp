#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<vector<int>> v;
    for(int i= 0;i<v.size();i++){
       v.push_back(v[i]);
    }
}