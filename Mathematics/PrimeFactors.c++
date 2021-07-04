#include<iostream>
using namespace std;


// Time Complexity is: O((n^2)log(n)) 
// bool check(int p){
//   if(p==1){
//     return true;
//   }
//   for(int j=2;j*j<=p;j++){
//     if(p%j==0){
//       return false;
//     }
//   }
//   return true;
// }
// int main(){
//   int n = 315 ;
//   for(int i=2;i*i<=n;i++) { // Divisors always appears in pairs
//     if(check(i)){
//       int x = i;
//       while(n%x==0){
//         cout << i << " ";
//         x = x*i;
//       }
//     }
//   }
// }


// Every number can be divided into its primefactors
// int main(){
//   int n = 450;
//   if(n<=1){
//     return 1;
//   }
//   for(int i=2;i*i<=n;i++){
//     while(n%i==0){
//       cout << i << " ";
//       n = n/i;
//     }
//   }
//   if(n>1){
//     cout << n;
//   }
// }

// MOST EFFICIENT SOLUTION:- As we are ignoring the multiples of 2 and 3
// Time complexity is: theta(sqrt(n))
int main(){
  int n=450;
  while(n%2==0){
    cout << 2 << " ";
    n = n/2;
  }
  while(n%3==0){
    cout << 3 << " ";
    n = n/3;
  }
  for(int i=5; (i*i)<=n; i=i+6){
    while(n%i==0){
      cout << i <<" ";
      n = n/i;
    }
  }
  if(n>1){
    cout << n;
  }
}