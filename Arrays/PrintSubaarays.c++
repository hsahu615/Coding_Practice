#include<iostream>
#include<vector>

using namespace std;

int subarray(vector<int> arr, int start, int end){
  if(end == arr.size()){
    return 0;
  }
  else if(start>end){
    subarray(arr, 0, end+1);
  }
  else{
    for(int i=start;i<end;i++){
      cout << arr[i] << ' ';
    }
    cout << arr[end] << endl;
    subarray(arr, start+1, end);
  }
}

int main(){
  vector<int> arr = {1,2,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  subarray(arr, 0, 0);
}