#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    /* code */
    cin>>arr[i];
 }
 int x;
 cin>>x;
 int l=0;
 int r=n-1;
 bool flag= false;
 while (l<=r)
 {
    /* code */
    int mid_index= (l+r)/2;
    if(arr[mid_index]==x){
        flag= true;
        break;
    }
    if(x>arr[mid_index]){
        l=mid_index+1;
    }else{
        r=mid_index-1;
    }

 }
 if(flag==true){
    cout<<"YES";
 }else{
    cout<<"NO";
 }
 
 
    return 0;
}