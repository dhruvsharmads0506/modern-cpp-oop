#include<iostream>
#include<vector>
using namespace std;


class Animal {
public:
// virtual function
// virtual void speak() {
//     cout<<"HUHUHUHUHU"<<endl;
// }
// pure virtual function ( abstract class)
virtual void speak()=0;

};

// if  you use vietual function or abstract class then you can not create directly object of that class


class Dog : public Animal{
public:
void speak() {
    cout<<"BArk"<<endl;
}
void greet() {
    cout<<"hello"<<endl;
}
};

class Cat : public Animal {
public:
void speak() {
    cout<<"MEOW"<<endl;
}
};
int main() {
//  Animal *p;
//  p = new Dog();
//  p->speak(); //if not use virtual keyword it give huhuhu
 // if we use virtual keyword it give bark
 // p only acess the function which is inside animal class, not call which is not part of class
 // parrent class pointer can stor child class address

 Animal *p;
 vector<Animal*>animals;
 animals.push_back(new Dog());
 animals.push_back(new Cat());
 //animals.push_back(new Animal());
 animals.push_back(new Dog());
 animals.push_back(new Cat());

for(int i=0;i<animals.size();i++) {
    p = animals[i];
    p->speak();
}
}

//We use an abstract class when:
//1)We want to define a common structure (rule/contract) but allow different classes to implement it differently
// Eg : All shapes must have draw() but draw differently.

//2) If a class represents a concept, not a real object.

// 3)When Different Objects Share Behavior but Implement Differently
// EG : Payment System

//4)When Using Runtime Polymorphism Properly
//5) In Large Projects (Scalability & Maintainability)

// Abstract classes are used when we want to define a common interface but prevent object creation of the base class.
//An interface = abstract class with ONLY pure virtual functions
