// Implement a `Bank` class where user data is private and accessed through functions.

#include <iostream>
#include <string>
using namespace std;

class Bank{
    private:
        string name;
        int balance;
    public:
        // setter methods
        void setName(string n){
            name = n;
        }
        void setBalance(int initialBalance){
            balance = initialBalance;
        }
        // getter methods
        string getname(){
            return name;
        }
        int getbalance(){
            return balance;
        }
        void display(){
            cout<<"Customer Name: "<<name<<", Balance: "<<balance<<endl;
        }
};

int main(){
    Bank sbi;
    sbi.setName("Shubham");
    sbi.setBalance(1200);
    sbi.display();
    return 0;
}