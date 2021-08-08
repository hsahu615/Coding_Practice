#include<iostream>
using namespace std;

bool two(int arr[], int n, int k){
  int left = 0, right = n-1;
  while(left<right){
    if((arr[left]+arr[right])==k){
      return true;
    }
    else if((arr[left]+arr[right])<k){
      left++;
    }
    else{
      right++;
    }
  }
  return false;
}

int main(){
  int arr[] = {2,5,8,12,30};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << two(arr, n, 42);
}