#include<iostream>
using namespace std;

void uni(int arr1[], int arr2[], int m, int n){
  int i=0, j=0;
  while(i<m && j<n){
    if(arr1[i]<arr2[j])
      cout << arr1[i++] << " ";
    else if(arr2[j]<arr1[i])                              //  int arr1[]={85,25,1,32,54,6};
                                                          //  int arr2[]={85,2, 1,32};
      cout << arr2[j++] << " ";
    else
      cout << arr1[i++] << " ";
      j++;
  }
  while(i<m){
    cout << arr1[i++] << " "; 
  }
  while(j<n){
    cout << arr2[j++] << " ";
  }
}

int main(){
  int arr1[]={85,25,1,32,54,6};
  int arr2[]={85,2, 1,32};
  int m = sizeof(arr1)/sizeof(arr1[0]);
  int n = sizeof(arr2)/sizeof(arr2[0]);

  uni(arr1, arr2, m , n);

}