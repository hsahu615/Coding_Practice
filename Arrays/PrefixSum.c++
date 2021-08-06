#include<iostream>
using namespace std;

void getsum(int temp[], int l, int r, int n){
  int sum = 0;
  int arr[n];
  for(int i=0;i<n;i++){
    arr[i] = temp[i];
  }
  for(int i=0;i<n;i++){
    sum+=arr[i];
    arr[i] = sum;
  }
  for(int i=0;i<n;i++){
    // cout << arr[i] << ' ';
  }
  if(l==0){
    l=1;
  }
  cout << arr[r]-arr[l-1] << endl;
}

int main(){
  int arr[] = { 2,8,3,9,6,5,4};
  int n = sizeof(arr)/sizeof(arr[0]);


  getsum(arr, 0,2, n);

  getsum(arr, 1,3, n);

}