#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class Employee{
    public:
        string name;
        int attendance;
        int salary;
        double amount;

        Employee(string n, int att, int sal){
            name =  n;
            attendance = att;
            salary = sal;
            calculateAmount();
        }
        void calculateAmount(){
            double dailySalary = static_cast<double>(salary) / 30;
            amount = dailySalary*attendance;
        }

        void display(){
            cout<<" Name: "<<name
                <<" | Attendance: "<<attendance<< " /30"
                <<" | Salary: "<<salary
                <<" | Amount Earned: RS"<<fixed<<setprecision(2)<<amount
                <<endl;
        }
};

int main(){
    Employee Khalipha("Khalipha" , 28, 12000);
    Employee Nepali("Nepali", 29, 12000);
    Employee Dhanu("Dhanu", 25, 90000);
    Employee Arun("Arun", 30, 8000);
    Employee Baliram("Baliram",26, 10000);
    Employee RamaSankar("RamaSankar", 24, 10000);

    cout<<"Shubham Sattu Employee"<<endl;
    cout<<"======================"<<endl;

    Khalipha.display();
    Nepali.display();
    Dhanu.display();
    Arun.display();
    Baliram.display();
    RamaSankar.display();

    return 0;
}