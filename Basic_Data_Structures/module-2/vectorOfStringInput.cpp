#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 vector<string>v(n);
 for (int i = 0; i < n; i++)
 {
    /* code */
    cin>>v[i];
 }
 for(string val:v){
    cout<<val<<endl;
 }
    return 0;
}