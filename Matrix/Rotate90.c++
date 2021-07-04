#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> rotate90(vector<vector<int>> a, int n){
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            int temp = a[i][j];
            a[i][j] = a[n-j-1][i];
            a[n-j-1][i] = a[n-i-1][n-j-1];
            a[n-i-1][n-j-1] = a[j][n-i-1];
            a[i][n-1-i] = temp;

        }
    }
    return a;
}

int main(){
    vector<vector<int>> mat= {{1,2,3},
                {4,5,6},
                {7,8,9}};
                            
    int n =3;
    mat = rotate90(mat, n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }


}