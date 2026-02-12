#include<bits/stdc++.h>
using namespace std;

class Customer {
string name;
int account_number;
int balance;
int *roi;
public:
// if we make any constructor then deafult constructor not make my compiler itself
// deafult constructor
Customer() {
    name = "sumit";
    account_number= 123;
    balance = 1000;
    roi = new int[100]; // to get resources in advance
    cout<<"Constructor call"<<endl;
}  
//paramertrised constructor
// Customer(string name,int account_number,int balance) { 
//     this->name= name;
//     this->account_number=account_number;
//     this->balance= balance;

// }  // Constructor overloading
  Customer (string name,int account_number) {
    this->name=name;
    this->account_number = account_number;
    
  }

  // Inline constructor
  inline Customer (string a,int b,int c): name(a),account_number(b),balance(c) {

  }
  //copy constructor - refrence is important othrwise infinite call ocuurs
  Customer (Customer &B) {
    name = B.name;
    account_number = B.account_number;
    balance = B.balance;
    
  }         

 public:
 void Display() {
    cout<<name<<" "<< account_number<<"  "<<balance<<" "<<endl;
 }
 //Destructor - only one destructor in one class, it delete(release) the memory of  the attribute which got dynamic memory alloaction (heap),close file, relase dynamic memory 
 // call in reverse order                         
 ~ Customer() {  
    cout<<name<<endl;  
    //delete roi;      
    cout<<"destructor call"<<endl;
 }
};
int main() {
    Customer A1;
    Customer A2("Dhruv",23,1000);
    Customer A3("Yash",27);  // it will take garbbage value of balance
    A1.Display();
    A2.Display();
    A3.Display();
    Customer A4(A3);
    A4.Display();
    Customer A5;
    A5 = A3;
    A5.Display();
    Customer *A6 = new Customer;
    delete A6; 
}

// above concept is constructor overloading 