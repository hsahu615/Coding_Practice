#include<iostream>
#include<vector>
using namespace std;

void spiral(vector<vector<int>> matrix,int r, int c){
  int k = 0, l=0;
  int last_row=r, last_col=c;

  while(k<last_row && l<last_col){
    for(int i=l; i < last_col; i++){
      cout << matrix[k][i] << " ";
    }
    k++;
    for(int i=k;i<last_row;i++){
      cout << matrix[i][last_col-1] << " ";    
    }
    last_col--;
    if(k<last_row){
      for(int i = (last_col-1) ; i>=l ; i--){
        cout << matrix[last_row-1][i] << " ";
      }
      last_row--;
    }
    if(l<last_col-1){
      for(int i = (last_row-1); i>=k;i--){
        cout << matrix[i][l] << " ";
      }
      l++;
    }
  }
}
int main(){
  int r = 4, c = 4; 
  vector<vector<int>> matrix = {{1, 2, 3, 4},
                                {5, 6, 7, 8},
                                {9, 10, 11, 12},
                                {13, 14, 15,16}};  
  spiral(matrix, r, c);

}