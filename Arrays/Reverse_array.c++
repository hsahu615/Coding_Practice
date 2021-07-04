#include<iostream>
using namespace std;

void reverse(int arr[], int n){
  int low = 0;
  int high = n-1;
  while(low<high){
    swap(arr[low], arr[high]);
    high--;
    low++;
  }
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
}
int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9};
  int n = 9;
  reverse(arr, n);

}