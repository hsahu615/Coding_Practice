#include<iostream>
using namespace std;

int main(){
  int arr[] = {3, 9, 12, 16, 20};
  int minele;
  int maxele;
  int n = 5;
  int k = 3;
  int res = arr[n-1] - arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>=k){
      maxele = max(arr[i-1] + k, arr[n-1] - k);
      minele = min(arr[0]+k, arr[i]-k);
      res = min(res, maxele-minele);
    }
  }
  cout << res;
}