#include <iostream>
#include <vector>

using namespace std;


// Naive Approach
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// void maj(int arr[], int n){
//   for(int i=0;i<n;i++){
//     int count=1;
//     for(int j=0;j<n;j++){
//       if(arr[i]==arr[j]){
//         count++;
//       }
//     }
//     if(count>(n/2)){
//       cout << i << " ";
//     }
//   }
// }


// Efficient Solution
// Time Complexity: O(4n)
// Space Complexity: O(max(arr))
// void maj(int arr[], int n){
//   int max = arr[0];
//   for(int i=1;i<n;i++){
//     if(arr[i]>max){
//       max = arr[i];
//     }
//   }
//   int count[max+1];
//   for(int i=0;i<n;i++){
//     count[arr[i]]++;
//   }
//   int res = -1;
//   for(int i=0;i<=max;i++){
//     if(count[i]>(n/2)){
//       res = i;
//     }
//   }
//   for(int i=0;i<n;i++){
//     if(res==arr[i]){
//       cout << i ;
//       break;
//     }
//   }
// }


/* Moore's voting algorithm
The first step gives the element that maybe the majority element in the array. If there is a 
majority element in an array, then this step will definitely return majority element, otherwise, it will return candidate for majority element.
Check if the element obtained from the above step is majority element. This step is necessary as    there might be no majority element.
Each element either increase count or cancel out the count of last one*/
int maj(int arr[], int n){
  int res = 0, count=1;
  for(int i=1;i<n;i++){
    if(arr[i]==arr[res]){
      count++;
    }
    else{
      count--;
    }
    if(count==0){count=1;res = i;}
  }
  count = 0;
  for(int i = 0;i<n;i++){
    if(arr[res] == arr[i]){
      count++;
    }
  }
  if(count<=n/2){
    return -1;
  }
  return res;
}
int main(){
  int arr[] = {6,8,7,6,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << maj(arr, n);
}