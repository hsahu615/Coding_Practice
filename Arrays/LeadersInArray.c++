#include<iostream>
using namespace std;
// NAIVE APPROACH
// TIME COMPLEXITY: O(n^2)
// void leader(int arr[], int n){
//   for(int i=0;i<n;i++){
//     int flag = true;
//     for(int j=i+1;j<n;j++){
//       if(arr[j]>arr[i]){
//         flag = false;
//         break;
//       }
//     }
//     if(flag == true){
//       cout << arr[i] << " " ;
//     }
//   }
// }

// EFFICIENT APPROACH
// TIME COMPLEXITY: O(n)
void leader(int arr[], int n){
  int curr = arr[n-1];
  cout << curr << " ";
  for(int i=n-2;i>=0;i--){
    if(curr<arr[i]){
      curr = arr[i];
      cout << arr[i] << " ";
    }
  }
}


int main(){
  int arr[] = {30,20,10};
  int n = sizeof(arr)/sizeof(arr[0]);
  leader(arr, n);
}