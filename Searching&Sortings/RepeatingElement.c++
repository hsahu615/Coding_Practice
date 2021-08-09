#include<iostream>
#include<algorithm>

using namespace std;

// Super Naive Approach: O(n^2)
// int repeating(int arr[], int n){
//   for(int i=0;i<n;i++){
//     int count=0;
//     for(int j = 0;j<n;j++){
//       if(arr[i]==arr[j]){
//         count++;
//       }
//     }
//     if(count>1){
//       return arr[i];
//     }
//   }
//   return -1;
// }

// Naive Approach:O(n*logn)
// int repeating(int arr[], int n){
//   sort(arr, arr+n);
//   for(int i=0;i<n-1;i++){
//     if(arr[i]==arr[i+1]){
//       return arr[i];
//     }
//   }
//   return -1;
// }

// Naive Approach:O(n)
// Space C: O(n)
// int repeating(int arr[], int n){
//   int max1 = arr[0];
//   for(int i=0;i<n;i++){
//     max1 = max(max1, arr[i]);
//   }
//   int arr2[max1+1] = {0};
//   for(int i=0;i<n;i++){
//     if(arr2[arr[i]]==1){
//       return arr[i];
//     }
//     arr2[arr[i]]++;
//   }
//   return -1; 
// }


int repeating(int arr[], int n){
  int slow = arr[0]+1, fast = arr[0]+1;
  do{
    slow = arr[slow]+1;
    fast = arr[arr[fast]+1]+1;
  }while(slow!=fast);
  slow = arr[0]+1;
  while(slow!=fast){
    slow = arr[slow]+1;
    fast = arr[fast]+1;
  };
  return slow-1;
}



int main(){
  int arr[] = {0,2,1,3,5,4,6,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << repeating(arr, n);
}