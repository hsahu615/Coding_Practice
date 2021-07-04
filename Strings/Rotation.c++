#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "ABACD";
    string str2 = "CDABA";
    string str3 = str1+str1;
    for(int i=0;i<(str3.length()-str2.length());i++){
        if(str3.substr(i, str2.length()) == str2){
            cout <<"Yes";
            break;
        }
    }
    return 0;
    

}