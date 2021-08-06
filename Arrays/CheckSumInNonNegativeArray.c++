#include <iostream>
using namespace std;

bool check(int arr[], int n, int sum)
{
  bool flag = false;
  int s = 0, e;
  int currSum = arr[0];
  for (int e = 1; e < n; e++)
  {
    while (currSum > sum && s < e - 1) // {1, 4, 20, 3, 10, 5};
    // 15
    {
      currSum = currSum - arr[s];
      s++;
    }
    if (currSum == sum)
    {
      return true;
    }

    if (e < n)
    {
      currSum += arr[e];
    }
  }
  return currSum == sum;
}

int main()
{
  int arr[] = {1, 4, 20, 3, 10, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int sum = 33;
  cout << check(arr, n, sum);
}