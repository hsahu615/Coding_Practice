#include<iostream>
using namespace std;

// Naive Approach
// Time Complexity: O(n)

// void power(int x, int n){
//   int res = 1;
//   while(n>=1){
//     res = res*x;
//     n--;
//   }
//   cout << res;
// }

// Efficient Solution 
// Time Complexity: theta(log(n))
// Space Complexity: theta(log(n))

// int power(int x, int n){
//   if(n==0){
//     return 1;
//   }
//   int temp = power(x, n/2);
//   temp = temp*temp;
//   if(n%2==0){
//     return temp;
//   }
//   else{
//     return temp*x;
//   }
// }

// Efficient Iterative Soltuion
// Every Number can be written as sum of power of 2 (Set bits in binary representation)
// Eg. 3^10 = 3^8 * 3^2
// T.C:  theta(log(n))
// S.C:  theta(log(n))

int power(int x, int n){
  int res = 1;
  while(n>0){
    if(n%2!=0){
      res = res * x;
    }
    x = x*x;
    n = n/2;
  }
  return res;
}



int main(){
  int x = 4, n = 5;
  cout << power(x, n);
}