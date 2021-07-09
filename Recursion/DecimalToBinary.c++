#include<iostream>
using namespace std;

class binary{
  public: void d2b(int n){
    if(n==0){
      return;
    }
    d2b(n/2);
    cout << n%2;
  }
};

int main(){
  int n;
  cout << "Enter number you want to convert to Binary: ";
  cin >> n;
  binary b;
  b.d2b(n);
}