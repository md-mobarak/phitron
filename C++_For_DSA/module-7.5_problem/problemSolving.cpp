// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     stringstream ss(s);
//     string word;
//     int count=0;
//     while (ss>>word)
//     {
//         int isWord=0;
//         int isNotWord=0;
        
//         for (int i = 0; i < word.size(); i++)
//         {
            
//          if (!((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))) {
//            isNotWord++;
//          }else{
//             isWord++;
//          }
//         }
//         if(isNotWord<=0){
//             count++;
//         }
       
//     }
//     cout<<count;
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    for (int i = 0; i < t; ++i) {
        string S, X;
        cin >> S >> X;

        int pos = S.find(X);
        while (pos != string npos) {
            S.replace(pos, X.length(), "#");
            pos = S.find(X, pos + 1);
        }

        cout << S << endl;
    }

    return 0;
}


// problem 2
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
// //   cin.ignore();
//   string s,x;
//   for (int i = 0; i < n; i++)
//   {
//       cin.ignore();
//       getline(cin,s);
//       getline(cin,x);
//     //   cin>>x;
//     /* code */
//   }
  
//   for (int i = 0; i < n; i++)
//   {
//     /* code */
//     cout<<s<<" "<<x<<endl;
//   }
  


//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//     string name;
//     int Class;
//     string section;
//     int Id;
//     int  math_marks;
//     int  eng_marks;
// };


// int main(){
//  int n;
//  cin>>n;
// //   Student* Student = new Student[n];
//     Student *a = new Student[n];
//     //  Student a[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>a[i].name>>a[i].Class>>a[i].section>>a[i].Id>>a[i].math_marks>>a[i].eng_marks;
// }


//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             /* code */
//              if(a[i].eng_marks+a[i].math_marks< a[j].eng_marks+a[j].math_marks){
//                 // cout<<a[j].marks<<" ";
//                 swap(a[i],a[j]);
//              }
//             else if(a[i].eng_marks+a[i].math_marks== a[j].eng_marks+a[j].math_marks){
//                  if(a[i].Id >a[j].Id){
//                     swap(a[i],a[j]);
//                  }
//              }

//         }
    
//     }


// for (int i = 0; i < n; i++)
// {
//     cout<<a[i].name<<' '<<a[i].Class<<' '<<a[i].section<<' '<<a[i].Id<<' '<<a[i].math_marks<<' '<<a[i].eng_marks<<endl;
// }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     string name;
//     int classNumber; 
//     string section;
//     int Id;
//     int math_marks;
//     int eng_marks;
// };

// bool cmp(Student a, Student b) {
        
       
//       if(a.eng_marks==b.eng_marks){
//         return a.math_marks>b.math_marks;
//     }
//     else if(a.math_marks == b.math_marks){
//       return a.Id < b.Id;
//     }
//     else{
//       return a.eng_marks>b.eng_marks;
//     }

//     // if(a.eng_marks > b.eng_marks){
//     //     return true;
//     // }else {
//     //   return false;
//     // }
   
// }

// int main() {
//     int n;
//     cin >> n;
//     cin.ignore(); // To ignore the newline character after reading 'n'

//     Student a[n]; 

//     for (int i = 0; i < n; i++) {
//         cin >> a[i].name >> a[i].classNumber >> a[i].section >> a[i].Id >> a[i].math_marks >> a[i].eng_marks;
//     }

//     sort(a, a + n, cmp);

//     for (int i = 0; i < n; i++) {
//         cout << a[i].name << ' ' << a[i].classNumber << ' ' << a[i].section << ' ' << a[i].Id << ' ' << a[i].math_marks << ' ' << a[i].eng_marks << endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// class Student {
// public:
//     string name;
//     int classNumber; 
//     string section;
//     int Id;
//     int math_marks;
//     int eng_marks;
// };

// bool cmp(Student a, Student b) {

//     if (a.eng_marks != b.eng_marks)
//         return a.eng_marks > b.eng_marks;
    

//     if (a.math_marks != b.math_marks)
//         return a.math_marks > b.math_marks;
    
  
//     return a.Id < b.Id;
// }

// int main() {
//     int n;
//     cin >> n;
//     cin.ignore(); 

//     Student a[n]; 

//     for (int i = 0; i < n; i++) {
//         cin >> a[i].name >> a[i].classNumber >> a[i].section >> a[i].Id >> a[i].math_marks >> a[i].eng_marks;
//     }

//     sort(a, a + n, cmp);

//     for (int i = 0; i < n; i++) {
//         cout << a[i].name << ' ' << a[i].classNumber << ' ' << a[i].section << ' ' << a[i].Id << ' ' << a[i].math_marks << ' ' << a[i].eng_marks << endl;
//     }

//     return 0;
// }
