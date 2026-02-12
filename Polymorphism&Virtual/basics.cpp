//PolyMorphism
// Poly -> MANY , MORPHISM -> FORM
//       Polymorphism
//             |
//             |
//          /     \
//(Static Binding)   (Dynamic Binding)       /   \
//compile time     Run Time
//(Overloading)    (Overridding)
// 1) Function       1)Virtual Function (Method Overriding)
// 2) Operator


// Compile Time -  syntax check , conveert high level code into low level
// RunTime - It execute the code ,run code

//Compile Time/ Overloading
// It is a type of polymorphism where the function call is resolved at compile time.
// The compiler decides which function to execute based on the number, type, or order of arguments.
// VIP - IT can't decide on basis of return type only 
// int add(int a, int b);
// float add(int a, int b);   // ❌ ERROR
// 🔑 How it is Achieved
// 1️⃣ Function Overloading
// 2️⃣ Operator Overloading (C++ only)

//Operator Overloading
//Operator overloading allows us to give special meaning to operators (+, -, *, ==, etc.) when they are used with user-defined data types (classes).
// ❌ Operators that CANNOT be overloaded
// :: (Scope resolution),. (Member access),?: (Ternary),sizeof
// EG - 5+6 => 11
// "Dhruv"+"Sharma" => Dhruv sharma
// same operator but diffrent function (forms)


//Run Time Polymorphism
// Runtime polymorphism is achieved using virtual functions.
// It means which function will run is decided at runtime, not at compile time.
// virtal function :
// A virtual function is a member function of a class that is declared using the keyword virtual and is overridden in a derived class.
// The function call depends on the type of object being pointed to, not the type of pointer.
// why ?
//Without virtual functions, C++ uses compile-time binding (early binding).
//With virtual functions, C++ uses dynamic binding (late binding).

// Pure virtual function
// Used to create Abstract Class
// A pure virtual function has no implementation in the base class and is written as:
// virtual void show() = 0;

// virtual destructor:
// Prevents Memory Leak
//If a base class pointer deletes a derived class object without a virtual destructor,
// Derived class destructor will NOT be called
// his causes resource leakage.







 

