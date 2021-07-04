#include<iostream>
#include<vector>
using namespace std;

// IDEA
// 1. Make a array of size n and mark all values as true.
// 2. As we know, divisors of a number appear in pair so start a loop till sqrt(n).
// 3. If i is i is marked as true run a loop for multiples of i and mark them false.
// 4. Run a final loop to traverse isPrime array and print every index which has true as value.

// Simple Implementation
// void primeFactors(int n){
//   vector<int> isPrime(n+1, true);
//   for(int i =2;i*i<=n;i++){
//     if(isPrime[i]){
//       for(int j = 2*i; j<=n; j=j+i){
//         isPrime[j] = false;
//       }
//     }
//   }
//   for(int i=2;i<=n;i++){
//     if(isPrime[i]){
//       cout << i << " ";
//     }
//   }
// }

// Optimized Implementation

void primeFactors(int n){
  vector<int> isPrime(n+1, true);

  for(int i=2;i<=n;i++){
    if(isPrime[i]){
      cout << i << " ";
      for(int j=i*i;j<=n;j = j+i){
        isPrime[j] = false;
      }
    }
  }
}

int main(){
  int n = 9;
  primeFactors(n);
}