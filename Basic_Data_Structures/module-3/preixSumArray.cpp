#include <bits/stdc++.h>
using namespace std;
int main(){
 int n,t;
 long long arr[n];
 
 for (int i = 0; i < n; i++)
 {
    /* code */
    cin>>arr[i];
 }
 long long pre[n];
   pre[0]=arr[0];
   for (int i = 1; i < n; i++)
   {
    /* code */
    pre[i]=arr[i]+pre[i-1];
   }

   while (t--)
   {
    /* code */
    long long l,r;
    cin>>l>>r;
    long long sum;
    if(l==0)sum=pre[r];
    else sum=pre[r]-pre[l-1];
    cout<<sum<<endl;
   }
   
   
 
    return 0;
}