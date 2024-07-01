#include <bits/stdc++.h>
using namespace std;
int main(){
  
//   vector<int>v={1,3,4,5,6,3,6,2,2,3,2,2,2,2,2};
//   replace(v.begin(),v.end(),2,100);
// for(int x:v){
//     cout<<x<<" ";
// }

// find func 
vector<int>v={1,3,4,5,6,3,6,2,2,3,2,2,2,2,2};
auto it = find(v.begin(),v.end(),100);
if(it==v.end()){
    cout<<" Not Found";
}else{
    cout<<"Found";
}

    return 0;
}