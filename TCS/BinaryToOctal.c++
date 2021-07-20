#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dec;

int octal(int dec){
    if(dec==0){
        return 0;
    }
    octal(dec/8);
    cout << dec%8;
}

void decimal(int n){
    int dec=0;
    int i=0;
    while(n>0){
        if(n%10){
            dec = dec + pow(2,i);
            
        }
        i++;
        n/=10;
    }
    octal(dec);
    
}


int main(){
    int n;
    cin >> n;
    decimal(n);
}