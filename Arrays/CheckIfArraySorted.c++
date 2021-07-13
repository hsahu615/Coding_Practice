#include<iostream>
using namespace std;

class check{
  public:
  bool a(int a[], int n){
    for(int i=1;i<n;i++){
      if(a[i]<a[i-1]){
        return false;
      }
    }
    return true;
  }
};
int main(){
  int ar[] = {1,2,4,3,5s,6};
  int n = sizeof(ar)/sizeof(ar[0]);
  check a;
  cout << a.a(ar, n);
}