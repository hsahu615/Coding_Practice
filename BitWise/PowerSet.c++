#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

// IDEA: first we will create a bit set till 2^n, than we will print corresponding character to the set bit.
// Time Complexity: O(2^n * n)
void PowerSet(string a){
  int n = a.length();
  int counter = pow(2, n);
  for(int count = 0;count<counter;count++){
    for(int i=0;i<n;i++){
      if((count & (1<<i))!=0){
        cout << a[i]; 
      }
    }
    cout << endl;

  }
}

int main(){
  string a = "Himanshu";
  PowerSet(a);
}