//Encapsulation : wrapping up of data & information in  single unit , while  controlling access to them.
// It is use to maintain security of data
// Like capsule medicine
// EX- Class -> variable + function/methos -> cpnstrol acess (private/protected)
// we can acheive data using encapsultion ie security
// access modidier -  public,private,protected
// maintain  
#include<iostream>
using namespace std;

class Customer { 
    string name;
    int account_number,balance;
     int age;
    public:
   // int age;
    Customer(string name,int account_number,int balance,int age) {
        this->name= name;
        this->account_number= account_number;
        this->balance = balance;
        this->age =age;

    } 
    void deposite(int amount) {
       if(amount>0) {
        balance+=amount;
       }
       else {
        cout<<"Invalid Amount"<<endl;
       }
       

    }
     void updateAge(int age) {
        if(age>0 && age<=100) {
            this->age= age;
        }
        else {
            cout<<"Invalid Age"<<endl;
        }
     }

    void withdraw(int amount) {
        if(amount<=balance&&amount>0) {
            balance-=amount;
        } else {
            cout<<"Balance is not sufficient"<<endl;
        }
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<endl;
    }
};

int main() {
    Customer A1("Rohit",1,100,22);
    Customer A2("Mohit",2,230,18);
    Customer A3("Mohan",3,2000,40);
   // A1.balance+= -10;
    A1.deposite(-10);
   // A1.age = 120;
     A1.updateAge(111);
     A1.updateAge(23);
    A1.display();
}


