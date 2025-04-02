// Define a `Person` class with name, age, and a method to display details.

#include <iostream>
#include <string>
using namespace std;


class Person{
    private:
        string name;
        int age;

    public:
    void setDetail(string n, int a){
        name = n;
        age = a;
    }

    void display(){
        cout<<"Name: "<<name<<" ! Age: "<<age<<endl;
    }
};

int main(){
    // Person p1 = {"Shubham", 25};
    Person p1;
    p1.setDetail("Shubham", 25);
    p1.display();

    return 0;
}