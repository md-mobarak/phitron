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
    // Student Mx;
    // Mx.marks =INT_MIN;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            /* code */
             if(a[i].marks< a[j].marks){
                // cout<<a[j].marks<<" ";
                swap(a[i],a[j]);
             }
            else if(a[i].marks==a[j].marks){
                 if(a[i].roll>a[j].roll){
                    swap(a[i],a[j]);
                 }
             }

        }
    
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    
    // cout<<Mx.name<<Mx.roll<<Mx.marks<<endl ;
    
    
 
    return 0;
}