#include<iostream>
#include<algorithm>
using namespace std;

int minDiff(int arr[], int n, int m){
  sort(arr, arr+n);
  int res = arr[m-1]-arr[0];
  int curr;
  for(int i=0;i<n-m+1;i++){
    curr = arr[i+m-1]-arr[i];
    res = min(res, curr);
  }
  return res;
}

int main(){
  int arr[] = {7,3,2,4,9,12,56};
  int n = sizeof(arr)/sizeof(arr[0]);
  int m = 3;
  cout << minDiff(arr, n, m);
}