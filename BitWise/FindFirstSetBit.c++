#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {

        if(n ==0){
            return 0;
        }
        int i;
        for(i =0;i<=log2(n);i++){
            if((n & (1<<i))!=0){
                break;
            }
        }
        return i+1;
    }
};

int main(){
  int n = 18;
  Solution a;
  cout << a.getFirstSetBit(n);
}