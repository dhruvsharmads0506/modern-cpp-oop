#include<iostream>
using namespace std;
  // static : they are the attributes of clases or class members,nly create one time
  // we can acess it without object by using public , by scope resolution operator (::)
  // static member function :  it can direct acess on the static attribut even if it is private
class customer {
  
    string name;
    int account_num, balance;
    // static attribute
    static int total_balance;
    static int  total_customer; // it retains the value , only one copy share by other .
    public:
     //static int  total_customer;
    customer(string name,int account_num,int balance) {
        this->name = name;
        this->account_num = account_num;
        this->balance = balance;
        total_customer++;
        total_balance+=balance;
    }     
    void display () {
        cout<<name<<" "<<account_num<<" "<<balance<<" "<<total_customer <<endl;
    }        
    void display_total() {
        cout<<total_customer<<endl;
    }  
    //static function , it only access the static attribute ..not other attribute because they are part of object not class
    static void accesStatic() {
       cout<<"Total number of customer : "<< total_customer<<endl;
       cout<<"Total Balance : "<<total_balance<<endl;
    }       
    
    void deposite(int amount) {
        if(amount>0) {
            balance+=amount;
            total_balance+=amount;
        }
    }

    void withdraw(int amount) {
       if(amount<=balance && amount>0) {
        balance-=amount;
        total_balance-=amount;
       } 
       else {
        cout<<"Balance is low"<<endl;
       }
    }
};
int customer :: total_customer =0; //initialise 
int customer :: total_balance =0;

int main() {
    customer A1("Rohit",1,1000);
    customer A2("Mohit",2,1900);
 
    A1.display();  
    A2.display();
     customer A3("summit",4,400);
    A3.display();
    A3.display_total();
    //customer :: total_customer = 10;
    //cout<<customer::total_customer;
    customer::accesStatic();
    A1.deposite(8000);
    customer::accesStatic();
    A2.withdraw(500);
    customer::accesStatic();
    return 0;
}
// we make static which are common to all objects ,it part of class not a object

// const - const means read-only — the value cannot be changed after initialization
//Feature	                      const                      	  static
// Meaning  	           Value cannot change     	              Shared across objects
// Memory	               Per object	Single                    shared memory
// Initialization	       At declaration or constructor	          Outside class definition
// Access	                    Through object	                  Through class
// Modification	                Not allowed	                      Allowed (unless const)
// Use Case                 	Fixed values                      Common data for all objects

// const = protection
// static = sharing

class BankAccount {
    const int accountNumber;      // unique & fixed
    static float interestRate;    // common for all accounts

public:
    BankAccount(int acc) : accountNumber(acc) {}
};
