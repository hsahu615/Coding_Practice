#include<iostream>
using namespace std;

int main(){

  int a = 5, b = 3;
  cout << (a & b);
  cout << endl;
  cout << (a | b);
  cout << endl;
  cout << (a << b); // a * 2^b
  cout << endl;
  cout << (a >> b); // a * 2^(-b)
  cout << endl;
  cout <<~a;
  cout << endl;
  cout << (a ^ b);
  
}