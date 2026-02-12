// Multipath Inheritance
//Multipath inheritance occurs when a derived class inherits the same base class through more than one path.
// 👉 It is a special case of multiple inheritance
// 👉 Commonly known as the Diamond Problem
 //       A
 //      ↑ ↑
   //   B   C
   //    \ /
   //     D
//   B and C inherit from A
// D inherits from both B and C
// So D gets two copies of A ❌ (ambiguity)
// In this we got A properies form two paths hance it is callled MPI.
// Multipath inheritance creates multiple paths to same base class
// Causes diamond problem
// Supported in C++
// Solved using virtual inheritance
// Java avoids this by not allowing multiple inheritance with classes


#include<iostream>
using namespace std;


class Human {
    public:
    string name;
    void Display() {
         cout<<name<<endl;
    }
};

class Engineer : public virtual Human {
    void money() {
        cout<<"Hello Money\n";
    }
    public:
    string specialization;
    void work() {

        cout<<"I have specialization in"<<specialization<<endl;
    }

};

class YouTuber : public virtual Human {
    public:
    int subscribers;
    YouTuber() {
        cout<<"Youtuber"<<endl;
    }
    void contentCreater() {
        cout<<"I have a subscriber base of"<<subscribers<<endl;
    }

};

class CodeTeacher : public Engineer,public YouTuber {
public:
int salary;
CodeTeacher() {
    cout<<"Code"<<endl;
}

CodeTeacher(string name,string specilization,int subs,int salary) {
    this->name=name;
    this->specialization=specilization;
    this->subscribers=subs;
    this->salary  =salary;

}

};


int main() {
    CodeTeacher A1("Rohit","CSE",2000,99);
    // CodeTeacher A1;
    A1.Display();
    return 0;
}

// virtual ensures that only ONE copy of a base class is shared when multiple paths of inheritance exist.