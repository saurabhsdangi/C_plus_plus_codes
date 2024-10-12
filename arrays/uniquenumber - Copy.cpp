#include<iostream>
using namespace std;

int unique(int arr[], int n){
    int count= 1;
    for(int i=0;i<n;i++){
        count=1;
        for(int j=0;j<n;j++){
            
            if(i==j)
            continue;
            if(arr[i]== arr[j]){
                count++;
            }
        }
        if(count==1)
        return 1;
        
    }
    return 0;
}
int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int ele= unique(arr, size);
    if(ele== 1){
        cout<<"\nUnique element";
    }
    else
    cout<<"\nNot a unique element";
}