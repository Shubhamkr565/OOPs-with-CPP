#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    // Private data members (encapsulated)
    string name;
    int age;
    double gpa;

public:
    // Public member functions (interface)
    // Constructor
    Student(string n, int a, double g) {
        name = n;
        setAge(a);  // Using setter to validate
        setGpa(g);  // Using setter to validate
    }

    // Setter methods with validation
    void setAge(int a) {
        if (a >= 0 && a <= 150) {
            age = a;
        } else {
            age = 0;  // Default value if invalid
            cout << "Invalid age provided\n";
        }
    }

    void setGpa(double g) {
        if (g >= 0.0 && g <= 4.0) {
            gpa = g;
        } else {
            gpa = 0.0;  // Default value if invalid
            cout << "Invalid GPA provided\n";
        }
    }

    // Getter methods
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    double getGpa() {
        return gpa;
    }

    // Display method
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    // Create a Student object
    Student student1("Alice", 20, 3.8);

    // Access through public methods
    cout << "Initial Information:\n";
    student1.displayInfo();

    // Try to set invalid values
    student1.setAge(-5);    // Will trigger validation
    student1.setGpa(5.0);   // Will trigger validation

    cout << "\nAfter attempting invalid updates:\n";
    student1.displayInfo();

    // Direct access to private members is not possible
    // student1.name = "Bob"; // This would cause a compilation error

    return 0;
}