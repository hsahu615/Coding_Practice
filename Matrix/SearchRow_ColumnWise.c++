#include<iostream>
using namespace std;

void func(int arr[3][4], int r, int c, int key){
  int i=0, j=c-1;
  while(i<=r-1 && j>=0){
    if(arr[i][j]==key){
      cout << "Found at " << i << " " << j;
      return; 
    }
    else if(arr[i][j]>key){
      j--;
    }
    else{
      i++;
    }
  }
  cout << "NOT FOUND";
}

int main(){
  int arr[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
  int m = 3;
  int n = 4;
  int key = 3;
  func(arr, m, n, key);
}