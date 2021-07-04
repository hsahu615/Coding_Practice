#include<iostream>
using namespace std;

void find(int arr[],int n,int x){
  int first=-1, last=-1;

  for(int i=0;i<n;i++){
   if(arr[i]!=x){
     continue;
   }
   if(first==-1){
     first=i;
   }
   last=i;
  }
  cout<<first <<  " " << last;
}

int main(){
  int arr[] = {1,2,3,3,3,4,5};
  int n=7;
  int x=3;
  find(arr, n, x);
}