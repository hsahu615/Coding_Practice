#include<iostream>
using namespace std;

// Naive Approach
// int sum(int arr[], int b, int e){
//   int s=0;
//   for(int i=b;i<=e;i++){
//     s+=arr[i];
//   }
//   return s;
// }

// int pages(int arr[], int k, int n){
//   if(k==1){
//     return sum(arr, 0, n-1);
//   }
//   if(n==1){
//     return arr[0];
//   }

//   int res = INT32_MAX;
//   for(int i=1;i<n;i++){
//     res = min(res, max(pages(arr, k-1, i), sum(arr, i, n)));
//   }
//   return res;
// }





// Efficient Approach

bool isPossible(int arr[], int k, int mid, int n){
  int sum = 0, student=1;
  for(int i=0;i<n;i++){
    if(arr[i]>mid){
      return false;
    }
    if((arr[i]+sum)>mid){
      student++;
      sum=arr[i];
    }
    else{
      sum+=arr[i];
    }
    if(student>k){
      return false;
    }
  }
  return true;
}

int pages(int arr[], int k, int n){
  int maxi=arr[0], mini = arr[0];
  for(int i=0;i<n;i++){
    maxi +=arr[i];
    mini = min(mini, arr[i]);
  }
  int res = 0;
  while(mini<=maxi){
    int mid = (mini+maxi)/2;
    if(isPossible(arr, k, mid, n)){
      res = mid;
      maxi = mid-1;
    }
    else{
      mini = mid+1;
    }
  }
  return res;
}
int main(){
  int arr[] = {12, 34, 67, 90};
  int k = 2;
  // int n = sizeof(arr)/sizeof(arr[0]);
  int n = 4;
  cout << pages(arr, k, n);
}