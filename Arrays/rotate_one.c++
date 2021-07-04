#include<iostream>
using namespace std;

void rotate(int arr[], int n){
    int a = arr[n-1];
    for(int j=n-1;j>0;j--){
      arr[j] = arr[j-1];
    }
    arr[0] = a;
    for(int i=0;i<n;i++){
      cout << arr[i] << " ";
    }
}
  
int main(){
  int n;
  cout << "Enter size of array: ";
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  rotate(arr, n); 
}