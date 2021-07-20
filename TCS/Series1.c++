#include<iostream>
using namespace std;

int fib(int n){
    if(n==1 or n==2){
        return 1;
    }
    int a=1, b=1;
    for(int i=2;i<n;i++){
        int temp = a;
        a=b;
        b = temp+ b;  
    }
    return b;
}
int prime(int n){
    int res=0, count=0;
    for(int i=2;i<=100;i++){
        bool flag = true;
        if(count==n){
            break;
        }
        for(int j=2;j*j<n;j++){
            if(j%i==0){
                flag = false;
            }
        }
        if(flag == true){
            res = i;
        }
    }
    return res;
}

int main(){
    // 1,2,1,3,2,5,3,7,5,11,8,13,13,17
    int n;
    cin >> n;
    if(n%2!=0){
        cout << fib((n/2)+1);
    }
    else{
        cout << prime(n/2);
    }
}
