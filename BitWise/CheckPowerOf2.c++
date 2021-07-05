#include<iostream>
using namespace std;

// Naive Approach Time Complexity: O(log(n))
// bool check(int n){
//   if(n==0 or n==1 or n%2==1){ // Corner cases
//     return false;
//   }
//   while(n!=1){    // After dividing every time with 2 at end n=2, n/2 will be 1 so check till n!=1 
//     if(n%2==1){
//       return false;
//     }
//     n = n/2;
//   }
//   return true;
// }


// Power of 2 will have only one set bit
// Time Complexity: O(count of set bit())
bool check(int n){
  int res=0;
  while(n>0){
    res++;
    if(res>1)
      return false;
    n = n & (n-1);
  }
  return true;
}


int main(){
  int n = 256;
  cout << check(n);
}