#include<iostream>
using namespace std;


class Solution{
public:
    void del(int *b, int index){
        int n = sizeof(b)/sizeof(b[0]);
        for(int i =index;i<n-1;i++){
            b[i]=b[i+1];
        }
    }
    void remove_duplicate(int *b,int n){
        // code here
        int i;
        for(int i=1;i<n;i++){
            if(b[i]==b[i-1]){
                del(b, i);
            }
        }
        for(int i=0;i<n;i++){
            cout <<b[i] << " ";
        }
    }
};

int main(){
  int b[] = {2,2,2,2};
  int n = sizeof(b)/sizeof(b[0]);
  Solution s;
  s.remove_duplicate(b, n);
}