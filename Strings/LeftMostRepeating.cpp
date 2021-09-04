
#include <bits/stdc++.h>

using namespace std;

int func(string &s){
    int res = INT_MAX;
    int count[256];
    fill(count, count+256, -1);
    for(int i=0;i<s.length();i++){
        int fi = count[s[i]];
        if(fi==-1){
            count[s[i]] = i;
        }
        else{
            res = min(res, fi);
        }
    }
    return (res==INT_MAX)? -1 : res;
}

int main()
{
    string s = "abccbd";
    cout << func(s);

    return 0;
}
