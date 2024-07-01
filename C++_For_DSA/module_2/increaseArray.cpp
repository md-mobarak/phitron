#include <bits/stdc++.h>
using namespace std;
int main (){
    int *s = new int[4];
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cin>>s[i];
    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<s[i]<<' ';
    }
    cout<<endl;
    delete[]s;
     for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<s[i]<<' ';
    }    
    return 0;
}