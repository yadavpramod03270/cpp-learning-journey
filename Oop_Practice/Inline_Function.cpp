#include <iostream>
using namespace std;

// Class with inline functions
class Math {
public:
    // Inline function to add two numbers
    inline int add(int a, int b) {
        return a + b;
    }

    // Inline function to multiply two numbers
    inline int multiply(int a, int b) {
        return a * b;
    }
};

// Driver code
int main() {
    Math m;

    int x = 10, y = 5;

    cout << "Addition: " << m.add(x, y) << endl;
    cout << "Multiplication: " << m.multiply(x, y) << endl;

    return 0;
}
