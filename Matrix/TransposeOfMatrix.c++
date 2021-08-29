#include<iostream>
using namespace std;

// void transpose(int arr[4][4], int n){
//   int temp[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       temp[i][j] = arr[j][i];
//     }
//   }
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = temp[i][j];
//     }
//   }
// }

// Efficient Approach
void transpose(int arr[4][4], int n){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      swap(arr[i][j], arr[j][i]);
    }
  }
}

int main(){
  int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  int n = 4;
  transpose(arr, n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  } 
}