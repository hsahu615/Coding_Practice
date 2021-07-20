#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int size = 0;
    int temp = n;
    while(n>0){
        size++;
        n/=10;
    }
    n=temp;
    int res = 0;
    while(n>0){
        res = res + pow(n%10, size);
        n/=10;
    }
    if(res == temp){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}