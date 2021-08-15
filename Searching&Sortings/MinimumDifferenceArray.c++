#include<iostream>
#include<algorithm>

using namespace std;


// Naive Approach: O(n^2)
// int mini(int arr[], int n){
//   int res = INT32_MAX;
//   for(int i=1;i<n;i++){
//     for(int j=0;j<i;j++){
//       res=min(res, abs(arr[i]-arr[j]));
//     }
//   }
//   return res;
// }

// Efficient Approach: O(n*logn)
int mini(int arr[], int n){
  sort(arr, arr+n);
  int res = arr[1]-arr[0];
  for(int i=1;i<n;i++){
    res = min(res, arr[i]-arr[i-1]);
  }
  return res;

}
int main(){
  int arr[] = {12,20,10,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << mini(arr, n);
}