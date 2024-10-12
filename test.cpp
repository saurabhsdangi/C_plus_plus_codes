//  BRUTE FORCE APPROACH
#include<iostream>
#include<climits>
#include<math.h>
#include<vector>
using namespace std;

// // int main()
// // {
// //     int n= 6;
// //   int arr[n]= {10,5,2,7,1,9};
// //   int k= 15;
  
// //   int m= 0;
// //   for(int i= 0;i<n;i++){
// //         int sum= 0;
// //         int len =0;
// //       for(int j= i;j<n;j++){
// //           sum= sum + arr[j];
// //           if(sum== k){
// //              len= j- i + 1;
// //              cout<<"length is:"<<len<<endl;
// //           }
// //           m= max(len,m);
// //       }
// //   }
// //   cout<< m;
// // }


// // OPTIMAL APPROACH

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int n = 9;
//     int arr[n] = {1, 2, 1, 1, 1, 1, 2, 3};
//     int k = 6;
//     int i = 0, j = 1;  // Start i at 0 and j at 1
//     int sum = arr[0];  // Initialize sum with the first element
//     int maxLen = 0;    // Variable to store maximum length of subarray
//     int len = 0;       // Length of the current subarray
    
//     while (j < n) {
//         // Add the current element to sum
//         sum = sum + arr[j];

//         // If the sum matches k, calculate the length and update maxLen
//         if (sum == k) {
//             len = j - i + 1;
//             maxLen = max(maxLen, len);
//         }

//         // If the sum exceeds k, shrink the window from the left
//         while (i <= j && sum > k) {
//             sum -= arr[i];
//             i++;
//         }

//         // Move the right pointer to the next element
//         j++;
//     }

//     cout << maxLen;
// }