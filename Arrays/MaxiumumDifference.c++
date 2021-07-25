#include<iostream>
using namespace std;

int maxdiff(int arr[], int n){
  int init = 0;
  for(int i =0;i<n;i++){
    for(int j=i;j<n;j++){
      if((arr[j]-arr[i]>init)){
        init = arr[j]-arr[i];
      }
    }
  }
  return init;
}

int main(){
  int arr[]={2,3,10,6,4,1,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << maxdiff(arr, n);

}