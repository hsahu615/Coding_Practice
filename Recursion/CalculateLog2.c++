#include<iostream>
using namespace std;

int log(int n, int b){
  if(n<b){
    return 0;
  }
  return 1 + log(n/b, b);
}

int main(){
  int n, b;
  cout << "Enter the number: ";
  cin >> n;
  cout << "Enter the base: ";
  cin >> b;
  cout << log(n, b);
}