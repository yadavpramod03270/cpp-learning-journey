// •Implement a calculator using operator overloading.
#include <iostream>
using namespace std;

class Calculator {
public:
    float value;

    Calculator() : value(0) {}
    Calculator(float v) : value(v) {}

    // Operator Overloading
    Calculator operator+(const Calculator& obj) {
        return Calculator(this->value + obj.value);
    }

    Calculator operator-(const Calculator& obj) {
        return Calculator(this->value - obj.value);
    }

    Calculator operator*(const Calculator& obj) {
        return Calculator(this->value * obj.value);
    }

    Calculator operator/(const Calculator& obj) {
        if (obj.value == 0) {
            cout << "Error: Division by zero!" << endl;
            return Calculator(0);
        }
        return Calculator(this->value / obj.value);
    }
};

int main() {
    float a, b;
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    Calculator num1(a), num2(b);

    cout << "\n--- Calculator Results ---\n";
    cout << "Addition: " << (num1 + num2).value << endl;
    cout << "Subtraction: " << (num1 - num2).value << endl;
    cout << "Multiplication: " << (num1 * num2).value << endl;
    cout << "Division: " << (num1 / num2).value << endl;

    return 0;
}