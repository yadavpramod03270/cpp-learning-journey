#include<bits/stdc++.h>
using namespace std;
class Student {
    string name;
    int age;
    const int id;   // const â†’ must be initialized using list

public:
    // initialization list
    Student(string n, int a, int i)
        : name(n), age(a), id(i)
    {
        cout << "Constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name
             << "\nAge: " << age
             << "\nID: " << id << endl;
    }
};

int main() {
    Student s("Pramod", 20, 101);
    s.display();

    return 0;
}
/*
//•	Write a program to demonstrate constructor and destructor execution.
class Student{
    public:
    string name;
    int rollNo;
    int marks;
    Student(string stdname, int stdrollNo, int marks):name(stdname), rollNo(stdrollNo),marks(marks){
        cout<<"the students info is:  "<<"\nname: "<<name <<"\nrollNo: "<<rollNo<<"\nmarks: "<<marks<<endl;
    }
    
    ~Student() {
        cout << "Destructor called for: " << name << endl;
    }

};

 

class Sample {
public:
    Sample() {
        cout << "Constructor called" << endl;
    }

    ~Sample() {
        cout << "Destructor called" << endl;
    }
};

//imp notes::============================================================================
// ? Key Rule in C++

// Objects created inside a function are destroyed in the reverse order of their definition in that function.

// NOT reverse order of creation.
// Reverse order of declaration in the source code.

// ?? Look at your variable declarations inside main():
// Student s("pramod",15,98);   // 1st declared
// Sample a, b, c;              // 2nd declared (3 objects)

// Order of DESTRUCTION is:
// 1) c
// 2) b
// 3) a
// 4) s    <-- Student destructor is last

// Why is s last?

// Because:

// s is declared before a, b, c

// Destructors run in the reverse order of declarations

// So all the Sample objects (a, b, c) are destroyed first

// Then finally, the Student object s is destroyed

// ?? Think of it like a stack

// When variables are created inside a function:

// Top of stack:
// c
// b
// a
// s
// Bottom of stack


// When the function ends, stack unwinds from top to bottom:

// destroy c
// destroy b
// destroy a
// destroy s  <-- last

// ?? Summary (Important for Viva / Exams)

// C++ destroys local objects in reverse order of declaration

// NOT reverse order of creation


// Your Student destructor is last because it was declared first
*/

