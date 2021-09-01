#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// Idea
/*
1. Traverse from last and find a number which is lesser than its succesor and mark the index.
2. Again traverse from the last and find a number which is greater than marked index. 
3. Swap both the numbers.
4. Now reverse the matrix from marked index to the last index.
*/



void nextPermutation(vector<int> &nums)
{
  int n = nums.size();
  int index1;
  int i, j;
  for (i = n - 2; i >= 0; i--)
  {
    if (nums[i] < nums[i + 1])
    {
      break;
    }
  }
  if (i < 0)
  {
    reverse(nums.begin(), nums.end());
  }
  else
  {
    for (j = n - 1; j >= 0; j--)
    {
      if (nums[j] > nums[i])
      {
        break;
      }
    }
    swap(nums[i], nums[j]);
    reverse(nums.begin() + i + 1, nums.end());
  }
}

int main()
{
  vector<int> arr = {1, 2, 3};
  nextPermutation(arr);
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}