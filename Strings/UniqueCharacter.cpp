

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "geeksforgeeks";
    int n = s.length();
    int count[256] = {0};
    for(int i=0;i<n;i++){
        count[s[i]]++;
    }
    for(int i=0;i<=256;i++){
        if(count[i]>0){
            cout << (char)i << " ";
        }
    }
    return 0;
}
