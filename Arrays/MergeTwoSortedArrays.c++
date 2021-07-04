#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int ar1[] = {1, 5, 9, 10, 15, 20};
    int ar2[] = {2, 3, 8, 13};
    int m = sizeof(ar1)/sizeof(ar1[0]);
    int n = sizeof(ar2)/sizeof(ar2[0]);
    for(int i=0;i<m;i++){
        if(ar1[i]>ar2[0]){
            swap(ar2[0],ar1[i]);
            sort(ar2, ar2+n);
        }
    }
    for(int j=0;j<m;j++){
        cout << ar1[j] << " ";
    }
    for(int j=0;j<n;j++){
        cout << ar2[j] << " ";
    }

}

