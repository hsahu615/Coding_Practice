

#include <iostream>

using namespace std;

void func(int arr[3][3], int m, int n){
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout << arr[i][j]<< " ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout << arr[i][j] << " ";
            }
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
