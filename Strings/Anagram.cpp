
#include <bits/stdc++.h>

using namespace std;

bool areSame(int CT[], int CP[]){
    for(int i = 0;i<256;i++){
        if(CT[i]!=CP[i]){
            return false;
        }
    }
    return true;
}

bool func(string &txt, string &pat){
    int m = txt.length();
    int n = pat.length();
    int CP[256] = {0}, CT[256] = {0};
    for(int i = 0;i<n;i++){
        CP[pat[i]]++;
        CT[txt[i]]++;
    }
    for(int i = n-1;i<m;i++){
        if(areSame(CT, CP)){
            return true;
        }
        CT[txt[i-n]]--;
        CT[txt[i]]++;
    }
    return -1;
}



int main()
{
    string txt = "geeksforgeeks";
    string pat = "geeks";
    cout << func(txt, pat);
    
}
