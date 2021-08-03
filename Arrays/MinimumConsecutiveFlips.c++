#include <iostream>
#include <vector>

using namespace std;
// Naive Approach 
// Two Traversal
// void flips(int arr[], int n)
// {
//   int zeros = 0;
//   int ones = 0;
//   int i;
//   for (i = 0; i < n - 1; i++)
//   {
//     if (arr[i] != arr[i + 1])
//     {
//       (arr[i]==0)?zeros++:ones++;
//     }
//   }
//   (arr[i]==0)?zeros++:ones++;
//   if (ones < zeros)
//   {
//     for (int i = 0; i < n; i++)
//     {
//       if (arr[i] != arr[i - 1] && arr[i] == 1)
//       {
//         cout << "From " << i << " to ";
//       }
//       if (arr[i] != arr[i - 1] && arr[i - 1] == 1)
//       {
//         cout << i - 1 << endl;
//       }
//     }
//   }
//   else
//   {
//     for (int i = 0; i < n; i++)
//     {
//       if (arr[i] != arr[i - 1] && arr[i] == 0)
//       {
//         cout << "From " << i << " to ";
//       }
//       if (arr[i] != arr[i - 1] && arr[i - 1] == 0)
//       {
//         cout << i - 1 << endl;
//       }
//     }
//   }
// }


// Efficient Approach
// Idea behind that is: Minimum number of groups can be find as, If a array start with same group element and ends with same group element than that element has more groups
// eg: 1,0,0,1,1,0,1 here 1 has more groups
// eg: 1,0,0,1,0 here both 1 and 0 have same no. of groups

void flips(int arr[], int n){
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[i-1]){
      if(arr[i]!=arr[0]){
        cout << "From " << i << " to ";
      }
      else{
        cout << i-1 << endl;
      }
    }
  }
  if(arr[n-1]!=arr[0]){
    cout << n-1 << endl;
  }
}


int main()
{
  int arr[] = {1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  flips(arr, n);
}