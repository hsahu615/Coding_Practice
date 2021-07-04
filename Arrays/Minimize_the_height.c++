
#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int k, n, minEle, Maxele;
  int arr[4] = {1,5,8,10};
  k = 2; 
  n = 4;
  int result = arr[n-1] - arr[0];
  for(int i =1; i<n;i++){
    Maxele = max(arr[i-1] + k, arr[n-1] - k);
    minEle = min(arr[0] + k, arr[i-1] - k);
    result = min(result, Maxele - minEle);
  }
  cout << result;


}