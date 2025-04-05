#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {  // Virtual function
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void makeSound() override { // Overriding base class function
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* animalPtr; // Pointer to base class
    Dog dogObj;
    
    animalPtr = &dogObj;  // Base class pointer points to derived class object
    animalPtr->makeSound(); // Calls Dog's version of makeSound()

    return 0;
}
