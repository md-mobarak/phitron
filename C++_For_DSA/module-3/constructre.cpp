#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
    int roll;
    int gpa;
    int cls;
    Student(int r,int gpa,int c){
       this->gpa=gpa;
        // gpa=g;
        cls=c;
    }

};


int main(){
    Student Amin(30,4,2);
    cout<<Amin.roll,cout<<" ",cout<<Amin.gpa;
    return 0;
}