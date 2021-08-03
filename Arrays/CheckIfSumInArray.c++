#include<iostream>
using namespace std;

int window(int arr[], int n ,int k ,int sum){
  int currSum = 0;
  for(int i=0;i<k;i++){
    currSum+=arr[i];
  }
  if(currSum==sum){
      return 0;
    }
  int res = -1;
  for(int i=k;i<n;i++){
    currSum+=(arr[i]-arr[i-k]);
    if(currSum==sum){
      res = i-k+1;
    }
  }
  return res;
}

int main(){
  int arr[] = {1,8,30,-5,20,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int sum = 45;
  int k = 3;
  cout <<window(arr, n , k , sum);
}