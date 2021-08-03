#include<iostream>
using namespace std;
// Naive Approach: O(n*k)
// int window(int arr[], int n, int k){
//   int maxSoFar = INT32_MIN, maxCurr = 0;
//   for(int i=0;i<n-k;i++){
//     maxCurr = 0;
//     for(int j=i;j<i+k;j++){
//       maxCurr+=arr[j];
//     }
//     maxSoFar = max(maxCurr, maxSoFar);  
//   }
//   return maxSoFar;
// }

// Window Technique
int window(int arr[], int n, int k){
  int maxSofar = INT32_MIN, maxCurr = 0;
  for(int i=0;i<k;i++){
    maxCurr+=arr[i];
  }
  maxSofar = max(maxSofar, maxCurr);
  for(int i=k;i<n;i++){
    maxCurr = maxCurr - arr[i-k];
    maxCurr+=arr[i];
    maxSofar = max(maxCurr, maxSofar);
  }
  return maxSofar;
}

int main(){
  int arr[] = {1,8,30,-5,20,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 3;
  cout << window(arr, n,k);
}