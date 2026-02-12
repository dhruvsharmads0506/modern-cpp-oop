#include<bits/stdc++.h>
using namespace std;

class Student {
   // public:  // by default private if not use public in C++
    string Name;
    int Roll;
    int age;
    string Grade;
    //function getter and setter :
    //setter
    public:
    void SETName(string Name) { 
        this->Name = Name;
    }
    void SETAge(int age) {
        this->age = age;
    }
    //getter
    void GetName() {
        cout<<Name<<endl;
    }
    void GetAge() {
        cout<<age;
    }
};

int main() {
 Student s1;
s1.SETName("Dhruv");
 s1.SETAge(21);
 //s1.Grade = "A";
 
 s1.GetName();
 s1.GetAge();
}