// Implement a `Person` base class and inherit `Employee` and `Student` from it.

#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
        string name;
        
    public:
        Person(string n){
            name = n;
        }
};

class Employee: public Person{
    public:
        string Emp_Id;
        int code;
    Employee(string n, string i, int c): Person(n){
        Emp_Id = i;
        code = c;
    }

    void display(){
        cout<<"Employee Name: "<<name<<", Emp_id: "<<Emp_Id<<", Emp_Code: "<<code<<endl;
    }
};

class Student: public Person{
    public:
        string Class_Name;
        int roll;

    Student(string n, string c, int r): Person(n){
        Class_Name = c;
        roll = r;
    }

    void display(){
        cout<<"Student Name: "<<name<<", Student Class: "<<Class_Name<<", Roll: "<<roll<<endl;
    }
};

int main(){
    Employee e1("Ram", "abcd", 1010);
    e1.display();

    Student s1("Rohit", "QWER", 1020);
    s1.display();
    return 0;
}