#include<iostream>
using namespace std;

// Lomuto Partition
// It's not better than hoare's partition
int part(int arr[], int l, int h){
  int p = arr[h];
  int i=l-1;
  for(int j=l;j<=h-1;j++){
    if(arr[j]<p){
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i+1], arr[h]);
  return (i+1);
}


int quickSort(int arr[], int l, int h){
  if(l<h){
    int p = part(arr, l, h);
    quickSort(arr, l, p-1);
    quickSort(arr, p+1, h);

  }
}

int main(){
  int arr[] = {2,5,6,3,5,2,6,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  quickSort(arr, 0, n-1);
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
}