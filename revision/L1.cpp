#include<iostream>
//#include<string>
using namespace std;
int main()
{
    char a[19]="Hell world";// how string is implemented in string lib
   // cout<<a;
  // cout<<a[6];
    cout<<"helo";
    cout<<a[4];
    cout<<"world"<<endl;



    string b="heolo world";
    cout<<b<<endl;
    cout<<b.length()<<endl;
    cout<<b.size()<<endl;
    cout<<b.append(" how are you\n");
    string c;
  //  cin>>b>>c;
   // cout<<b<<c<<endl;
    getline(cin,b); //inputs a sentence
    cout<<b<<endl;
   //b.push_back('d');
   //b.pop_back();
  // cout<<b.back();
  //cout<<b.front();
  cout<<b.find("in",0);
   
    
    
     
    

}