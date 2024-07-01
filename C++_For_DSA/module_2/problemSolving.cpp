// // problem1

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         cin>>a[i];
//     }
//          int mx=0;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
       
   
//         int ansMx = max(mx,a[i]);
//         mx=ansMx;
         
//     }
//     cout<<mx<<' ';
    
// }

// problem2

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     // find the min number
//   int minNumber = min(a,b);
//   int minFinalNumber = min(minNumber,c);

// //   find the max number 
//   int maxNumber = max(a,b);
//   int maxFinalNumber = max(maxNumber,c);

    
//     cout<<minFinalNumber<<' '<<maxFinalNumber;
    
// }

//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of elements
    int a[n];  // Declare an array of size n
    
    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Sort the array using the sort function from STL
    sort(a, a + n);
    
    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
        cout << endl;
    for (int i = n-1; i >=0 ; i--) {
        cout << a[i] << " ";
    }

    
    return 0;
}
