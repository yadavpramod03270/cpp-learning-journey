//friend function accessing two classes
#include <iostream>
using namespace std;
class B; // forward declaration
class A{
    private:
    int  x;
    public:
    A(int val) : x(val){}
    friend void show(A obj1, B obj2); // friend function 
};
class B{
    private:
    int y;
    public:
    B(int val):y(val){}
    friend void show(A obj1, B obj2); // friend function 
    
};
void show(A obj1, B obj2){
    cout<<"A.x would be:  "<<obj1.x<<endl;
    cout<<"B.y would be:  "<<obj2.y<<endl;
}



// Driver code
int main() {
    A a1(10);
    B b1(20);

    // Friend function can access private members of both classes
    show(a1, b1);

    return 0;
}

/*
Explanation & Important Points:

1) What is happening here:
   - `show()` is a **friend function** of both `A` and `B`.
   - It can access **private members** `x` of `A` and `y` of `B` directly.
   - Friend function is **not a member** of any class but has access to private/protected data.

2) Why forward declaration is needed:
   - `class B;` tells the compiler that a class B exists.
   - Necessary because `A` declares `show()` as a friend using `B`, which is defined later.

3) Key properties of friend functions:
   - Not called using an object (`a1.show()`   
   - Called like a normal function: `show(a1, b1);`  
   - Can access private/protected members of the class that declares it as friend.  
   - Friendship is **not inherited**.  

4) Use-cases:
   - Operator overloading (e.g., `+`, `<<`, `>>`)  
   - Functions that need access to multiple classes' internals  
   - Utility/helper functions that logically operate on multiple classes

5) Notes:
   - Friendship is **one-way**: just because `show` is friend of `A` and `B` doesn't mean `A` or `B` are friends of each other.
   - Overuse of friend functions can break encapsulation, so use **sparingly**.

*/