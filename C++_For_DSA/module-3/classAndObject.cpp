#include <bits/stdc++.h>
using namespace std;

class Student {
  public:
  char name[100];
  int roll;
  double cgpa;

};

int main(){

    Student a;
    // a.roll=30;
    // a.cgpa=3.5;
    // char temp[100]="Rakib";
    cin.getline(a.name,200);
   cin>>a.roll ,cin>>a.cgpa;
    // strcpy(a.name,temp);
    cout<<a.name ,cout<<a.roll,cout<<a.cgpa;
 
    return 0;
}