#include <bits/stdc++.h>
using namespace std;
 class Student {
    public:
    string name;
    int roll;
    int marks;
 };

int main(){
    int n;
    cin>>n;
    Student a[n];
    // Student *a =new Student[n];
    for (int i = 0; i < n; i++)
    {
    //     cin.ignore();
    //    getline(cin,a[i].name);
       cin>>a[i].name>>a[i].roll>>a[i].marks;
        /* code */
    }
    // Student mn;
    // mn.marks = INT_MAX;
    Student Mx;
    Mx.marks =INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // if(mn.marks>a[i].marks){
        //     mn=a[i];
        // }
        if(Mx.marks<a[i].marks){
            Mx=a[i];
        }
        
    }
    cout<<Mx.name<<Mx.roll<<Mx.marks<<endl ;
    
    
 
    return 0;
}