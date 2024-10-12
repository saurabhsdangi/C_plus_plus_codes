#include<iostream>
using namespace std;
bool linearRec(int arr[], int size, int search){
if(size== 0)
return false;

if(search== arr[0])
    return true;

else{
bool searchRem= linearRec(arr + 1, size- 1, search);
return searchRem;
}
}

int main(){
    int arr[5]= {1,2,3,4,5};
    int size= 5;
    int search= 4;
    bool ans= linearRec(arr, size, search);
    if(ans)
        cout<<"Element found";
    else
    cout<<"Element not found";
}
