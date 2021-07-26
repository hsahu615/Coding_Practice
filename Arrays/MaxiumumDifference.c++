#include<iostream>
using namespace std;
// Naive Solution O(n^2)
// int maxdiff(int arr[], int n){
//   int init = arr[1] - arr[0];
//   for(int i =0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//       init = max(init, arr[j] - arr[i]);
//     }
//   }
//   return init;
// }

// Efficient solution O(n)
int maxdiff(int arr[], int n){
  int res = arr[1] - arr[0];
  int minv = arr[0];
  for(int i = 1;i<n;i++){
    res = max(res, arr[i] - minv);
    minv = min(minv, arr[i]);
  }
  return res;
}
int main(){
  int arr[]={30,10,8,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << maxdiff(arr, n);

}