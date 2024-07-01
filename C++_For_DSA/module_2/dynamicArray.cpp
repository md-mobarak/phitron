#include <bits/stdc++.h>
using namespace std;
int * fun(){
  int * a= new int[5];
// int a[5];
  for (int i = 0; i < 3; i++)
  {
    /* code */
    cin>>a[i];
  }
  
  return a;
}
int main (){
    int *a = fun();
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    
    return 0;
}