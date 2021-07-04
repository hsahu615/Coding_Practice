#include<iostream>
#include<vector>
using namespace std;

class abc{
  public:
  vector<int> value(int arr[], int n){
    vector<int> nums;
    for(int i=0;i<n;i++){
      if(arr[i]==i+1){
        nums.push_back(arr[i]);
      }
    }
    return nums;
  }
};

int main(){
  abc a;
  int arr[] = {2,2,3,6,3};
  vector<int> nums = a.value(arr, 5);
  for(int i =0;i<nums.size();i++){
    cout << nums[i] <<  " ";
  }
}