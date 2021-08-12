#include<iostream>
using namespace std;

int main(){
  int a[] = {3,5,10,10,10,15,15,20};
  int b[] = {5,10,10,15,30};
  int maxa=a[0];
  int maxb=b[0];
  int m = sizeof(a)/sizeof(a[0]);
  int n = sizeof(b)/sizeof(b[0]);

  for(int i=0;i<m;i++){
    maxa = max(maxa, a[i]);
  }
  for(int i=0;i<n;i++){
    maxb = max(maxb, b[i]);
  }
  int c[max(maxa, maxb)+1] = {0};
  for(int i=0;i<m;i++){
    c[a[i]]++;
  }
  for(int i=0;i<n;i++){
    c[b[i]]++;
  }
  for(int i=0;i<=max(maxa, maxb);i++){
    if(c[i]>0){
      cout << i << " ";
    }
  }
}