#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int> a(5);
    cout<<"Print vector a:";
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    vector<int>b(a);
    cout<<"Print vector b:";
    for(int i:b){
        cout<<i<<" ";
    }cout<<endl;

    cout <<"Capacity:->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity:->"<<v.capacity()<<endl; 

    v.push_back(2);
    cout<<"Capacity:->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity:->"<<v.capacity()<<endl;
    cout<<"Size:->"<<v.size()<<endl;

    cout<<"Element at 0th index:"<<v.at(0)<<endl;
    cout<<"Front element:"<<v.front()<<endl;
    cout<<"Back element:"<<v.back()<<endl;

    cout<<"Before pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size:"<<v.size()<<endl;
    v.clear();
    cout<<"After clear size:"<<v.size();
}