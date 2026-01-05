#include<iostream>
using namespace std;
// 	Demonstrate the use of this pointer in a class method.
class Student1{
    public:
    string name;
    int age;
    void setdata(string name, int age){
        this->name=name;
        this->age=age;// if we dont use 'this ' , so variable will assign to variable .....member NEVER changes
                     //So the object data will NOT update.
    }
    void display(){
           cout << "Name: " << this->name << endl;
           cout << "Age: " << this->age << endl;
    }
};
int main(){
    Student1 s1;
    s1.setdata("pramod",25);
    
    s1.display();
    return 0;
}