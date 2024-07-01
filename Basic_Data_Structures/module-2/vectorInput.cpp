#include <bits/stdc++.h>
using namespace std;
int main(){
    // 1 policy 
//  vector<int>v;
//  int n;
//  cin>>n;
//  for (int i = 0; i < n; i++)
//  {
//     /* code */
//     int x;
//     cin>>x;
//     v.push_back(x);
//  }
//  for(int val:v){
//     cout<<val<<" ";
//  }
 
//  2nd policy 
int n;
cin>>n;
vector<int>v(n);
for (int i = 0; i < n; i++)
{
    /* code */
    cin>>v[i];
}
for(int val:v){
    cout<<val<<" ";
}

 
    return 0;
}