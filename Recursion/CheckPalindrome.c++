#include<iostream>
#include<string>
using namespace std;


bool palindrome(string s, int a, int n){
  if(a==(n/2)+1){
    return true;
  }
  if(a>=n){
    return true;
  }
  return (s[a]==s[n] && palindrome(s, a+1, n-1));
}

int main(){
  string s = "aabbaa";
  int n = s.length()-1;
  int a = 0;
  bool b =  palindrome(s, a, n);
  cout << b;
  // cout << s[0];

}