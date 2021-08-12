#include<iostream>
using namespace std;

// Naive Approach:O(n)
// S.C: O(n)
// void part(int arr[], int l, int h, int p){
//   int temp[h-l+1];
//   int index = 0;
//   for(int i=l;i<=h;i++){
//     if(arr[i]<=arr[p]){
//       temp[index] = arr[i];index++;
//     } 
//   }
//   for(int i=l;i<=h;i++){
//     if(arr[i]>arr[p]){
//       temp[index++] = arr[i];
//     } 
//   }
//   for(int i=l;i<=h;i++){
//       arr[i] = temp[i-l];
//   }
//   for(int i=l;i<=h;i++){
//     cout << arr[i] << ' ';
//   }
// }


// Lomuto Partition
// int part(int arr[], int l, int h, int p){
//   int i=l-1;
//   for(int j=l;j<=h-1;j++){
//     if(arr[j]<arr[h]){
//       i++;
//       swap(arr[j], arr[i]);
//     }
//   }
//   swap(arr[i+1], arr[h]);
//   return (i+1);
// }

// Hoare's Partition
int part(int arr[], int l, int h){
  int p = arr[l];
  int left = l-1;
  int right = h+1;        
  while(true){              
    do{
      left++;
    }while(arr[left]<p);
    do{
      right--;
    }while(arr[right]>p);
    if(left>=right){
      return right;
    }
    swap(arr[left], arr[right]);
  }

}


int main(){
  int arr[] = {5,3,8,4,2,7,1,10};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << part(arr, 0, n-1);
}