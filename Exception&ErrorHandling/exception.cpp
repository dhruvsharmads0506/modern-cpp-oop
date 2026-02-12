#include<iostream>
using namespace std;
// custom exception name
class InvalidAmountError : public runtime_error {
public:
InvalidAmountError(const string &msg) : runtime_error(msg){};
};
class InsufficientBalanceError : public runtime_error {
public:
InsufficientBalanceError(const string &msg) : runtime_error(msg){};
};

class Customer {
string name;
int balance,account_number;

public:
Customer(string name,int balance,int account_num) {
    this->name=name;
    this->balance=balance;
    this->account_number=account_num;
}
// deposite

void Deposite(int amount) {
    if(amount>0) {
        balance+=amount;
        cout<<amount<<"rs is credited sucessfully\n";
    }
    else {
        throw  InvalidAmountError("Invlaid Input");
    }
}
//withdraw
void withdraw(int amount) {
    if(amount>0 && amount<=balance) {
        balance-=amount;
        cout<<amount<<"rs is deboted successfulyy\n";
    }
    else if(amount<0) {
        throw runtime_error( "amount should greater than zero");
    }
    else {
        throw InsufficientBalanceError ( "Your balance is low");
    }
}

};

int main() {
    Customer C1("Dhruv",500,10);
    try {
    C1.Deposite(100);
    C1.Deposite(500);
    C1.withdraw(100000); 
    C1.Deposite(300);
}
catch(const InvalidAmountError &e) {
    cout<<"Exception Occured :"<<e.what()<<endl;
}
catch(const InsufficientBalanceError &e) {
    cout<<"Exception : "<<e.what()<<endl;
}
catch(...) {
    cout<<"Exception Ocuured"<<endl;
} // default catch it run when above error or excetion no match
}

// we can write multiple catch block