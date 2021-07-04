#include<iostream>
using namespace std;

void palindrome(int n){
    int a = n;
    int rev=0;
    while(a>0){
        rev = rev*10 + (a%10);
        a = a/10;
    }
    cout << (rev==n);
}

int main(){
    int n=1221;
    palindrome(n);
    
}