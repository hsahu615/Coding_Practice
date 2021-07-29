#include<iostream>
using namespace std;

int maxsum(int arr[], int n){
  int res = arr[0];

  for(int i=0;i<n;i++){
    int maxsofar = arr[i];
    int maxcurr =arr[i];
    for(int j=1;j<n;j++){
      int index = (i+j)%n;
      maxcurr+=arr[index];
      maxsofar = max(maxcurr, maxsofar);
    }
    res = max(res, maxsofar);
  }
  return res;
  
}

int main(){
  int arr[] = {5,-2,3,4};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << maxsum(arr, n);

}