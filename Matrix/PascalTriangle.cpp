/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;


void func(int n){
    vector<vector<int>> r(n);
    for(int i=0;i<n;i++){
        r[i].resize(i+1);
        r[i][0] = r[i][i] = 1;
        for(int j=1;j<i;j++){
            r[i][j] = r[i-1][j-1]+r[i-1][j];
        }
    }
    for(int i=0;i<r.size();i++){
        for(int j=0;j<n;j++){
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    func(n);

    return 0;
}
