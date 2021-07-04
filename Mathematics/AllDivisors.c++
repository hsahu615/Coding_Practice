#include<iostream>
using namespace std;


// Naive Approach TC: O(n)
// void AllDivisors(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout << i << " ";
//         }
//     }    
// }

// Efficient Solution: O(sqrt(n))
// But Divisors are NOT SORTED
// void AllDivisors(int n){
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
//             cout << i << " ";
//             if(i!=(n/i)){
//             cout << n/i << " ";
//             }
//         }
//     }    
// }

// DIVISORS ARE SORTED

void AllDivisors(int n){
    int i;
    for(i=1;i*i<n;i++){
        if(n%i==0){
            cout << i << " ";
            }    
        }
    for(;i>=1;i--){
        if(n%i==0){
            cout << (n/i) << " ";
        }    
    }
}

int main(){
    int n= 100;
    AllDivisors(n);

}