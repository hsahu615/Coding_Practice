#include<iostream>

using namespace std;


void toBit(int n){
    for(int i=0 ;i<=n;i++){
        if(n%2!=0){
            cout << 1 << " ";
        }
        else{
            cout << 0 << " ";
        }
        n = n/2;
    }
}


int main(){

    int n = 6;
    toBit(n);


}
