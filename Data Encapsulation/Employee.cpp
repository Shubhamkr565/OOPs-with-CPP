// Implement an `Employee` class with private salary and public methods to set and get salary.

#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        string name;
        int salary;
    public:
        void setSalary(int s){
            salary = s;
        }
        void setName(string n){
            name = n;
        }

        string getName(){
            return name;
        }
        int getSalary(){
            return salary;
        }
        void display(){
            cout<<"Employee Name: "<<name<<", Employee Salary: "<<salary<<endl;
        }
};

int main(){
    Employee s1;
    s1.setName("Shubham");
    s1.setSalary(2000000);
    s1.display();
    return 0;
}