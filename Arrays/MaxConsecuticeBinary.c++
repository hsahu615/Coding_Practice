#include<iostream>
using namespace std;


// Naive Approach: O(n^2)
int maxBinary(int arr[], int n){
  int res=0;
  for(int i=0;i<n;i++){
    int curr=0;
    for(int j=i;j<n;j++){
      if(arr[j]==1){ 
        curr++;
      }
      else{
        break;
      }
    }
    res = max(res, curr);
  }
  return res;
}

// Efficient Approach: O(n)
// int maxBinary(int arr[], int n){
//   int maxsofar = INT32_MIN;
//   int maxcurrent = 0;
//   for(int i=0;i<n;i++){
//     if(arr[i]==1){
//       maxcurrent+=arr[i];
//     }
//     maxsofar=max(maxsofar, maxcurrent);
//     if(arr[i]==0){
//       maxcurrent=0;
//     }
//   }
//   return maxsofar;
// }
int main(){
  int arr[] = {1,0,1,1,1,1,0,1,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << maxBinary(arr, n);
}