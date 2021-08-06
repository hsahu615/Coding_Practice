#include<iostream>
using namespace std;

// Naive Approach: O(n^2)
// void equilibrium(int arr[], int n){
//   for(int i=0;i<n;i++){
//     int left=0;int right = 0;
//     for(int j=0;j<i;j++){
//       left+=arr[j];
//     }  
//     for(int j=i+1;j<n;j++){
//       right+=arr[j];
//     } 
//     if(left==right){
//       cout << i;
//       break;
//     }   
//   }
// }

// Efficient Approach
// TC: O(n)
// SC: O(2n)
// void equilibrium(int arr[], int n){
//   int left[n];
//   int right[n];
//   int sum=0;
//   for(int i=0;i<n;i++){
//     sum+=arr[i];
//     left[i]=sum;
//   }
//   sum=0;
//   for(int i=n-1;i>=0;i--){
//     sum+=arr[i];
//     right[i]=sum;
//   }
//   for(int i=0;i<n;i++){
//     if(left[i]==right[i]){
//       cout<<  i;
//     }
//   }
// }

void equilibrium(int arr[], int n){
  int left = 0;
  int sum = 0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  for(int i=0;i<n;i++){
    if(sum-arr[i]==left){
      cout << "yes";
    }
    left+=arr[i];
    sum-=arr[i];

  }
}

int main(){
  int arr[] = {3,4,8,-9,20,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  equilibrium(arr, n);
}