#include<math.h>
#include<iostream>
using namespace std;


// Iterative

// int count(int i){
//     int a =0;
//     while(i!=0){
//         i = i/10;
//         a++;
//     }
//     return a;
// }


// Recursive

// int count(int i){
//     if(i==0){
//         return 0;
//     }
//     return 1 + count(i/10);
// }

// Logarithmic

int count(int i){
    return floor(log10(i)+1);
}

int main(){
    int i;
    cin >> i;
    cout << count(i);
}