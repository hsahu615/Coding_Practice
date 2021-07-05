#include<iostream>
using namespace std;


// IDEA:- 4^5^5 = 4
// Time Complexity: O(n), Space Complexity: O(1)         // BEST APPROACH
int check(int *a, int n){
  int res = 0;
  for(int i=0;i<n;i++){
    res = res^a[i];
  }
  return res; 
}

int main(){
  int a[] = {4,2,3,6,2,3,3,2,2,6,4};
  int n = sizeof(a)/sizeof(a[0]);
  cout << check(a, n);
}



