#include <bits/stdc++.h>
using namespace std;
int main(){
 string s;
 getline(cin,s);
 string rev;
 for (int i = 0; i < s.size(); i++)
 {
    /* code */
    // reverse(s.begin(),s.end());
   
    if(s[i]==' '){
        //   reverse(s.begin(),s.end());
          cout<<s[i];
    }
 }
 

//  stringstream ss(s);
// string word;
// int count =0;
//    while (ss>>word)
//     {
//     reverse(word.begin(),word.end());
//      count++;
//     //  cout<<count;
//     // cout<<s;
//     // cout<<word.begin();
//     cout<<" "<<word;
//     }

//    cout<<count;
    return 0;
}