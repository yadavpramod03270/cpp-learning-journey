//	Implement single inheritance: Base class Person, derived class Employee.
#include<iostream>
using namespace std; 
class person{
    public:   
    string name;
    int job_id;
    string designation;
    
    void detailes(string name ,int job_id,string designation){
        this->name=name;
        this->job_id=job_id;
        this->designation=designation;
        cout<<"name::   "<< this->name<<"\njob_id:  "<<this->job_id<<"\ndesignation: "<<this->designation<<endl;
    }
};
class Employee:public person{
    public:
    void more_detailes( ){
        cout<<"he is very hard working and always keep in mind about the deadlines and he is the best Employee"<<endl;
        cout<<name<<": should deverse Employee of the month award and will have to get promotions "<<endl; 
    }
};
int main() {
    Employee e1;

    e1.detailes("Pramod Yadav", 101, "Software Engineer");
    e1.more_detailes();

    return 0;
}