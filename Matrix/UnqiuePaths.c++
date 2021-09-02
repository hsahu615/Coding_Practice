#include <bits/stdc++.h>
using namespace std;


// Naive Approach
// int func(int i, int j, int m, int n)
// {
//   if (i == m - 1 && j == n - 1)
//   {
//     return 1;
//   }
//   if (i >= m || j >= n)
//   {
//     return 0;
//   }
//   return  func(i + 1, j, m, n) + func(i, j + 1, m, n);
// }
// int uniquePaths(int m, int n)
// {
//   return func(0, 0, m, n);
// }  


// int func(int i, int j, int m, int n, vector<vector<int>> &dp)
// {
//   if (i == m - 1 && j == n - 1)
//   {
//     return 1;
//   }
//   if (i >= m || j >= n)
//   {
//     return 0;
//   }
//   if (dp[i][j] != -1)
//     return dp[i][j];
//   return dp[i][j] = func(i + 1, j, m, n, dp) + func(i, j + 1, m, n, dp);
// }
// int uniquePaths(int m, int n)
// {
//   vector<vector<int>> dp(m, vector<int>(n, -1));
//   return func(0, 0, m, n, dp);
// }

// Example of 2*3 matrix
/*
1. You have to take 3 steps to travel
2. You will take (row-1)=2 rights and (column-1)=1 bottom directions
3. Total directions will be: (row-1)+(columns-1) = 3 directions
4. Number of combinations of direction to rights or bottom is are answer
m+n-2            (m+n-2)!
    C     =   ______________
     m-1      (m-1)!*(n-1)!
*/
int uniquePaths(int m, int n){
  int N = m+n-2;
  int r = m-1;
  int res = 1;
  for(int i=1;i<=r;i++){
    res = res*(N-r+i)/i;
  }
  return res;
}


int main(){
  int m = 3, n = 7;
  cout << uniquePaths(m, n);
}
