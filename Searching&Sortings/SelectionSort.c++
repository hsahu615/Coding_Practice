/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void selection(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j], arr[i]);
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
    selection(a, n);

    return 0;
}
