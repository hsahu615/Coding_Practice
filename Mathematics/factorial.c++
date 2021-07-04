#include<iostream>
using namespace std;

class factorial{
    public:
    int fact(int n){
        if(n==0 || n==1){
            return 1;
        }
        return n * fact(n-1);
    }
    int factIt(int n){
        if(n==0 || n==1){
            return 1;
        }
        int res = 1;
        while(n>0){
            res = res*n;
            n--;
        }
        return res;
    }
};

int main(){
    int n = 10;
    factorial a;
    int res = a.fact(n);
    cout << res << "\n";
    res = a.factIt(n);
    cout <<res;
    }
