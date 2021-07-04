#include<iostream>
#include<string>
using namespace std;

class a{
    string s;
    int l;
    public:
    void findDuplicates(string s){
        int arr[256] = {0};
        for(int i=0;i<s.length();i++){
            if(arr[s[i]]==0){
                arr[s[i]]++;
            }
            else{
                cout << s[i] << " ";
            }
        }
    }
};

int main(){
    a dup;
    string name = "abcd";
    dup.findDuplicates(name);

}
