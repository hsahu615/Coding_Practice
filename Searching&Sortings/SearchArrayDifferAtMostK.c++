#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void search(int a[], int x, int k){
  int i=0;
  int n=6;
  while(i<n){
    if(a[i]==x){
      cout << i;
      break;
    }
    i = i + max(1 , abs(a[i]-x)/k);
  }

}

int main(){

  int a[] = {20, 40, 50, 70, 70, 60};
  int k=20, x = 70;
  search(a, x, k);
}