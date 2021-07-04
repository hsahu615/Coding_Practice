#include<iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key){
  int mid = (low+high)/2;
  if(arr[mid]==key){
    return mid;
  }
  else if(key<arr[mid]){
    return binarySearch(arr, low, mid-1, key);
  }
  else{
    return binarySearch(arr, mid+1, high, key);
  }
}

int main(){
  int arr[] = {1,2,3,4,5,6,7};
  int n = 7;
  int index = binarySearch(arr, 0, (n-1), 3);
  cout << index;
}