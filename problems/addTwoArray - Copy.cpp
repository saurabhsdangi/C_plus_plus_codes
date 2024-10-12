#include<iostream>
#include<vector>
using  namespace std;

vector<int> reverse(vector<int>vec){
    int s= 0, e= vec.size()- 1;
    while(s<=e){
        swap(vec[s], vec[e]);
        s++;
        e--;
    }
    return vec;
}
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    vector<int> add;

    int i=n-1;
    int j=m-1;
    int carry= 0;
    while(i>=0 && j>=0){
        int val1= arr1[i];
        int val2= arr2[j];
        int sum= val1 +val2 + carry;
        carry= sum/10;
        sum= sum%10;
        add.push_back(sum);
        i--;
        j--;
    }
    while(i>= 0){
        int sum= arr1[i] + carry;
        carry= sum/10;
        sum= sum%10;
        add.push_back(sum);
        i--;
}
    while(j>= 0){
        int sum= arr2[j] + carry;
        carry= sum/10;
        sum= sum%10;
        add.push_back(sum);
        j--;
    }
    while(carry!= 0){
        int sum= carry;
        carry= sum/10;
        sum= sum%10;
        add.push_back(sum);
    }

    vector<int> result= reverse(add);
    for(int i:result){
        cout<<i<<" ";
    }
}