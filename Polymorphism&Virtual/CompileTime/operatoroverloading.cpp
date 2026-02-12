#include<iostream>
using namespace std;


class Complex {
    int real,img;
    public:
    Complex(){

    };
    Complex(int real,int img) {
        this->real=real;
        this->img=img;
    }

    void Display() {
        cout<<real<<" +i "<<img;
    }
    Complex operator+(Complex &C) {
      Complex ans;
      ans.real = real+C.real; 
      ans.img = img+C.img;
      return ans;

    }

//🔎 Inside operator+
// real → C1.real
// img → C1.img
// C.real → C2.real
// C.img → C2.img
};
// with in the class same type ke object ke private members ko acess kr skte hai


int main() {
Complex C1(3,4);
Complex C2(4,6);
Complex C3 = C1+C2;  //Complex C3 = C1.operator+(C2); , c1.fun(C2)


C3.Display();

};