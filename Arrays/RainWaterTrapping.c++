#include<iostream>
using namespace std;

int trappingWater(int arr[], int n)
{
  int left[n];
  int right[n];
  int maxs = arr[0];
  for (int i = 0; i < n; i++)
  {
    left[i] = max(arr[i], maxs);
    maxs = max(maxs, arr[i]);
  }
  maxs = arr[n - 1];
  for (int i = n - 1; i >= 0; i--)
  {
    right[i] = max(arr[i], maxs);
    maxs = max(maxs, arr[i]);
  }

  int res = 0;
  for (int i = 0; i < n; i++)
  {
    res = res + min(left[i], right[i]) - arr[i];
  }
  return res;
}

int main(){
  int arr[] = {7,4,0,9};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << trappingWater(arr, n);
  
}