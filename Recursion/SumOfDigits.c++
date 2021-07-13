#include<iostream>
using namespace std;

int sum(int n){
  static int sums = 0;
  if(n==0){
    return sums;
  }
  sums = n%10 + sums;
  return sum(n/10);
}

int main(){
  int n = 9987;
  cout << sum(n);
  
}