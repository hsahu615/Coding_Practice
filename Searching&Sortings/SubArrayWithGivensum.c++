#include <iostream>
#include <vector>

using namespace std;

vector<int> subarraySum(int arr[], int n, int s)
{
  vector<int> res;
  int low = 0, high = 0;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (sum < s)
    {
      sum += arr[i];
    }
    while (sum > s)
    {
      sum -= arr[low];
      low++;
    }
    if (sum == s)
    {
      res.push_back(low + 1);
      res.push_back(i + 1);
      break;
    }
  }
  if (res.size() == 0)
  {
    res.push_back(-1);
    return res;
  }
  return res;
}

int main()
{
  int arr[] = {1,2,3,7,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int s = 12;
  vector<int> res;
  res = subarraySum(arr, n, s);
  for(int i=0;i<res.size();i++){
    cout << res[i] << " ";
  }
}