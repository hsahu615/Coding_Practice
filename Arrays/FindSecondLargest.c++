#include<iostream>
using namespace std;
// NAIVE APPROACH WITH TWO TRAVERSAL
// int Largest(int a[], int n){
//   int l=0;
//   for(int i=0;i<n;i++){
//     if(a[i]>a[l]){
//       l = i;
//     }
//   }
//   return l;
// }

// int secondLargest(int a[], int n){
//   int l = Largest(a, n);
//   int res = -1;
//   for(int i=0;i<n;i++){
//     if(a[i]!=a[l]){
//       if(res ==-1){
//         res = i;
//       }
//       else if(a[i]>a[res]){
//         res = i;
//       }
//     }
//   }
//   return res;
// }


int secondLargest(int a[], int n){
  int res = -1;
  int largest = 0;
  for(int i =1;i<n;i++){
    if(a[i]>a[largest]){
      res = largest;
      largest = i;
    }
    else if(a[i]<a[largest] && a[i]>a[res]){
      res = i;
    }
  }
  return res;
}

int main(){
  int a[] = {12,12,12,7};
  int n = sizeof(a)/sizeof(a[0]);
  cout << secondLargest(a,n);
}