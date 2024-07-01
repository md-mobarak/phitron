#include <bits/stdc++.h>
using namespace std;
int main(){
 int n ,q;
 cin>>n>>q;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
    /* code */
    cin>>arr[i];
 }
 sort(arr,arr+n);
 while (q--)
 {
    int x;
    cin>>x;
    bool flag=false;
    int l=0;
    int r=n-1;
     
     while (l<=r)
     {
        /* code */
        int midInd= (l+r)/2;
        if(arr[midInd]==x){
            flag=true;
            break;
        }
        if(x>arr[midInd]){
            l=midInd+1;
        }else{
            r=midInd-1;
        }
     }

   if(flag==true){
    cout<<"found"<<endl;
   }else{
    cout<<"not found"<<endl;
   }
   

 }
 
 

    return 0;
}