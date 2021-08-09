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
int maxOf(int arr[], int n){
  int max1 = arr[0];
  for(int i=1;i<n;i++){
    max1 = max(max1, arr[i]);
  }
  return max1;
}
int minOf(int arr[], int n){
  int min1 = arr[0];
  for(int i=1;i<n;i++){
    min1 = min(min1, arr[i]);
  }
  return min1;
}

int isFeasible(int arr[], int k, int mid, int n){
  int sum=0, student = 1;
  for(int i=0;i<n;i++){
    if(sum+arr[i]>mid){
      student++;
      sum = arr[i];
    }
    else{
      sum+=arr[i];
    }
  }
  return student<=k;
}
int pages(int arr[], int k, int n){
  int max1 = maxOf(arr, n);
  int min1 = minOf(arr, n);
  int res = 0;
  while(min1<=max1){
    int mid = (min1+max1)/2;
    if(isFeasible(arr, k, mid, n)){
      res = mid;
      max1 = mid-1;
    }
    else{
      min1 = mid+1;
    }
  }  
  return res;
}

int main(){
  int arr[] = {10,20,30,40};
  int k = 2;
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << pages(arr, k, n);
}