// single inheritance 
// One child class inherits from one parent class.
// A → B
// Parent Class → Child Class
// Human(name,age) -> student(rollno,fee)

#include<iostream>
using namespace std;

class Human
{
protected:
string name;
int age;
public:
void work() {
    cout<<"I am working \n";

}
Human() {
    cout<<"Constructor of human"<<endl;
}
void Display() {
    cout<<"Age"<<age<<endl;    
}
~Human() {
    cout<<"Human"<<endl;
}
};

class Student : public Human {
int rollno;
int fee;
public:
Student(string name,int age,int rollno,int fee) {
    this->name = name;
    this->age=age;
    this->rollno=rollno;
    this->fee = fee;


}
void Display() {
    cout<<name<<" "<<age<<" "<<rollno<<" "<<fee<<" "<<endl;
}

~Student() {
    cout<<"student"<<endl;
}
};

int main() {
    Student A1("Rohit",26,32,99);
    A1.work();
    A1.Display();
    return 0;
}

// firstlt parent form then child
// destructor call in revrse order always because of dependencies      
// when function call it call nearby function first if not found then call parent class       
 
