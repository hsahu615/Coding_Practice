
#include <bits/stdc++.h>

using namespace std;

// bool func(string s1, string s2){
//     int i = 0, j = 0;
//     while(j<s2.length() && i<s1.length()){
//         if(s1[i]==s2[j]){
//             i++;j++;
//         }
//         else{
//             i++;
//         }
//     }
//     if(j==s2.length()){
//         return true;
//     }
//     return false;
// }

bool func(string s1, string s2,int  m,int n){
    if(n==0){
        return true;
    }
    if(m==0){
        return false;
    }
    if(s1[m]==s2[n]){
        return func(s1, s2, m-1, n-1);
    }
    if(s1[m]!=s2[n]){
        return func(s1, s2, m, n-1);
    }
}


int main()
{
    string s1 = "GEEKSFORGEEKS";
    string s2 = "GRGES";
    int m = s1.length()-1;
    int n = s2.length()-1;
    cout << func(s1, s2, m, n);

    return 0;
}
