#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> v;
int sub(vector<int> arr, int start, int end)
{
  if (end == arr.size())
  {
    return 0;
  }
  else if (start > end)
  {
    sub(arr, 0, end + 1);
  }
  else
  {
    vector<int> s;
    for (int i = start; i < end; i++)
    {
      s.push_back(arr[i]);
    }
    s.push_back(arr[end]);
    v.push_back(s);
    s.clear();
    sub(arr, start + 1, end);
  }
  return 0;
}

int main()
{
  vector<int> arr = {10, 5, -5};
  sub(arr, 0, 0);
  vector<int> res;
  int maxsofar = 0;
  for (int i = 0; i < v.size(); i++)
  {
    int maxcurr = 0;
    for (int j = 0; j < v[i].size(); j++)
    {
      maxcurr += v[i][j];
    }
    if (maxcurr > maxsofar)
    {
      maxsofar = maxcurr;
    }
  }
  cout << maxsofar;
}