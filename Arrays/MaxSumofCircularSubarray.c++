#include<iostream>
using namespace std;

// Naive approach: O(n^2)
/* Idea behind the approach is, consider current element as largest and iterate through next element and add to max_curr if max_curr crosses our present i element than update i element to max_curr res is considered as our greatest till now , now check for max between max_sofar and res...and update res */
void maxcircular(int arr[], int n){
  int res = arr[0];
  for(int i=0;i<n;i++){
    int max_sofar = arr[i];
    int max_curr = 0;
    for(int j=1;j<n;j++){
      int index = (i+j)%n;
      max_curr+=arr[index];
      max_sofar = max(max_curr, max_sofar);
    }
    res = max(res, max_sofar);
  }
  cout << res;
}

int main(){
  int arr[] = {-3,4,6,-2};
  int n = sizeof(arr)/sizeof(arr[0]);
  maxcircular(arr, n);
}