#include<iostream>
using namespace std;


// Naive SOLUTION
// void LCM(int a, int b){
//     int res = max(a,b);
//     for(int i=1; ;i++){
//         if((res%a==0)&&(res%b==0)){
//             cout << res;
//             break;
//         }
//         res++;
//     }
// }
// Time Complexity: O(a*b - max(a, b))

// EFFICIENT SOLUTION
// Based on formula (a*b) = HCF(a, b) * LCM(a, b)

int HCF(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return HCF(b, a%b);
    }
}

void LCM(int a, int b, int hcf){
    cout << ((a*b)/hcf);
}

// Time Complexity: log(min(a, b))

int main(){
    int a = 5, b = 12;
    int ans = HCF( a,  b);
    LCM(a, b, ans);
}