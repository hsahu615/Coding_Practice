#include<iostream>
using namespace std;

int maxsubarray(int arr[], int n){
  int maxsofar = 0;

  for(int i=0;i<n;i++){
    int currmax=1;
    for(int j=i+1;j<n;j++){
      if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j]%2!=0 && arr[j-1]%2==0)){
        currmax++;
      }
      else{
        break;
      }
    }
    maxsofar= max(currmax, maxsofar);
  }
  return maxsofar;
}

int main(){
  int arr[] = {5,10,20,6,3,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << maxsubarray(arr, n);
}