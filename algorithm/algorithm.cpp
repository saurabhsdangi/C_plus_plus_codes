#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
   vector<int> v;
   v.push_back(3);
   v.push_back(3);
   v.push_back(3);
   v.push_back(4);

   cout<<binary_search(v.begin(), v.end(), 4);
   cout<<"Lower Bound:"<<lower_bound(v.begin(),v.end(),3)<<endl;
   cout<<"Upper Bound:"<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

   int a= 3;
   int b= 5;
    
   cout<<"Max:"<<max(1,2)<<endl;
   cout<<"Max:"<<min(a,b)<<endl;

   swap(a,b);
   cout<<a<<" "<<b<<endl;

   string s= "abcd";
   reverse(s.begin(), s.end());
   cout<<"Reversed string:"<<s;

   rotate(v.begin(),v.begin()+ 1,v.end());
   cout<<"After rotate:"<<endl;
   for(int i:v){
    cout<<i<<" ";
   }

   // intro sort  = quicksort + heap sort + insertion sort 
   // cout<<"Sorting:"<<rotate(v.begin(),v.begin()+1, v.end()); // error ??
}