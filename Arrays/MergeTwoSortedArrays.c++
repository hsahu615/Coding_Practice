#include<iostream>
#include<algorithm>
using namespace std;

// void func(int ar1[], int ar2[], int m, int n){
//     for(int i=0;i<m;i++){
//         if(ar1[i]>ar2[0]){
//             swap(ar2[0],ar1[i]);
//             sort(ar2, ar2+n);
//         }
//     }
//     for(int j=0;j<m;j++){
//         cout << ar1[j] << " ";
//     }
//     for(int j=0;j<n;j++){
//         cout << ar2[j] << " ";
//     }
// }

void func(int ar1[], int ar2[], int m, int n){
    int i = 0, j = 0, k = n-1;
    while(i<=k && j<n){
        if(ar1[i]<ar2[j]){
            i++;
        }
        else{
            swap(ar2[j++], ar1[k--]);
        }
    }
    sort(ar1, ar1+m);
    sort(ar2, ar2+n);

    for(int j=0;j<m;j++){
        cout << ar1[j] << " ";
    }
    for(int j=0;j<n;j++){
        cout << ar2[j] << " ";
    }
}

int main(){
    int ar1[] = {1, 5, 9, 10, 15, 20};
    int ar2[] = {2, 3, 8, 13};
    int m = sizeof(ar1)/sizeof(ar1[0]);
    int n = sizeof(ar2)/sizeof(ar2[0]);
    func(ar1, ar2, m, n);

}

