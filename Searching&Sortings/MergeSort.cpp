/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void merge(int arr[], int low, int mid, int high){
    int a[mid-low+1], b[high-mid];
    int n1 = mid-low+1, n2 = high-mid;
    for(int i=0;i<mid-low+1;i++){
        a[i] = arr[i];
    }
    for(int i=0;i<high-mid;i++){
        b[i] = arr[high-mid+1+i];
    }
    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k] = a[i];k++;i++;
        }
        else if(b[j]<a[i]){
            arr[k] = b[j];k++;j++;
        }
    }
    while(i<n1){
        arr[k] = a[i];k++;i++;
    }
    while(j<n2){
        arr[k] = b[j];k++;j++;
    }

    
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int mid = l + (r-l)/2;
        mergeSort(arr, 0, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int a[] = {5,4,7,8,2,4,6};
    int mid = 4;
    int l =0;
    int high = 6;
    mergeSort(a, l, high);
    for(int i=0;i<=high;i++){
        cout << a[i] << " ";
    }

    return 0;
}
