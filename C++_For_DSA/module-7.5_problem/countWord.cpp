#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int count=0;
    while (ss>>word)
    {
        int isWord=0;
        int isNotWord=0;
        
        for (int i = 0; i < word.size(); i++)
        {
            
            
        //  if (!((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))) {
        //    isNotWord++;
        //  }else{
        //     isWord++;
        //  }
        }
        // if(isNotWord<=0){
        //     count++;
        // }
       
    }
    cout<<count;
    
    return 0;
}