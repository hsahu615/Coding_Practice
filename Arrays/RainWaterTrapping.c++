#include<iostream>
using namespace std;

// Naive Approach: O(N^2)
// int trapWater(int arr[], int n){
//   int res = 0;
//   for(int i=1;i<n;i++){
//     int left_max = arr[i];
//     for(int j=0;j<i;j++){
//       if(arr[j]>left_max){
//         left_max = arr[j];
//       }
//     }
//     int right_max = arr[i];
//     for(int j=i+1;j<n;j++){
//       if(arr[j]>right_max){
//         right_max = arr[j];
//       }
//     }
//     res += min(left_max, right_max) - arr[i];
//   }
//   return res;
// } 

// Efficient Approach: O(N)
int trappingWater(int arr[], int n)
{
  int left[n];
  int right[n];
  int maxs = arr[0];
  for (int i = 0; i < n; i++)
  {
    left[i] = max(arr[i], maxs);
    maxs = max(maxs, arr[i]);
  }
  maxs = arr[n - 1];
  for (int i = n - 1; i >= 0; i--)
  {
    right[i] = max(arr[i], maxs);
    maxs = max(maxs, arr[i]);
  }

  int res = 0;
  for (int i = 0; i < n; i++)
  {
    res = res + min(left[i], right[i]) - arr[i];
  }
  return res;
}

int main(){
  int arr[] = {3,0,2,1,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << trappingWater(arr, n)<< endl;
  cout << trapWater(arr, n);
  
}