#include <bits/stdc++.h>
using namespace std;

int func(string &s){
    int res = INT_MAX;
    int count[256];
    fill(count, count+256, -1);
    for(int i=0;i<s.length(); i++){
        if(count[s[i]]==-1){
            count[s[i]]=i;
        }
        else{
            count[s[i]]=-2;
        }
    }
    
    for(int i=0;i<=256;i++){
        if(count[i]>=0){
          res = min(res, count[i]);  
        }
    }
    return (res==INT_MAX)?-1:res;
}

int main()
{
    string s = "abbcbda";
    cout << func(s);

    return 0;
}
