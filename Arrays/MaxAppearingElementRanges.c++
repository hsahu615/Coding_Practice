#include<iostream>
#include<vector>

using namespace std;

// Naive Solution
// TC: O(n*m)
// SC: O(max(r))
// int maxcount(int l[], int r[], int n){
//   int max=0;
//   for(int i=0;i<n;i++){
//     if(max<r[i]){
//       max = r[i];
//     }
//   }
//   int count[max]={0};
//   for(int i=0;i<n;i++){
//     for(int j=l[i];j<=r[i];j++){
//       count[j]++;
//     }
//   }
//   int res=-1;
//   for(int i=0;i<max;i++){
//     if(res<count[i]){
//       res = i;
//     }
//   }
//   return res;
// }

int maxcount(int l[], int r[], int n){
  vector<int> a[1000];
  for(int i=0;i<n;i++){
    a[l[i]]++;
    a[r[i]+1]--;
  }
  int maxm =a[0], res=-1;
  for(int i=1;i<1000;i++){
    a[i]+=a[i-1];
    if(maxm<a[i]){
      maxm=a[i];
      res=i;
    }
  }
  return res;
}

int main(){
  int l[] = {1,2,5,15};
  int r[] = {5,8,7,18};
  int n = sizeof(l)/sizeof(l[0]);
  cout << maxcount(l, r, n);

}