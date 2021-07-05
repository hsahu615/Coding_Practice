#include<iostream>
using namespace std;

// Time Complexity: O(Total Bits in n)
// int count(int n){
//   int res = 0;
//   while(n>0){
//     res = res + (n&1);     // By 101 & 001 answer will be 1 for odd and 0 for even
//     n = n/2;
//   }
//   return res;
// }

// Brian Kerningam's Algorithm
// IDEA:- When you susbtract 1 from a number the last set bit becomes 0 and all 0's after last bit become 1
// Eg: 40(101000) - 1 = 100111(39) and product of n&(n-1) is 100000
int count(int n){
  int res = 0;
  while(n>0){
    n = n&(n-1);
    res++;
  }
  return res; // in just 3 iteration we are getting are answer 
}


int main(){

  int n = 7;
  cout << count(n);


}