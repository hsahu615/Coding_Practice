#include<iostream>
using namespace std;

bool pairSearch(int arr[], int L, int N){
  bool flag = false;
  for (int i = 0; i < L; i++)
  {
    for(int j = 0;j<L;j++){
      if((arr[i]-arr[j])==N){
        flag = true;
        break;
      }
    }
  }
  return flag;
  
}

int main(){
  int arr[] = {5, 20, 3, 2, 5, 80};
  int L = 6, N = 78;
  cout << pairSearch(arr, L, N);
}