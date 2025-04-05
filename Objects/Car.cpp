// Create a `Car` object with attributes like brand, model, and year, and display them.

#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;

    void display(){
        cout<<"Car Brand Name: "<<brand<< " Model: "<<model<<" Year: "<<year<<endl;
    }
};

int main(){
    Car mycar1 = {"Mahindra", "XUV500", 2018};
    mycar1.display();

    // Car mycar;
    // mycar.brand = "Toyota";
    // mycar.model = "Corolla";
    // mycar.year = 2026;
    // mycar.display();

    return 0;
}