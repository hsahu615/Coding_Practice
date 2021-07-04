#include<iostream>
#include<vector>
using namespace std;



int searchMat(vector<vector<int>> arr, int n, int x){
  int i=0;
  int j =n-1;
  int res=-1;
  while(i<n-1){
    while(j>=0){
      if(arr[i][j] > x){
        j--;
      }
      else if(arr[i][j]==x){
        cout << i << " " << j;
        break;
      }    
      else{
        i++;
      };
    }
  }   
  return res;
}

int main(){
  vector<vector<int>> mat= {{10, 20, 30, 40},
                            {15, 25, 35, 45},
                            {27, 29, 37, 48},
                            {32, 33, 39, 50}};
  int x = 39;
  int n =4;
  searchMat(mat, n, x);

}