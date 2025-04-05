#include <iostream>
#include <string>
#include <cmath>  // for M_PI
using namespace std;

class Shape {
protected:
    string color;
public:
    Shape(string c) {
        color = c;
    }
    virtual void display() = 0;  // Pure virtual function (optional)
};

// Circle class
class Circle : public Shape {
private:
    float radius;
    float area;
public:
    Circle(float r, string c) : Shape(c) {
        radius = r;
        area = M_PI * radius * radius;
    }

    void display() {
        cout << "Circle => Radius: " << radius << ", Area: " << area << ", Color: " << color << endl;
    }
};

// Rectangle class
class Rectangle : public Shape {
private:
    float length, breadth;
    float area;
public:
    Rectangle(float l, float b, string c) : Shape(c) {
        length = l;
        breadth = b;
        area = length * breadth;
    }

    void display() {
        cout << "Rectangle => Length: " << length << ", Breadth: " << breadth
             << ", Area: " << area << ", Color: " << color << endl;
    }
};

// Triangle class
class Triangle : public Shape {
private:
    float base, height;
    float area;
public:
    Triangle(float b, float h, string c) : Shape(c) {
        base = b;
        height = h;
        area = 0.5 * base * height;
    }

    void display() {
        cout << "Triangle => Base: " << base << ", Height: " << height
             << ", Area: " << area << ", Color: " << color << endl;
    }
};

int main() {
    Circle c1(7.0, "Blue");
    c1.display();

    Rectangle r1(10.0, 5.0, "Green");
    r1.display();

    Triangle t1(8.0, 6.0, "Pink");
    t1.display();

    return 0;
}
