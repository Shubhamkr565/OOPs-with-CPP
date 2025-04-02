// Define a `BankAccount` class with deposit and withdraw methods.

#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    private:
        double balance;

    public:
        BankAccount(double initialBalance){
            balance = initialBalance;
        }

        void deposite(double amount){
            balance += amount;
            cout<<"Deposite Amount: "<<amount<<", Current balance: "<<balance<<endl;
        }
        void withdraw(double amount){
            if (amount > balance){
                cout<<"Insufficient balance"<<endl;
            }else{
                balance -= amount;
                cout<<"Withdrow amount: "<<amount<<", Current balance: "<<balance<<endl;
            }
        }
        void balanceCheck(){
            cout<<"Current Balance Avalable: "<<balance<<endl;
        }
        
};

int main(){
    BankAccount myAcc(10000);
    myAcc.deposite(20000);
    myAcc.withdraw(3000);
    myAcc.balanceCheck();
    
    return 0;
}