#include<iostream>
using namespace std;

int countone(int arr[], int low, int high){
  int mid = (low+high)/2;
  if(arr[mid]<1){
    countone(arr, mid+1, high);
  }
  else{
    if(mid!=0 && arr[mid]!=arr[mid-1]){
      return mid;;
    }
    else if(mid==0){
      return mid;
    }
    else if(arr[mid]==arr[mid-1]){
      countone(arr, low, mid-1);
    }
  }
  return 0;
}

int main(){
  int arr[] = {0,0,0, 1,1,1,1,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  int first = countone(arr, 0, n-1);
  cout << n-first;

}