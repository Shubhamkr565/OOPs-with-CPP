// Create a `Rectangle` object with methods to calculate area and perimeter.

#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    int display_area() {
        return length * width;
    }

    int display_perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(10, 20);  // Now, we can initialize directly

    cout << "Area of Rectangle: " << rect.display_area() << endl;
    cout << "Perimeter of Rectangle: " << rect.display_perimeter() << endl;

    return 0;
}
