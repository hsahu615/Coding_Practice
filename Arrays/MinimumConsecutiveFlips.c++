#include<iostream>
#include<vector>

using namespace std;

void flips(int arr[], int n){
  vector<int> zeros;
  vector<int> ones;
  int count = 1;
  int i;
  for(i=1;i<n;i++){
    if(arr[i]!=arr[i-1]){
      if(arr[i]==1){
        zeros.push_back(count);
      }
      else{
        ones.push_back(count);
      }
    }
    if(arr[i]==0){
      count++;
    }
    else if(arr[i]==1){
      count++;
    }
  }
  if(arr[i-1]==1){
    zeros.push_back(count);
  }
  else if(arr[i-1]==0){
    ones.push_back(count);
  }
  cout << zeros.size() << endl;
  cout << zeros.size() << " ";


  
}

int main(){
  int arr[] = {1,1,0,0,0,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  flips(arr, n);
}