#include <iostream>
using namespace std;

//•	Write a program showing hybrid inheritance and explain how ambiguity is resolved.
//hybrid inheritance: it is the combination of more than one type of inheritance
class A{
    public:
    void show(){
        cout<<"show from class A"<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"display from class B"<<endl;
    }
};
class C{
    public:
    void show(){
        cout<<"show from class C"<<endl;
    }
};
class D:public B,public C{
    public:
    void test(){
        cout<<"test from class D"<<endl;
    }
} ;



// Driver code
int main() {
    D obj;

    obj.display();     // from class B
    obj.test();        // from class D

    // Ambiguity resolution
    obj.B::show();     // calls show() from class A via B
    obj.C::show();     // calls show() from class C

    return 0;
}
