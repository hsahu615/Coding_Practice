#include<iostream>
using namespace std;


int search(int arr[], int n, int x){
  int low = 0, high = n-1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==x){return mid;}
    else if(arr[low]<arr[mid]){
      if(arr[low]<=x && arr[mid]>x){
        high = mid-1;
      }
      else{
        low = mid+1;
      }
    }
    else{
      if(x>arr[mid] && arr[high]>=x){
        low = mid+1;
      }
      else{
        high = mid-1;
      }
    }
  }
}


int main(){
  int arr[] = {100,200,300,400,500,600,70,80};
  int n  = sizeof(arr)/sizeof(arr[0]);
  cout << search(arr, n, 70);
}