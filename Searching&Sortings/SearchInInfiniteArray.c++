#include<iostream>
using namespace std;

// Naive Approach: O(pos(k))
// int search(int arr[], int k){
//   int i=0;
//   while(true){
//     if(arr[i]==k){
//       return i;
//     }
//     else if(arr[i]>k){
//       return -1;
//     }
//     i++;
//   }
//   return 0;
// }


// Efficient Approach: O(log(p))
// Unbounded Binary Search
int binarySearch(int arr[], int k, int low, int high){
  int mid = (low+high)/2;
  if(arr[mid]==k){
    return mid;
  }
  else if(arr[mid]>k){
    binarySearch(arr, k, low, mid-1);
  }
  else{
    binarySearch(arr, k, mid+1, high);
  }
}

int search(int arr[], int k){
  if(arr[0]==k){
    return 0;
  }
  int i=1;
  while(arr[i]<k){
    i*=2;
  }
  if(arr[i]==k){return i;}
  return binarySearch(arr, k, i/2+1,i-1);
}


int main(){
  int arr[] = {1,10,15,20,40,100,140,163,200};
  cout << search(arr, 100);

}