// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//  int n;
//  cin>>n;
//  vector<int>v(n);
//  vector<int>v2(n);
//  for (int i = 0; i < n; i++)
//  {
//     /* code */
//     cin>>v[i];
//  }
//  for (int i = 0; i < n; i++)
//  {
//     /* code */
//     cin>>v2[i];
//  }
//  vector<int>v3=v2;
//  v3.insert(v3.end(),v.begin(),v.end());
//  for (int i = 0; i < v3.size(); i++)
//  {
//     /* code */
//     cout<<v3[i]<<" "; 
//  }
 
 

//     return 0;
// }

// problem 2 

// #include <bits/stdc++.h>
// using namespace std;
// int main(){

//     int n;
//  cin>>n;
//  vector<int>v(n);
//  for (int i = 0; i < n; i++)
//  {
//     /* code */
//     cin>>v[i];
//  }
//     reverse(v.begin(), v.end());
//  for (int i = 0; i < n; i++)
//  {
//     /* code */
//     cout<<v[i]<<" ";
//  }
 
//     return 0;
// }

// problem 3 

// #include <bits/stdc++.h>
// using namespace std;
// int main(){

//     int n;
//  cin>>n;
//  vector<int>v(n);
//  for (int i = 0; i < n; i++)
//  {
//     /* code */
//     cin>>v[i];
//  }
//     // reverse(v.begin(), v.end());
//  for (int i = 0; i < n; i++)
//  {
//     /* code */
//     if(v[i]>0){
//         v[i]=1;
//     }else if(v[i]==0){
//         v[i]=0;
//     }
//     else{
//         v[i]=2;
//     }
//     cout<<v[i]<<" ";
//  }
 
//     return 0;
// }

// problem 4 
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//  int n;
//  cin>>n;
//  vector<int>v(n);
//  for (int i = 0; i < n; i++)
//  {
//     cin>>v[i];
//  }
// int count = 0;
//  for (int i = 0; i < n; i++)
//  {
//      auto it = find(v.begin(),v.end(),v[i]+1);
// if(it!=v.end()){
//    count++;
// }
//  }
//  cout<<count; 
//     return 0;
// }


// problem 5 
#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    // Array to count occurrences of each letter
    vector<int> count(26, 0);

    // Count each letter in the string
    for (char c : S) {
        count[c - 'a']++;
    }

    // Print the results in ascending order
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            cout << char(i + 'a') << " : " << count[i] << endl;
        }
    }

    return 0;
}