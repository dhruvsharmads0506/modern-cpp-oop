// abstraction : display only essentail information and hidding the details
//Abstraction means showing only what is necessary and hiding how it works.
//Focus on WHAT an object does
//Not on HOW it does it
// When you use a mobile phone:
//You know call(), message()
//You don’t know internal circuitry
// Abstraction         	Encapsulation
// What                	How
// Design	            Security
// Hides logic         	Hides data
// Interface level     	Implementation level
// eg you use instagram for chat but you dont know how data travel or move to recevier
//hide to so that other not see and copy 

#include <iostream>
using namespace std;

// 🔹 Abstract Class
class Payment {
public:
    // Pure virtual function → makes class abstract
    virtual void pay(int amount) = 0;

    // Virtual destructor (important in abstraction)
    virtual ~Payment() {}
};

// 🔹 Credit Card Payment
class CreditCard : public Payment {
public:
    void pay(int amount) override {
        cout << "Validating credit card..." << endl;
        cout << "Processing credit card payment of ₹" << amount << endl;
        cout << "Payment successful via Credit Card!" << endl;
    }
};

// 🔹 UPI Payment
class UPI : public Payment {
public:
    void pay(int amount) override {
        cout << "Verifying UPI ID..." << endl;
        cout << "Processing UPI payment of ₹" << amount << endl;
        cout << "Payment successful via UPI!" << endl;
    }
};

int main() {

    Payment* payment;   // Abstract class pointer

    CreditCard cc;
    UPI upi;

    cout << "---- Credit Card Payment ----" << endl;
    payment = &cc;
    payment->pay(1000);

    cout << endl;

    cout << "---- UPI Payment ----" << endl;
    payment = &upi;
    payment->pay(2000);

    return 0;
}

