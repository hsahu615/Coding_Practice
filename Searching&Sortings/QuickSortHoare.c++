#include<iostream>
using namespace std;

int hoare(int arr[], int l, int r){
  int i = l-1;
  int p = arr[l];
  int j = r+1;
  while(true){
    do{
      i++;
    }while(arr[i]<p);
    do{
      j--;
    }while(arr[j]>p);
    if(i>=j){
      return j;
    }
    swap(arr[i], arr[j]);
  }

}

void quick(int arr[], int l, int r){
  if(l<r){
    int p = hoare(arr, l, r);
    quick(arr, l, p);
    quick(arr, p+1, r);
  }
}



int main(){
  int arr[] = {4,5,6,2,1,7,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  quick(arr, 0, n-1);
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
}