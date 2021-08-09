#include <iostream>
using namespace std;

int findMin(int arr[], int n)
{
  int low = 0, high = n - 1;
  while (low < high)
  {
    int mid = (low + high) / 2;

    if (mid > low && (arr[mid] < arr[mid - 1]))
    {
      return arr[mid];
    }
    if (mid < high && (arr[mid] > arr[mid + 1]))
    {
      return arr[mid + 1];
    }
    else if (arr[high] > arr[mid])
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  if (low == high)
  {
    return arr[low];
  }
}

int main()
{
  int arr[] = {8,9,10,3,4};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << findMin(arr, n);
}
