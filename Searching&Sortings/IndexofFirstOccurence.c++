#include<iostream>
using namespace std;

// Recursive Approach 
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

// Iterative Approach
int firstiter(int arr[],int n, int k){
  int low = 0, high = n-1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>k){
      high = mid-1;
    }
    else if(arr[mid]<k){
      low = mid+1;
    }
    else{
      if(mid!=0 && arr[mid]!=arr[mid-1]){
        return mid;
      }
      else if(mid==0){
        return mid;
      }
      else{
        high =  mid - 1;
      }
    }
  }

}
int main(){
  int arr[] = {1,2,2,3,4,5,6,6,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << first(arr, 0, n-1, 2) <<  endl;
  cout << firstiter(arr, n, 6);

}