#include<iostream>
using namespace std;


// Naive Approach: O(n^2)
int stocknaive(int a[],int start,  int n){
  if(n<=start){
    return 0;
  }
  int curr_profit = 0;
  for(int i=start;i<n;i++){
    for(int j=i+1;i<=n;i++){
      if(a[j]>a[i]){
        int profit = a[j]-a[i] + stocknaive(a, start, i-1) + stocknaive(a, j+1, n);
        curr_profit  = max(curr_profit, profit);
      }
    }
  }
  return curr_profit;
}

// Efficient Approach: O(n)
// int stock(int a[], int n){
//   int profit = 0;
//   if(n==1 || n==0){
//     return 0;
//   }
//   for(int i=1;i<n;i++){
//     if(a[i]>a[i-1]){
//       profit+=a[i]-a[i-1];
//     }
//   }
//   return profit;
// }

int main(){
  int a[] = {1,5,3,8,12};
  int n = sizeof(a)/sizeof(a[0]);

  cout << stocknaive(a,0, n);
  cout << stock(a, n);

}