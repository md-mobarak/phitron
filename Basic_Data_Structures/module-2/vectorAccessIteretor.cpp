#include <bits/stdc++.h>
using namespace std;
int main(){
 vector<int>v={10,20,30,40,50,60};
//  cout<<v.front();
 for (int i = 0; i < v.size(); i++)
 {
    /* code */
    // cout<<v[i]<<" ";
 }

 for(auto it= v.begin();it<v.end();it++){
    cout<<*it<<" ";
 }
 
    return 0;
}