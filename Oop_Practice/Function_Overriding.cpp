//============================================================================
// Demonstrate function overriding (same function name in base and derived classes)

// Base class
// class parent{
//     public:
//     void calling_fn(){
//         cout<<"this is a parent class , and calling this fn"<<endl;
//     }
// };

// Derived class (overrides calling_fn())
// class derived:public parent{
//     public:
//     void calling_fn(){
//         cout<<"this is the derived class , and calling this fn"<<endl;
//     }
// };

/*
Explanation:

1) If we create an object of the base class:
   parent p;
   p.calling_fn();

   ➜ Output will be from the parent class
   Because base class object always calls its own function.

2) If we create an object of the derived class:
   derived d;
   d.calling_fn();

   ➜ Output will be from the derived class
   Because derived class overrides the base class function.

Note:
- No virtual keyword is used here.
- Function call depends on the OBJECT type, not pointer type.
- This is function overriding, but NOT runtime polymorphism.
*/
//============================================================================

//======================================================================================================================
//Write a program that shows runtime polymorphism using virtual functions.
#include <iostream>
using namespace std;
class parent{
    public:
  virtual void calling_fn(){
        cout<<"this is a parent class , and calling this fn"<<endl;
    }
};
class derived:public parent{
    public:
    void calling_fn(){
        cout<<"this is the derived class , and calling this fn"<<endl;
    }
};



// Driver code
int main() {
    parent* p;
    derived d;

    p = &d;          // Base class pointer pointing to derived object
    p->calling_fn(); // Runtime decision

    return 0;
}

