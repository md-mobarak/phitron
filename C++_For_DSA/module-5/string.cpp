#include <bits/stdc++.h>
using namespace std;
int main(){
    string a ="hello";
    string b= "world";
    // s.size()
    // cout<<a.size() ;
    // cout<<a.resize(8,'SSS');
    // cout<< a.reserve();
    // a=a+b;
    // a.append(b);
    a.push_back('G');
    a.erase(2,1);
    a.replace(2,1,"H");
    cout<<a<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back();
    return 0;
}