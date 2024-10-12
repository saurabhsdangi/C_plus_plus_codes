#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;

    m[1]= "Saurabh";
    m[2]= "Singh";
    m[3]= "Dangi";

    m.insert({5, "Hardworker"});

    cout<<"Before erase:"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<"After erase:"<<endl;
    cout<<"find 3:"<<m.count(3);
    cout<<endl;
    
    m.erase(3);
    cout<<"After erase:"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

}