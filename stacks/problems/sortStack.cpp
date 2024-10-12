#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// void sortArray(int arr[], int n){
//     for(int i=1;i<n;i++){
//         bool flag= false;
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                swap(arr[j], arr[j+1]);
//                flag= true;
//             }
//             // bool flag= true; 
//         }
//          if(flag== false){
//         break;
//         // continue; 
//     }
//    }
// }

// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void sortStack(stack<int> &s, int size){
//     int arr[size];
//     for(int i=0;i<size;i++){
//         arr[i]= s.top();
//         s.pop();
//     }
//     sortArray(arr,size);
//     // printArray(arr,size);

//     for(int i=0;i<size;i++){
//         s.push(arr[i]);
//     }
// }
void insertSorted(stack<int> &s, int num){
     if(s.empty() || (s.top()< num)){
        s.push(num);
        return;
     }

     int n= s.top();
     s.pop();

     insertSorted(s,num);
     s.push(n);
}

void sortStack(stack<int> &s){
     if(s.empty()){
        return;
    }

     int num= s.top();
     s.pop();

    sortStack(s);

    insertSorted(s,num);
}

void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

int main(){
   stack<int> s;
   
    s.push(3);     
    s.push(1);     
    s.push(4);     
    s.push(2);     
    s.push(5);  

    print(s);
    sortStack(s);
    print(s); 
}
