#include<iostream>
using namespace std;

class PrimeFactor{
  public:

  // Naive Approach 
  // Time Complexity: O(n*sqrt(n))
  bool check(int n){
    if(n ==1){
      return true;
    }
    for(int i=2;i*i<=n;i++){
      if(n%i==0){
        return false;
      }
    }
    return true;
  }

  void factor(int N){
    for(int i=2;i<N;i++){
      if(check(i)){
        cout << i <<" ";
      }
    }

  }
};

int main(){
  int n = 10;
  PrimeFactor a;
  a.factor(n);
}