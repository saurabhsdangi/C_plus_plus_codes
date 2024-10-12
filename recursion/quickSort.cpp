#include<iostream>
using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }  
    cout<<endl;
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int cnt= 0;
    for(int i= low+ 1;i<=high;i++){
        if(A[i]<= pivot)
        cnt++;
    }

    int pivotIdx= low + cnt;
    swap(A[low], A[pivotIdx]);

    int i= low, j= high;
    while(i< pivotIdx && j> pivotIdx){
        while(A[i]< pivot){
            i++;
        }

        while(A[j]> pivot){
            j--;
        }

        if(i< pivotIdx && j> pivotIdx){
            swap(A[i], A[j]);
        }
    }
   return pivotIdx;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // index of pivot after partition

    if (low >= high)
        return;

        partitionIndex = partition(A, low, high);
        printArray(A, 7);

        quickSort(A, low, partitionIndex - 1);  // sort left subarray
        quickSort(A, partitionIndex + 1, high); // sort right subarray
    
}

int main()
{
    int A[]= {9, 1, 4, 14, 4, 15, 6 };
    // int A[] = {9, 2, 4, 14, 4, 5, 3};
    int n = 7;
    printArray(A, n);
    quickSort(A, 0, n - 1);
    printArray(A, n);
    return 0;
}