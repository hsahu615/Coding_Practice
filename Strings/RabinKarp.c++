#include<bits/stdc++.h>
using namespace std;



void search(char pat[], char txt[], int q){
  int p = 0,  t = 0,  h = 1;
  int m = strlen(txt);
  int n = strlen(pat);
  int d = 256;
  int i, j;
  for(int i= 0;i<n-1;i++){
    h = (h*d)%q;
  }
  for(int i = 0;i<n;i++){
    t = (d*t + txt[i])%q;
    p = (d*p + pat[i])%q;
  }
  for(i = 0;i<m-n;i++){
    if(p==t){
      bool flag = true;
      for(j = 0;j<n;j++){
        if(pat[j]!=txt[i+j]){
          flag = false; break;
        }
        if(flag){
          cout << i << " ";
        }
      }
          if(j==n){
        cout << i << " ";
      }
      
    }
    if(i<m-n){
    t = (d*(t-txt[i]*h)+txt[i+n])%q;
    if(t<0){
      t = (t+q);
    }
  }
      
  }
  


}


int main()
{
    char txt[] = "GEEKS FOR GEEKS";
    char pat[] = "GEEK";
       
    int q = 101;
     
      search(pat, txt, q);
    return 0;
}