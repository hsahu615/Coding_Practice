
#include <iostream>

using namespace std;


class Solution{
    public:
    int findSubArraySum(int a[], int n, int k)
    {
        int count=0;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum = sum+a[j];
                if(sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};

int main ()
{
    int Arr[] = {10 , 2, -2, -20, 10};
    int k = -10;
    int n = sizeof(Arr)/sizeof(Arr[0]);
    Solution a;
    cout << a.findSubArraySum(Arr, n, k);
    
    return 0;
}
