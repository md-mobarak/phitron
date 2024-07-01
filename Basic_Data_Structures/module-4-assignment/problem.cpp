// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//  int n;
//  cin>>n;
//  vector<int>V(n);
//  for (int i = 0; i < n; i++)
//  {
//     cin>>V[i];
//  }
//  int flag = 0;
//  for (int i = 0; i < n-1; i++)
//  {
    
//     // cout<<V[i]<<" ";
//     for (int j = i+1; j < n; j++)
//     {
//         /* code */
//         if(V[i]==V[j]){
//             flag=1;
//             break;
//         }
//     }
   
    
//  }
// //   cout<<flag<<endl;
//   if(flag==1){
//     cout<<"YES";
//   }else{
//     cout<<"NO";
//   }
 
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//  int n;
//  cin>>n;
//  long long arr[n];
 
//    for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//  long long pre[n];
//     pre[0] = arr[0];
//     for (int i = 1; i < n; i++) {
//         pre[i] = arr[i] + pre[i - 1];
//     }

//     for (int i = n-1; i >= 0; i--) {
//         cout << pre[i] << " ";
//     }
//     // cout << endl;


//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//  int t;
//  cin>>t;
//  for (int i = 0; i < t; i++)
//  {
//     /* code */
//     int n;
//     cin>>n;
//     int arr[n];
//     int flag = 1;
//     for (int j = 0; j < n; j++)
//     {
//         cin>>arr[j];
//     }
//     for (int j = 0; j < n-1; j++)
//     {
//         if(arr[j]>arr[j+1]){
//             flag=0;
//             break;
//         }
//     }
//     if(flag==0){
//         cout<<"NO"<<endl;
//     }else{
//         cout<<"YES"<<endl;
//     }
    
//  }
 
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//  int n;
//  cin>>n;
//  vector<int>arr(n);
//  for (int i = 0; i < n; i++)
//  {
//     cin>>arr[i];
//  }
//  int m;
//  cin>>m;
//  vector<int>brr(m);
//  for (int i = 0; i < m; i++)
//  {
//     cin>>brr[i];
//  }
//  int x;
//  cin>>x;

// arr.insert(arr.begin()+x,brr.begin(),brr.end());
// for (int i = 0; i < arr.size(); i++)
// {
//     /* code */
//     cout<<arr[i]<<" ";
// }

    
//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0) {
        return 0;
    }

    int mid = n / 2;
    // cout<<mid<<endl;

    // Print upper part
    for (int i = 0; i < mid; i++) {

        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "\\";

        for (int j = 0; j < (n - 2 - 2 * i); j++) {
            cout << " ";
        }
        cout << "/";
        cout << endl;
    }

    //  'X'
    for (int i = 0; i < mid; i++) {
        cout << " ";
    }
    cout << "X" << endl;

    // ses part
    for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < (n - 2 - 2 * i); j++) {
            cout << " ";
        }
        cout << "\\";
        cout << endl;
    }

    return 0;
}