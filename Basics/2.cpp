#include<bits/stdc++.h>
using namespace std;

class A {
    public:
    int b; // 4 byte
    char d;
    char c;
    
};

int main() {
cout<<sizeof(A);
A *obj = new A; // dynamic memory alloction                        
//cout<<sizeof(obj);
(*obj).b = 12;
cout<<obj->b;
return 0;
}