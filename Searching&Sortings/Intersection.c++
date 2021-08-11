#include<iostream>
using namespace std;


// Naive Approach: O(n+m)
// S.C: O(n)

// void intersect(int a[], int b[], int m, int n){
//   int maxa = a[0], maxb = b[0];
//   for(int i=0;i<m;i++){
//     maxa = max(maxa, a[i]);
//   }
//   for(int i=0;i<n;i++){
//     maxb = max(maxb, b[i]);
//   }
//   int c[max(maxa, maxb)+1] = {0};
//   for(int i=0;i<m;i++){
//     c[a[i]]++;
//   }
//   for(int i=0;i<n;i++){
//     if(c[b[i]]>=1){
//       cout<< b[i] << " ";
//       c[b[i]] = -1;
//     }
//   }
// }


// Efficient Approach: TWO POINTER
// TC: O(n+m)
void intersect(int a[], int b[], int m, int n){
  int i=0, j=0;
  while(i<m && j<n){
    if(i>0 && a[i]==a[i-1]){
      i++;
      continue;

    }
    if(a[i]==b[j]){
      cout << a[i] << " ";i++;j++;
    }
    else if(a[i]>b[j]){
      j++;
    }
    else if(a[i]<b[j]){
      i++;
    }
  }
}


int main(){
  int a[] = {1,1,3,3,3};
  int b[] = {1,1,1,1,3,5,7 };
  int m = sizeof(a)/sizeof(a[0]);
  int n = sizeof(b)/sizeof(b[0]);
  intersect(a, b, m, n);
}