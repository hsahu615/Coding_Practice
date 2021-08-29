

#include <iostream>

using namespace std;

void func(int arr[3][3], int m, int n){
    if(m==1){
        for(int i=0;i<n;i++){
            cout << arr[0][i] << " ";
        }
    }
    else if(n==1){
        for(int i=0;i<m;i++){
            cout << arr[i][0] << " ";
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout << arr[0][i] << " ";
        }
        for(int i=1;i<m;i++){
            cout << arr[i][n-1] << " ";
        }
        for(int i=n-2;i>=0;i--){
            cout << arr[m-1][i] << " ";
        }
        for(int i=n-2;i>0;i--){
            cout << arr[i][0] << " ";
        }
    }
}

int main()
{
    int arr[][3] = {1,2,3,4,5,6,7,8,9};
    int m = 3, n=3;
    func(arr, m, n);
    
    

    return 0;
}
