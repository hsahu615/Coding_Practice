#include <bits/stdc++.h>
using namespace std;


void reverse(char *s, int low, int high){
    while(low<=high){
        swap(s[low], s[high]);
        low++;high--;
    }
}

void func(char s[], int n){
    int start = 0;
    for(int end = 0;end<n;end++){
        if(s[end]==' '){
            reverse(s, start, end-1);
            start = end+1;
        }
    }
    reverse(s, start,n-2);
    reverse(s, 0, n-2);
    cout << s;
}
int main()
{
    char s[] = "Welcome to Sahu House"; 
    int n = sizeof(s)/sizeof(s[0]);
    cout << n << " ";
    func(s, n);
    return 0;
}
