// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; 
//     int a[n]; 
    
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
    
//     sort(a, a + n);
    

//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }
//         cout << endl;
//     for (int i = n-1; i >=0 ; i--) {
//         cout << a[i] << " ";
//     }

    
//     return 0;
// }



// problem 2 
// #include <bits/stdc++.h>
// using namespace std;


// int * sort_it(int n){
// int * a= new int[n];
// for (int i = 0; i < n; i++)
// {
//    cin>>a[i];
// }
//  sort(a, a + n);
// return a;
// }


// int main(){
//  int n;
//  cin>>n;
// int *a= sort_it(n);
// for (int i = n-1; i >=0; i--)
// {
//     cout<<a[i]<<" ";
// }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;


// int main(){
//   int t;
//   cin>>t;
//   int Id;
//     char Name[101];
//     char Section;
//     int Total_Marks;
//   for (int i = 0; i < t; i++)
//   {
    
//     if(Section !='A'||Section!='Z'){
//        break;
//     }
    
//     if(Total_Marks>=0&&Total_Marks<=100){
//         break;
//     }
//     cin>>Id;
//     cin.getline(Name,101);
//     cin>>Section;
//     cin>>Total_Marks;
 
//   }
//   for (int i = 0; i < t; i++)
//   {
//     // int Id;
//     // char Name[101];
//     // char Section;
//     // if(Section !='A'||Section!='Z'){
//     //    break;;
//     // }
//     // int Total_Marks;
//     // if(Total_Marks>=0&&Total_Marks<=100){
//     //     break;
//     // }
//     cout<<Id<<Name<<Section<<Total_Marks;
 
//   }
  
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//  int t,n,s;
//  cin>>t;
//  int arr[n];
// // int flag = 0;

//  for (int i = 0; i < t; i++)
//  {
//     /* code */
//     cin>>n;
//     cin>>s;
//     int flag=1;
//     for (int j = 0; j < n; j++)
//     {

//         cin>>arr[j];

//     }

//   for (int j = 0; j < n; j++)
//   {
//     cout<<arr[j]<<" ";
//   }
  


//     //  cout<<flag<<" ";
//     cout<<endl;

//  }



//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++) {
//         int n, s;
//         cin >> n >> s;
//        int arr[n];

//        int flag =0;
//         for (int j = 0; j < n; j++) {
//             cin >> arr[j];
//         }

//         for (int j = 0; j < n; j++) {
            
//             for (int k = j+1; k < n; k++)
//             {
//                 for (int m = k+1; m < n; m++)
//                 {
//                     if(arr[j]+arr[k]+arr[m]==s){
//                         flag=1;
//                     }

//                 }
                
//             }
            
//         }
//         if(flag==1){
//             cout<<"YES";
//         }else{
//             cout<<"NO";
//         }
//         // cout<<flag;

//         cout << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int MAX_SIZE = 100005;
//     char s[MAX_SIZE];

//      while (cin.getline(s, MAX_SIZE)) {
     
//         sort(s, s + strlen(s));
//   for (int i = 0; i < strlen(s); ++i) {
//             if (s[i] == ' ') {
//                 continue;
//             }else{
//                 cout << s[i];
//             }
//   }
//  cout<<endl;
//      }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     int ID;
//     string Name;
//     char Section;
//     int Total_Marks;
// };

// int main() {
//     int T; 
//     cin >> T;

//     while (T--) {
//         Student students[3];
//         for (int i = 0; i < 3; ++i) {
//             cin >> students[i].ID >> students[i].Name >> students[i].Section >> students[i].Total_Marks;
//         }

  
//         Student max_student = students[0];
//         for (int i = 1; i < 3; ++i) {
//             if (students[i].Total_Marks > max_student.Total_Marks || 
//                 (students[i].Total_Marks == max_student.Total_Marks && students[i].ID < max_student.ID)) {
//                 max_student = students[i];
//             }
//         }


//         cout << max_student.ID << " " << max_student.Name << " " << max_student.Section << " " << max_student.Total_Marks << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int ID;
    char Name[100]; // Assuming name will not exceed 100 characters
    char Section;
    int Total_Marks;
};

int main() {
    int T; 
    cin >> T;

    while (T--) {
        Student students[3];
        for (int i = 0; i < 3; ++i) {
            cin >> students[i].ID >> students[i].Name >> students[i].Section >> students[i].Total_Marks;
        }

        Student max_student = students[0];
        for (int i = 1; i < 3; ++i) {
            if (students[i].Total_Marks > max_student.Total_Marks || 
                (students[i].Total_Marks == max_student.Total_Marks && students[i].ID < max_student.ID)) {
                max_student = students[i];
            }
        }

        cout << max_student.ID << " " << max_student.Name << " " << max_student.Section << " " << max_student.Total_Marks << endl;
    }

    return 0;
}
