#include<iostream>
using namespace std;

// QUICK SELECT ALGORITHM: O(n^2)
// int partition(int arr[], int l, int r){
//   int p = arr[r], i=l-1;
//   for(int j=l;j<=r-1;j++){
//     if(arr[j]<p){
//       i++;
//       swap(arr[i], arr[j]);
//     }
//   }
//   swap(arr[i+1], arr[r]);
//   return (i+1);

// }

// int check(int arr[], int l, int r, int k){
//   while(l<=r){
//     int p = partition(arr, l, r);
//     if(p>(k-1)){
//       r = p-1;
//     }
//     else if(p==k-1){
//       return arr[p];
//     }
//     else{
//       l = p+1;
//     }
//   }
//   return -1;
// }

int main(){
  int arr[] = {10,4,5,8,11,6,26}; // 4,5,6,8,10,11,26
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << check(arr, 0, n-1, 5);
}