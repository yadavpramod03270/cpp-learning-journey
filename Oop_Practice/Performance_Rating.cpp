//Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
//Include member functions to calculate and set salary based on employee performance.

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int empID;
    float salary;

public:
    // Constructor
    Employee(string n, int id, float sal) {
        name = n;
        empID = id;
        salary = sal;
    }

    // Function to update salary based on performance rating
    // Rating: 1 = Poor, 2 = Average, 3 = Good, 4 = Excellent, 5 = Outstanding
    void setSalaryByPerformance(int rating) {
        float increment = 0;

        switch (rating) {
            case 1: increment = 0; break;               // no increment
            case 2: increment = salary * 0.05; break;   // +5%
            case 3: increment = salary * 0.10; break;   // +10%
            case 4: increment = salary * 0.20; break;   // +20%
            case 5: increment = salary * 0.30; break;   // +30%
            default:
                cout << "Invalid performance rating!" << endl;
                return;
        }

        salary += increment;
        cout << "Salary updated based on performance!" << endl;
    }

    // Get salary
    float getSalary() {
        return salary;
    }

    // Display employee details
    void display() {
        cout << "\nEmployee Details:" << endl;
        cout << "Name         : " << name << endl;
        cout << "Employee ID  : " << empID << endl;
        cout << "Salary       : " << salary << endl;
    }
};

int main() {
    // Creating an employee object
    Employee e("Pramod Yadav", 101, 30000);

    e.display();

    int rating;
    cout << "\nEnter performance rating (1-5): ";
    cin >> rating;

    e.setSalaryByPerformance(rating);

    cout << "\nUpdated Salary: " << e.getSalary() << endl;
    cout << endl;

    e.display();

    return 0;
}