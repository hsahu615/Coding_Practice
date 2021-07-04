#include<iostream>
using namespace std;

// Naive Approach

// void GCD(int a, int b){
//     int i=min(a,b);
//     while(i>0){
//         if((a%i==0)&&(b%i==0))
//         {    
//             break;
//         }
//         i--;
//     }
//     cout << i;
// }

// Euclidean Algorithm

// void GCD(int a, int b){
//     while(a!=b){
//         if(a<b){
//             b = b-a;
//         }
//         else{
//             a = a-b;
//         }
//     }
//     cout << a;
// }


// Euclidean optimized algorithm 
int GCD(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b, a%b);
    }
}


int main(){
    int a=10, b=15;
    cout <<GCD(a, b);
}