#include<iostream>
#include<string>
using namespace std;

bool palindrome(string A){
    bool ans = true;
    for(int i=0;i<A.length()/2;i++){
        if(A[i]!=A[A.length()-i]){
            ans = false;
        }
    }
    cout << ans;    
}
string longestPalin (string S) {
        // code here
    bool ans;
    string result = "a";
    for(int i=0;i<S.length();i++){
        ans = palindrome(S.substr(i,S.length()-i));
        // cout << (S.substr(i,S.length()-i)) <<endl;
        if(ans==true and S.substr(i,S.length()-i).length()){
            result = S.substr(i,S.length()-i);
            
        }
    }
    return result;
}
int main(){
    string a = "aaaabbaa";
    longestPalin(a);
}