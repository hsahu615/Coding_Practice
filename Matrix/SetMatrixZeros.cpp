
/*Examples:

Input 1:
    [   [1, 0, 1],
        [1, 1, 1], 
        [1, 1, 1]   ]


Output 1:
    [   [0, 0, 0],
        [1, 0, 1],
        [1, 0, 1]   ]



Input 2:
    [   [1, 0, 1],
        [1, 1, 1],
        [1, 0, 1]   ]



Output 2:
    [   [0, 0, 0],
        [1, 0, 1],
        [0, 0, 0] ]*/

#include <iostream>

using namespace std;

void func(int matrix[][3], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                matrix[i][j]=-1;
                for(int k=0;k<m;k++){
                    if(matrix[k][j]==0){
                        continue;
                    }
                    matrix[k][j]=-1;
                    
                }
                for(int k=0;k<n;k++){
                    if(matrix[i][k]==0){
                        continue;
                    }
                    matrix[i][k]=-1;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
        cout << endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << matrix[i][j] << " "; 
        }
        cout << endl;
    }
}

int main()
{
    int matrix[][3] = {{1,0,1},{1,1,1},{1,0,1}};
    int m = sizeof(matrix)/sizeof(matrix[0]);
    int n = sizeof(matrix[0])/sizeof(matrix[0][0]);
    func(matrix, m, n);
    return 0;
}


