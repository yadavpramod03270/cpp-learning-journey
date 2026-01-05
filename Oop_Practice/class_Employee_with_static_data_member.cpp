// Create a class Employee with static data member count that keeps
#include <iostream>
using namespace std;

// Employee class
class Employee {
public:
    static int count;

    Employee() {
        count++;
    }

    static void showcount() {
        cout << "Total employees: " << count << endl;
    }
};

// Define static variable
int Employee::count = 0;

// Driver code
int main() {
    Employee::showcount();   // Before creating objects

    Employee e1;
    Employee e2;
    Employee e3;

    Employee::showcount();   // After creating objects

    return 0;
}
