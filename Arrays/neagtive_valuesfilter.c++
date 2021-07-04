#include<iostream>
using namespace std;

int main(){
  int a[] = {-12,11,-13,-5,6,-7,5,-3,-6};
  int n=sizeof(a)/sizeof(a[0]);
  for(int i=0; i<n;i++){
    if(a[i]>=0){
      for(int j=i;j<n;j++){
        if(a[j]<0){
          swap(a[i],a[j]);
        }
      }
    }
  }
  for(int i=0;i<n;i++){
      cout << a[i] << " ";
    }
  
}