#include<iostream>
using namespace std;

class mid{
  public:
  int midSearch(int a, int b, int c){
    if((a<b && b<c)||(c<b && b<a)){
      return b;
    }
    else if((a<c && c<b) || (b<c && c<a)){
      return c;
    }
    else{
      return a;
    }
  }
};

int main(){
  mid a;
  cout << a.midSearch(150,300,1102);
}
