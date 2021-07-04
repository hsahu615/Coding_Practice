#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE


// int tell(int a[], int n){
//     int count;
//     int i, j, result = -1;
//     for(i =0;i<n;i++){
//         int count = 0;
//         for(j=0;j<n;j++){
//             if(a[i]==a[j]){
//                 count++;
//             }
//         }
//         if(count>(n/2)){
//             result = a[i];
//             break;
//         }
//     }
//     if(count>(n/2)){
//         return result;
//     }
//     else{
//         return result;
//     }

// }

int tell(int a[], int n){
    int count[n];
    int result = -1;
    for(int i=0;i<n;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int j=0;j<n;j++){
        if(count[j]>(n/2)){
            return result=j;
        }
    }
    return result;

}




int main(){

    int a[] = {2,2,2,3,3,3,3};
    int n = sizeof(a)/sizeof(a[0]);
    cout <<    tell(a, n);

}