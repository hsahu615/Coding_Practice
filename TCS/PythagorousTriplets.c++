#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a =1, b=1,c=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            for(int k=j;k<=n;k++){
                int a = pow(i,2) + pow(j,2);
                if(a==pow(k,2)){
                    cout << i << " " << j << " " << k;
                    cout << endl;
                }
            }
        }
    }
}