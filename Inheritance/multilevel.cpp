// Multilevel Inheritance
//A class inherits from a class that is already derived.
// Like grandparent → parent → child.
// Eg Person(name,age) -> Employee(salary)->Manager(department,NoOfEmployee)

#include<iostream>
using namespace std;

class Person {
protected:
string name;
public:
void introduction() {
    cout<<"hello my name is :"<<name<<endl;

}
};

class Employee : public Person {
protected:
int salary;
public:
void monthy_slary() {
    cout<<"My Monthly Slary is :"<<salary<<endl;
}
};

class Manager : public Employee {
public:
string department;
Manager(string name,int salary,string department) {
    this->name= name;
    this->salary=salary;
    this->department=department;
}

void Work() {
    cout<<"I am leading the deparment :  "<<department<<endl;
}
};
int main() {
    Manager A1("Dhruv",20000,"finance");
    A1.introduction();
    A1.monthy_slary();
    A1.Work();
   
}