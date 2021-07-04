#include<iostream>
using namespace std;

void max_min(int arr[], int n){
  int min=arr[0], max=arr[0];
  for(int i=0;i<n;i++){
    if(min>arr[i]){
      min = arr[i];
    }
    if(max<arr[i]){
      max = arr[i];
    }
  }
  cout << min << " " << max;

}

int main(){
  int arr[] = {1,4,4,1,0,1};
  int n = 6;
  max_min(arr, n);
  
}