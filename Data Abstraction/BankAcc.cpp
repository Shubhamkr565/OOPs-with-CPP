// Create a `BankAccount` class where balance is private and can be modified only by deposit and withdraw functions.

#include <iostream>
#include <string>
using namespace std;

class BankAcc{
    private:
        double balance;
    public:
        BankAcc(double initialBalance){
            balance = initialBalance;
        }

        void deposit(double amount){
            balance += amount;
            cout<<"Deposit ....Amount: "<<amount<<" Current Balance: "<<balance<<endl;
        }

        void withdraw(double amount){
            if (amount <= balance){
                balance -= amount;
                cout<<"Withdraw ....Amount: "<<amount<<" Current Balance: "<<balance<<endl;
            }else{
                cout<<"Insufficient balance!"<<endl;
            }
        }
        void Check_balance(){
            cout<<"Total Avalable balance: "<<balance<<endl;
        }
};

int main(){
    BankAcc Acc1(0);
    Acc1.deposit(1000);
    Acc1.deposit(1000);
    Acc1.withdraw(500);
    Acc1.Check_balance();
    return 0;
}



