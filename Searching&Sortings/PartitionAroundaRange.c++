#include<iostream>
using namespace std;

void way(int arr[], int n, int range[]){
  int low=0, mid=0, high=n-1;
  while(mid<=high){
    if(arr[mid]<range[0]){
      swap(arr[low], arr[mid]);
      mid++;low++;
    }
    else if(arr[mid]>=range[0] && arr[mid]<=range[1]){
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
  int arr[] = {10,5,6,3,20,9,40};
  int n = sizeof(arr)/sizeof(arr[0]);
  int range[] = {5,10};
  way(arr, n, range);
}