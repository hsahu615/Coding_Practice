#include<iostream>
using namespace std;

void seg(int arr[], int n){
  int low = 0, mid = 0, high = n-1;
  while(mid<=high){
    if(arr[mid]==0){
      swap(arr[low], arr[mid]);
      low++;mid++;
    }
    else if(arr[mid]==1){
      mid++;
    }
    else{
      swap(arr[high], arr[mid]);
      high--;
    }
  }
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
}

int main(){
  int arr[] = {0,1,2,0,0,0,1,0,1,2,2,1,0};
  int n = sizeof(arr)/sizeof(arr[0]);
  seg(arr, n);
}