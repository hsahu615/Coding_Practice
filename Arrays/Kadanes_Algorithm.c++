#include<iostream>
using namespace std;

int kadane(int arr[], int n){
  int max_so_far = INT8_MIN, max_ending_here = 0;
  for(int i=0;i<n;i++){
    max_ending_here = max_ending_here + arr[i];
    if(max_so_far < max_ending_here){
      max_so_far = max_ending_here;
    }
    if(max_ending_here < 0){
      max_ending_here = 0;
    }
  }             
  return max_so_far;
}

int main(){
  int arr[] = {-6,-1,-8};
  int n = sizeof(arr)/sizeof(arr[0]);
  int a = kadane(arr, n);
  cout << a; 
}