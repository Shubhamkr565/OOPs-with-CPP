#include <iostream>  
using namespace std; // Use standard namespace

// Base class (Parent class)
class Animal {
public:
    // Function to show that the animal eats food
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class (Child class) inheriting from Animal
class Dog : public Animal {
public:
    // Function specific to Dog class
    void bark() {
        cout << "This dog barks." << endl;
    }
};

int main() {
    Dog myDog;   // Creating an object of the Dog class

    myDog.eat();  // Calling inherited function from Animal class
    myDog.bark(); // Calling function from Dog class

    return 0; // Indicate successful program execution
}
