// Multiple Inheritance :
//One child class inherits from more than one parent class.
//Supported in C++, not directly in Java
//Can cause Diamond Problem (ambiguity).                    
// Father (house) and Mother(Gold)
// child(Bike)
// so child have house,gold,bike 
#include<iostream>
using namespace std;

class Engineer {
public:
string specilization;
Engineer() {
    cout<<"Engineer"<<endl;
}
void work() {
    cout<<"I have Specilisation in :"<<specilization<<endl;
}

};

class YouTuber {
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
string name;
CodeTeacher() {
    cout<<"Code"<<endl;
}
CodeTeacher(string name,string specilization,int subs) {
    this->name=name;
    this->specilization=specilization;
    this->subscribers=subs;

}
void Display() {
    cout<<"My name is :"<<name<<endl;
}
};

int main() {
//CodeTeacher A("Dhruv","CSE",20000);
CodeTeacher A;
A.Display();
A.work();
A.contentCreater();

}
// constructor call depend on sequence of inheritance in child class
// destructor is reverse to constructor call