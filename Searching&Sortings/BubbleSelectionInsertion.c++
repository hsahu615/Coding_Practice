/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int a[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void selectionSort(int a[], int n){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i;j<n;j++){
            if(a[min]>a[j]){
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
} 
void insertionSort(int a[], int n){
    for(int i=1;i<n;i++){
        int key = a[i];
        int j = i-1;
        while(j>=0 && key<a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}


int main()
{
    int a[] = {5,7,8,2,4,6,6};
    int n = sizeof(a)/sizeof(a[0]);
    bubbleSort(a, n);
    selectionSort(a, n);
    insertionSort(a, n);
}
