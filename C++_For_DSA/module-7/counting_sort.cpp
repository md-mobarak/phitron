#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int fraq[20]={0};
  for (char c:s)
  {
    /* code */
    fraq[c-'a']++;
  }
  for (char i = 'a'; i <= 'z'; i++)
  {
     for (int j = 0; j < fraq[i-'a']; j++)
     {
        /* code */
        cout<<i;
     }
     

  }
  
  
    return 0;
}