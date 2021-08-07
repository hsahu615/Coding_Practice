#include<iostream>
using namespace std;

int first(int arr[], int low, int high, int k){
  int mid = (low+high)/2;
  if(arr[mid]>k){
    first(arr, low, mid-1, k);
  }
  else if(arr[mid]<k){
    first(arr, mid+1, high, k);
  }
  else if(arr[mid]==k){
    if(mid!=0 && arr[mid]!=arr[mid-1]){
      return mid;
    }
    else if(mid==0){
      return mid;
    }
    else{
      first(arr, low, mid-1, k);
    }
  }
}


int last(int arr[], int low, int high, int k){
  int mid = (low+high)/2;
  if(arr[mid]>k){
    last(arr, low, mid-1, k);
  }
  else if(arr[mid]<k){
    last(arr, mid+1, high, k);
  }
  else{
    if(mid!=high && arr[mid]!=arr[mid+1]){
      return mid;
    }
    else if(mid==high){
      return mid;
    }
    else{
      last(arr, mid+1, high, k);
    }
  }
}

int main(){
  int arr[] = {1,2,2,3,4,5,5,5,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int lastindex = last(arr, 0, n-1, 5);
  int firstindex = first(arr, 0, n-1, 5);
  cout << lastindex-firstindex+1;


}