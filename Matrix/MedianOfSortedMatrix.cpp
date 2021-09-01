/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int countless(int arr[], int mid){
    int n = 3;
    int l = 0, h = n-1;
    while(l<=h){
        int m = (l+h)>>1;
        if(arr[m]<=mid){
            l = m+1;
        }
        else{
            h = m-1;
        }
    }
    return l;
}


int main()
{
    int arr[3][3] =  {2,  3,  3,
        1,  5,  6,
        6 , 6 , 7};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr[0])/sizeof(arr[0][0]);
    int low = 1, high = 1e9;
    while(low<=high){
        int mid = (low+high)>>1;
        int count = 0;
        for(int i=0;i<n;i++){
            count+= countless(arr[i], mid);
        }
        if(count<=(n*m)/2){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout << low;

    return 0;
}
