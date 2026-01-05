//•	Write a program to show constructor and destructor order in inheritance.
#include<iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of A" << endl;
    }
    ~A() {
        cout << "Destructor of A" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of B" << endl;
    }
    ~B() {
        cout << "Destructor of B" << endl;
    }
};

class C : public B {
public:
    C() {
        cout << "Constructor of C" << endl;
    }
    ~C() {
        cout << "Destructor of C" << endl;
    }
};

// Driver code
int main() {
    C obj;   // Creating object of most derived class
    return 0;
}

/*
🔥 Explanation
✔ Constructor Order → Base to Derived

A’s constructor

B’s constructor

C’s constructor

Because each derived class must fully construct its base part first.

******************************************************
✔ Destructor Order → Derived to Base (Reverse Order)

C’s destructor

B’s destructor

A’s destructor

Because destruction happens in the reverse order of construction. */