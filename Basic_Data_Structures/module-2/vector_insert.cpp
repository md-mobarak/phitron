#include <bits/stdc++.h>
using namespace std;
int main(){
 vector<int>v={1,2,3,4,5};
 vector<int>v2={1,2,3,4,5};

//  v.insert(v.begin()+2,v2.begin(),v2.end());
 v.erase(v.begin()+1,v.end()-2);
   
for(int c:v){
    cout<<c<<" ";
}
    return 0;
}