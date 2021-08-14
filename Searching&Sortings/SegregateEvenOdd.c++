#include<iostream> 
using namespace std;


void lomuto(int arr[], int n){
  int low = -1, high = n-1;
  for(int j = 0;j<n-1;j++){
    if(arr[j]%2==0){
      low++;
      swap(arr[j], arr[low]);
    }
  }
  swap(arr[low+1], arr[high]);
  cout << low+1 << endl;
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
}

int main(){
  int arr[] = {4,6,2,4,7,8,9,3,3,4,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  lomuto(arr, n);
}