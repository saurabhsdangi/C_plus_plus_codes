#include<iostream>
void merging(int arr[], int start, int end){
      int mid= (start+ end)/2;
      
      int len1= mid-start + 1;
      int len2= end- mid;
      int* first= new int[len1];
      int* sec= new int[len2];

      int original= start;
      for(int i=0;i<len1;i++){
        first[i]= arr[original++];
      }
      
      original= mid + 1 ;
      for(int i=0;i<len2;i++){
        sec[i]= arr[original++];
      }

      int idx1= 0;
      int idx2= 0;
      original= start;

      while(idx1 < len1 && idx2 < len2){
         if(first[idx1]< sec[idx2]){
            arr[original++]= first[idx1++];
         }
         else
         arr[original++]= sec[idx2++];
      }

      while(idx1< len1){
        arr[original++]= first[idx1++];
      }

      while(idx2< len2){
        arr[original++]= sec[idx2++];
      }

    delete []first;
    delete []sec;
}
void mergeSort(int arr[], int s, int e){
    if(s>=e)
    return;
    
    int mid= (s + e)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merging(arr,s,e);
}
using namespace std;
int main(){

    int arr[5]={1,5,4,3,2};
    int size= 5;

    // int start= 0, end= size-1;


    mergeSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
} 