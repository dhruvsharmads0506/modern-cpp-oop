#include<iostream>
#include<exception>
//#include<new>
using namespace std;
//sample for undrstanding of exception class
// class exception {
// protected:
// string msg;
// public:
// exception(string msg) {
//     this->msg=msg;
// }
// string what() {
//     return msg;
// }
 
// };


int main(){
    try {
    size_t n = 1000000000;
    int *p = new int [n];
    cout<<"Memory allocation is sucess"<<endl;
    delete []p;
    }
    catch (const exception &e) { 
        cout<<"Exception Occured due to line 10 :"<<e.what()<<endl; 
    }
    // we can also use bad_alloc rather than exception
}