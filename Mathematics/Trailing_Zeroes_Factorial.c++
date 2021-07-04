#include<iostream>
using namespace std;

// Naive Approach

// long long int fact(int n){
//     int res = 1;
//     if(n==0 || n==1){
//         return 1;
//     }
//     while(n>0){
//         res = n*res;
//         n--;
//     }
//     int count = 0;
//     while(res%10==0){
//         count++;
//         res = res/10;
//     }
//     return count;
// }

// Efficient Approach


int main(){
    int n = 100;
    // long long int ans = fact(n);
    int i=5;
    int count =0;
    while(i<=n){
        int j = i;
        while(j%5==0){
            count++;
            j=j/5;
        }
        i+=5;
    }
    cout << count;

    
    

}