#include<iostream>
using namespace std;

bool two(int arr[], int left, int right, int k){
  while(left<right){
    if((arr[left]+arr[right])==k){
      return true;
    }
    else if((arr[left]+arr[right])<k){
      left++;
    }
    else{
      right--;
    }
  }
  return false;
}

int search(int arr[], int n, int x){
  for(int i=0;i<n;i++){
    if(two(arr, i+1,n-1, x-arr[i])){
      return 1;
    }
  }
  return 0;
}

int main(){
  int arr[] = {2,3,4,8,9,20,40};
  int n = sizeof(arr)/sizeof(arr[0]);
  if(search(arr, n, 32)){
    cout << "Yes";
  }
  else{
    cout << "No";
  }
}