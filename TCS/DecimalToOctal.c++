#include<iostream>
using namespace std;

int converter(int n){
    if(n==0){
        return 0;
    }
    converter(n/8);
    cout << n%8;
}


int main(){
    int n;
    cin >> n;
    converter(n);
}