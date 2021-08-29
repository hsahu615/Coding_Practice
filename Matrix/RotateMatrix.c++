#include<iostream>
using namespace std;

// void rotate(int arr[][4], int n){
//   int temp[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       temp[n-j-1][i] = arr[i][j];
//     }
//   }
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = temp[i][j];
//     }
//   }
// }

// Efficient Approach

void rotate(int arr[][4], int n){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      swap(arr[i][j], arr[j][i]);
    }
  }
  for(int i=0;i<(n/2);i++){
    for(int j=0;j<n;j++){
      swap(arr[i][j], arr[n-i-1][j]);
    }
  }
}

int main(){
  int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
  int n = 4;

  rotate(arr, n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}