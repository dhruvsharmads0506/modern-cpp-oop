// Hybrid Inheritance :
// Combination of two or more types of inheritance.
// Usually includes multiple + multilevel
// Java does not support hybrid inheritance using classes
// Achieved using interfaces
// Hybrid inheritance may cause ambiguity if the same base class is inherited multiple times.(DIamond Problem)
// SOL - USE VIRTUAL KEYWORD
        //     Vehicle
        //    /       \
        // Car        Bike
        //    \       /
        //   ElectricVehicle

// Vehicle → parent
// Car & Bike → hierarchical inheritance
// ElectricVehicle → multiple inheritance

#include<iostream>
using namespace std;

//student
//boy
//girl
//Male
//female

class Student {
    public:
    void print() {
        cout<<"I am Student"<<endl;
    }
};

class Male {
public:
void MalePrint() {
    cout<<"I am Male"<<endl;
}
};

class Female {
public:
void FemalePrint() {
    cout<<"I am FeMale"<<endl;
}
};

class Boy : public Student,public Male{
    public:
    void BoyPrint() {
    cout<<"I am Boy"<<endl;
   }
};

class Girl : public Student ,public Female{
    public:
    void GirlPrint() {
        cout<<"I am Girl"<<endl;
    }
};

int main() {
    Girl G1;
    G1.print();
    G1.FemalePrint();
    G1.GirlPrint();
    Boy B1;
    B1.print();
    B1.BoyPrint();
    B1.MalePrint();
}

    // Male   Student       Female
    // ↑      ↑      ↑       ↑
    //  \  /        \    /
    //   Boy         Girl
    //              
    //               