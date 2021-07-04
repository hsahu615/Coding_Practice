#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==1){
        cout << '1';
    }
    if(n==2){
        cout << '2';
    }
    else{
        string s = "11";
        for(int i=3;i<=n;i++){
            string t = "";
            int c=1;
            s = s +"&";
            for(int j=1;j<s.length();j++){
                if(s[j]!=s[j-1]){
                    t = t+to_string(c);
                    t = t + s[j-1];
                    c=1;
                }
                else{
                    c++;
                }
            }        
            s=t;    
        }
        cout << s;
    }
    
    
}