

#include <iostream>

using namespace std;


// Naive Approach
// void func(int arr[], int n){
//     int temp[n+1]={0};
//     for(int i=0;i<n;i++){
//         temp[arr[i]]++;
//     }
//     int missing, repeat;
//     for(int i=0;i<=n;i++){
//         if(temp[i]==2){
//             repeat=i;
//         }
//         else if(temp[i]==0){
//             missing = i;
//         }
//     }
//     cout << missing << " "<<repeat;
// }


// Efficient Approach
// T.C = O(n)
// void func(int arr[], int n){
//     int sum = (n*(n+1))/2;
//     int sqsum = (n*(2*n+1)*(n+1))/6;
//     int mySum = 0, mySqSum = 0;
//     for(int i=0;i<n;i++){
//         mySum += arr[i];
//         mySqSum += arr[i]*arr[i];
//     }
//     int x=0, y=0;
//     x = sum-mySum;
//     y = sqsum-mySqSum;
//     int a = ((y/x)+(x))/2;
//     cout << a << " " << a-x;
// }

int main()
{
    int arr[] = {3, 1, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    func(arr, n);

    return 0;
}
