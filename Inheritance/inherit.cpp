// The capability of a class to derive property & charaterisctic from another class.
//parent class/base class
// child class/Derived class - which derived or inherit property from parent class. 
// parent eg - Human class
//child - student,Teacher class

//Access Modidfiers :
//               External Code            withinClass      Derived Class
//Public :       yes                         yes                yes
//Potected :     no                          yes                yes
//Private:       no                          yes                no
// Note : private memeber can,t inherit in derived class
#include<iostream>
using namespace std;

// class Human {
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     void Disply() { // it can acess all because it is inside the class
//         cout<<a<<" "<<b<<" "<<c<< " "<<endl;
//     }
// };

// int main() {

//     Human dhruv;
//     // dhruv.a = 10; // private , give error
//     // dhruv.b = 10; // protected, give error
//     dhruv.c = 30; // public not error
//     dhruv.Disply();
//     return 0;
// }

// class Child Name : access-modifier Parent class
// acess-modidfier - public , protected,private

//  Base class       child class           Result
//  Public             Public              Public
//  Public             Protected           Protected
//  Public             Private             private
//  Protected          Public              protected
//  Protected          Protected           Protected
//  Protected          Private             Private


// stricness
//private > protected > public 
       
// class Human {
//  //private:
//  //protected:
//  public:
//  string name;
//  int age,weight;
// };

// // class Student : public Human {
// //     int roll_number,fees;
// //     public:
// //     void display() {
// //         cout<<name<<" "<<age<<" "<<fees<<" "<<endl;
// //     }
// // };
// class Student : protected Human { 
// //protected
//     int roll_number,fees;
//     public:
//     void display() {
//         cout<<name<<" "<<age<<" "<<fees<<" "<<weight<<" " <<endl;
//     }
//     void func(string n,int a,int w) {
//         this->name = n;
//         this->age=a;
//         this->weight=w;
//     }
    
// };

// int main() {

//     Student A;
// //A.name = "Rohit";
//     A.display();
//     A.func("dhruv",21,55);
//     A.display();
// }

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
        this->roll_no=roll_no;
        this->fees=fees;
    }
    void display() {
        cout<<name<< " age is"<<age<<" wight is "<<weight<<" roll no is "<<roll_no<<endl;
    }
};

class Teaher : public Human{
    int salary,idl;
};

int main() {
 Student A("Dhruv",12,400,45,10000);
 A.display();
 Teaher B;
 //B.name = "Manan"

}
//protected - help in holding encapsulation propery and help in inherit the property in inheritance in derived class
//private :  private part not allow to inhrit


// VIP NOTE : Arrow always points towards the PARENT (Base class)
//      Animal   ←────── Arrow points here
//      ↑   ↑
//    Dog   Cat
//✔️ Dog is an Animal
//✔️ Cat is an Animal