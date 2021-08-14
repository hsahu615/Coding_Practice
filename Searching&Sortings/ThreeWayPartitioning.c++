#include<iostream>
using namespace std;

void way(int arr[], int n, int p){
  int low=0, mid=0, high = n-1;
  while(mid<=high){
    if(arr[mid]<p){
      swap(arr[low], arr[mid]);
      low++;
      mid++;
    }
    else if(arr[mid]==p){
      mid++;
    }
    else{
      swap(arr[mid], arr[high]);
      high--;
    }
  }
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
}

int main(){
  int arr[] = {2,1,2,20,10,13,1};
  int pivot = 2;
  int n = sizeof(arr)/sizeof(arr[0]);
  way(arr, n, pivot);
}