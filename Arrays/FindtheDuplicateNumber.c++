#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,3,1,2,5};
    sort(nums.begin(), nums.end());
    int res = -1;
    for(int i = 1; i<nums.size(); i++){
        if(nums[i]==nums[i-1]){
            res = nums[i];
            break;
        }
    }
    cout<< res;
    
}