#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
  int num1 = 0, num2 = 1, count1 = 0, count2 = 0;
  vector<int> res;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == num1)
      count1++;
    else if (nums[i] == num2)
    {
      count2++;
    }
    else if (count1 == 0)
    {
      num1 = nums[i];
      count1 = 1;
    }
    else if (count2 == 0)
    {
      num2 = nums[i];
      count2 = 1;
    }
    else
    {
      count1--;
      count2--;
    }
  }
  count1 = 0, count2 = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == num1)
    {
      count1++;
      if (count1 > nums.size() / 3)
      {
        res.push_back(nums[i]);
        break;
      }
    }
  }
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == num2)
    {
      count2++;
      if (count2 > nums.size() / 3)
      {
        res.push_back(nums[i]);
        break;
      }
    }
  }
  return res;
}

int main(){
  vector<int> arr = {1,1,1,2,2,3,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<int> res = majorityElement(arr);
  for(int i=0;i<res.size();i++){
    cout << res[i] << " ";
  }
}