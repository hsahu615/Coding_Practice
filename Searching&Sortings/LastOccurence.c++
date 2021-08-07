#include<iostream>
using namespace std;

int lastiter(int arr[], int low, int high, int k){
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>k){
      high = mid-1;
    }
    else if(arr[mid]<k){
      low = mid+1;
    }
    else{
      if(mid!=high && arr[mid]!=arr[mid+1]){
        return mid;
      }
      else if(mid==high){
        return mid;
      }
      else{
        low = mid+1;
      }
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
  int arr[] = {1,2,2,3,4,5,6,6,6,7,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << last(arr, 0, n-1, 2) << endl;
}