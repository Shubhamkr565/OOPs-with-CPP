#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void honk() {
        cout << "Vehicle is honking!" << endl;
    }
};

class Car : public Vehicle {
public:
    void honk() override {
        cout << "Car says: Beep Beep!" << endl;
    }
};

class Bike : public Vehicle {
public:
    void honk() override {
        cout << "Bike says: Pee Pee!" << endl;
    }
};

int main() {
    Car XUV700;
    XUV700.honk();

    Bike RoyalEnfield;
    RoyalEnfield.honk();

    Vehicle* v;
    Car c;
    Bike b;

    v = &c;
    v->honk();

    v = &b;
    v->honk();

    return 0;
}
