#include<iostream>
using namespace std;


// void func(int arr[], int n){
//     int a, b;
//     for(int i=0;i<n;i++){
//       if(arr[abs(arr[i])-1]<0){
//         a = abs(arr[i]);
//       }
//       else{
//         arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
//       }
//     }
//     for(int i=0;i<n;i++){
//       if(arr[i]>0){
//         b = i+1;
//         break;
//       }
//     }
//     cout << a << " " <<b;
// }


void func(int arr[], int n){
  int mysum = 0, sqmysum = 0;
  int sum = (n*(n+1))/2, sqsum = (n*(n+1)*(2*n+1))/6;
  for(int i=0;i<n;i++){
    mysum+=arr[i];
    sqmysum +=arr[i]*arr[i];
  }
  int a = mysum-sum;
  int b = sqmysum-sqsum;
  int x = ((b/a)+a)/2;
  cout << x << " " << x-a;
}
int main(){
  int arr[] = {4,3,1,4,2};
  int n = sizeof(arr)/sizeof(arr[0]);
  func(arr, n);
}
