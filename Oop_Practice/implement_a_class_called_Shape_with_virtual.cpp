#include<bits/stdc++.h>
using namespace std;
// Write a C++ program to implement a class called Shape with virtual member functions for calculating area and perimeter. 
//Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.
 

class Shape {
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
    virtual ~Shape() {}   // virtual destructor
};

class Circle : public Shape {
    float r;
public:
    Circle(float radius) : r(radius) {}

    float area() override {
        return 3.14f * r * r;
    }

    float perimeter() override {
        return 2 * 3.14f * r;
    }
};

class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() override {
        return length * width;
    }

    float perimeter() override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
    float a, b, c; // three sides
public:
    Triangle(float x, float y, float z) : a(x), b(y), c(z) {}

    float area() override {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));  // Heron's formula
    }

    float perimeter() override {
        return a + b + c;
    }
};

int main() {
    Shape *s;

    s = new Circle(10);
    cout << "Circle Area = " << s->area() << endl;
    cout << "Circle Perimeter = " << s->perimeter() << endl;
    delete s;

    s = new Rectangle(10, 5);
    cout << "Rectangle Area = " << s->area() << endl;
    cout << "Rectangle Perimeter = " << s->perimeter() << endl;
    delete s;

    s = new Triangle(3, 4, 5);
    cout << "Triangle Area = " << s->area() << endl;
    cout << "Triangle Perimeter = " << s->perimeter() << endl;
    delete s;

    return 0;
}