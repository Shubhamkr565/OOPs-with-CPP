// Create an `Employee` object and initialize it using a constructor.

#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    int code;
 // Constructor with a debug message
    Employee (string n, int c){
        name = n;
        code = c;
    }

    void display(){
        cout<<"Name of Employee: "<<name<<"! Employee Code: "<<code<<endl;
    }
};

int main(){
    Employee emp("Amit", 123);
    emp.display();

    return 0;
}