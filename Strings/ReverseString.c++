#include<string>
#include<iostream>
using namespace std;
int main(){
    string s = "Himanshu Sahu";
    int a = 0;
    int b = s.length()-1;
    while(a<b){
        char temp = s[a];
        s[a++] = s[b];
        s[b--] = temp;
    }
    cout << s;
}