

#include <bits/stdc++.h>

using namespace std;

// NAIVE METHOD
// T.C: O((m-n+1)*n)
// void func(string &text, string &pat){
//     int m = text.length();
//     int n = pat.length();
//     for(int i=0;i<=m-n;i++){
//         int j;
//         for(j=0;j<n;j++){
//             if(text[i+j]!=pat[j]){
//                 break;
//             }
//         }
//         if(j==n){
//             cout << i <<" ";
//         }
//     }
// }

// Improved Naive Approach
// T.C: O((m-n+1)*n)
void func(string &text, string &pat){
    int m = text.length();
    int n = pat.length();
    for(int i=0;i<=m-n;i++){
        int j;
        for(j=0;j<n;j++){
            if(text[i+j]!=pat[j]){
                break;
            }
        }
        if(j==n){
            cout << i <<" ";
        }
        if(j==0){
            i++;
        }
        else{
            i = i+j;
        }
    }
}

int main()
{
    string text = "ABCABCDABCD";
    string pat = "ABCD";
    func(text, pat);

    return 0;
}
