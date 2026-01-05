#include<iostream>
using namespace std; 
// Implement multiple inheritance: Father and Mother → Child.
class father{ 
    public:
    string fathername;
    int age;
    void show(string name, int age){
        fathername=name;
        this->age=age;
        cout<<"he is the father and his name and age is :"<<fathername<<" "<<this->age<<endl;
    }
};


class mother{
    public:
    string mothername;
    int age;
    void show_motherdata(string name, int age){
      mothername=name;
      this->age=age;
        cout<<"she is the mother and her name and age is :"<<mothername<<" "<<this->age<<endl;
    }
};
class son:public father , public mother{
    public:
    string name;
    void childdata(string name){
        this->name=name;
        cout<<name<<" is the son of "<<fathername << "  and  "<<mothername<<endl;
    }
};
int main() {
    son s1;

    s1.show("Ramesh", 45);                 // Father data
    s1.show_motherdata("Sita", 42);        // Mother data
    s1.childdata("Aman");                  // Child data

    return 0;
}