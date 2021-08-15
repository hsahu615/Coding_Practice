#include<iostream>
#include<algorithm>
using namespace std;

struct interval{
  int x, y;
};
bool comp(interval a, interval b){
  return (a.x < b.x);
}

void func(interval arr[], int n){
  int res = 0;
  for(int i=1;i<n;i++){
    if(arr[res].y >= arr[i].x){
      int start = min(arr[res].x, arr[i].x);
      int end = max(arr[res].y, arr[i].y);
      arr[res].x = start;
      arr[res].y = end;
    }
    else{
      res++; arr[res] = arr[i];
    }
  }
  for(int i=0;i<=res;i++){
    cout << arr[i].x << " " << arr[i].y << endl;
  }
}
int main(){
  interval arr[] = {{1,3},{2,4},{5,7},{6,8}};
  int n = sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr+n, comp);
  func(arr, n);
}