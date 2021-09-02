
#include <iostream>

using namespace std;


int mergefunc(int arr[], int l, int mid, int h){
    int n1=mid-l+1; int n2 = h-mid, count = 0;
    int a[n1], b[n2];
    for(int i=0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[mid+1+i];
    }
    int i= 0, j=0, k=l;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k] = a[i];i++;
        }
        else{
            arr[k] = b[j];j++;
            count=count + (n1-i);
        }
        k++;
    }
    while(i<n1){
       arr[k] = a[i];
       i++;k++;
    }
    while(j<n2){
       arr[k] = b[j];
       j++;k++;
    }
    return count;
    
}

int merge(int arr[], int l, int h){
    int count=0;
    if(l<h){
        int mid = l + (h-l)/2;
        count+=merge(arr, l, mid);
        count+=merge(arr, mid+1, h);
        count+=mergefunc(arr, l, mid, h);
    }
    return count;
}


int main()
{
    int arr[] = {2,4,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << merge(arr, 0, n-1);

    return 0;
}
