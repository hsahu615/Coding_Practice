#include<iostream>
using namespace std;

// void fib(int n){
//   int a=1, b=1, c=0;

//   if(n>2){
//     cout << 1 << " " << 1 << " ";
//   }
//   else  if(n>1){
//     cout << 1;
//   }
//   for(int i=2;i<n;i++){
//     c = a+b;
//     cout << c << " ";
//     a = b;
//     b = c;
//   }
  
// }

int fib(int n){
  if(n==0){return 0;}
  if(n==1){return 1;}
  return fib(n-1) + fib(n-2);
}

int main(){
  int n ;
  cin >>  n;
  cout << fib(n);
}