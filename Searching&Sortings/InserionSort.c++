/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertion(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
            
        }
        arr[j+1] =key;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int a[] = {3,4,5,6,7,1,2};
    int n = sizeof(a)/sizeof(a[0]);
    insertion(a, n);
    return 0;
}
