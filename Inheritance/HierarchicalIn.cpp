// Hierarchical Inheritance 
// Multiple child classes inherit from one parent class.
//One base class → many derived classes
//Vehicle → Car, Bike, Truck
//Employee → Manager, Developer, Tester

#include<iostream>
using namespace std;

class Human {
string Religion,color;
protected:
string name;
int age,weight;

};
class Student : private Human {
 private:
   int roll_no,fees;
   public:
    Student(string name,int age,int weight,int roll_number,int fees) {
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_no=roll_number;
        this->fees=fees;
    }
    void display() {
        cout<<name<< " age is"<<age<<" wight is "<<weight<<" roll no is "<<roll_no<<endl;
    }
};

class Teaher : public Human {
    int salary;
    public:
    Teaher(int salary,string name,int age) {
        this->salary=salary;
        this->name=name;
        this->age=age;
    }
    void Display() {
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }
};

int main() {
Student A1("MOhit",12,10,99,100);
Teaher A2(1200,"rohit",34);
A1.display();
A2.Display();

}
// Human -> Teacher
// Human -> Student