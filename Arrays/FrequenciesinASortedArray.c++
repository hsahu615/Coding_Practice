#include <iostream>
#include <vector>

using namespace std;

void freqs(int arr[], int n)
{ 
  int count=0;
  int till = arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]==till){
      count++;
    }
    else{
      cout << till << " " << count << endl;
      till = arr[i];
      count=1;
    }
  }
  cout << till << " " << count;
}

int main()
{
  int arr[] = {10,10,10,10};
  int n = sizeof(arr) / sizeof(arr[0]);
  freqs(arr, n);
}