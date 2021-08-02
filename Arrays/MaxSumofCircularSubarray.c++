#include<iostream>
using namespace std;

// Naive approach: O(n^2)
/* Idea behind the approach is, consider current element as largest and iterate through next element and add to max_curr if max_curr crosses our present i element than update i element to max_curr res is considered as our greatest till now , now check for max between max_sofar and res...and update res */
// void maxcircular(int arr[], int n){
//   int res = arr[0];
//   for(int i=0;i<n;i++){
//     int max_sofar = arr[i];
//     int max_curr = 0;
//     for(int j=1;j<n;j++){
//       int index = (i+j)%n;
//       max_curr+=arr[index];
//       max_sofar = max(max_curr, max_sofar);
//     }
//     res = max(res, max_sofar);
//   }
//   cout << res;
// }


// Efficient Approach: O(n)

int kadane(int arr[], int n){
  int max_sofar = arr[0];
  int max_curr = 0;
  for(int i=1;i<n;i++){
    max_curr = max_curr + arr[i];

    max_sofar = max(max_sofar, max_curr);

    if(max_curr<0){
      max_curr = 0;
    }
  }
  return max_sofar;
}
// Idea Behind this is if we want to calculate max sum of circular subarray you have to substract minimum sum from total sum
int maxcircular(int arr[], int n){
  int max_normal = kadane(arr, n);
  if(max_normal<0){
    return max_normal;
  }
  int arr_sum = 0;
  for(int i=0;i<n;i++){
    arr_sum+=arr[i];
    arr[i] = -arr[i];
  } 
  int circular_sum = arr_sum + kadane(arr, n);
  return max(circular_sum, max_normal);
}


int main(){
  int arr[] = {5,-2,3,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << maxcircular(arr, n);

}



