
#include <bits/stdc++.h>

using namespace std;


int find(string str, int n){
    for(int i = n-1;i>0;i--){
        bool flag = true;
        for(int j = 0;j<i;j++){
            if(str[i]!=str[n-i+j]){
                flag = false;
               
            }
        }
        if(flag ==true){
            return i;
        }
    }
    return 0;
}  

void func(string str, int lps[]){
    for(int i = 0;i<str.length();i++){
        lps[i] = find(str, i+1);
    }
}

int main()
{
    string str = "aaaa";
    int lps[4];
    func(str, lps);
    for(int i:lps){
        cout << i << " ";
    }
    return 0;
}
