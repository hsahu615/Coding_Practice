/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void bubble(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int a[] = {3,4,5,6,7,1,2};
    int n = sizeof(a)/sizeof(a[0]);
    bubble(a, n);
    return 0;
}
