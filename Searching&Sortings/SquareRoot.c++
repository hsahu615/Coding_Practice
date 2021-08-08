#include<iostream>
using namespace std;

// int sqrt(int n){
//   int i=1;
//   while(i*i<=n){
//     i++;
//   }
//   return i-1;
// }
int sqrt(int low, int high, int n){
  int res = -1;
  while(low<=high){
    int mid = (low+high)/2;
    int mq = mid*mid;
    if(mq==n){
      return mid;
    }
    else if(mq>n){
      high = mid-1;
    }
    else{
      res = mid;
      low = mid+1;
    }
  }
  return res;
}

int main(){
  int n = 27;
  // cout << sqrt(n);
  cout <<   sqrt(0, n, n);
  
}