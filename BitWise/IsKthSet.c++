#include<iostream>
using namespace std;

void check(int n, int k){
  int b = 1<<(k-1);
  if(n&b!=0){
    cout << "Yes";
  }
  else{
    cout << "No";
  }
}

int main(){
  int n = 1, k = 3;
  check(n, k);
}