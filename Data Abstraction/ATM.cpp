// Implement an `ATM` system where users can check balance but not modify it directly.


#include <iostream>
using namespace std;

class ATM{
    private:
        double balance;
    public:
        ATM(double initialBalance){
            balance = initialBalance;
        }

        void checkBalance(){
            cout<<"Current Balance: "<<balance<<endl;
        }
        void withdraw(double amount){
            if(amount <= balance){
                balance -= amount;
                cout<<"Withdraw amount: "<<amount<<" Current balance: "<<balance<<endl;
            }
        }
};

int main(){
    ATM sbi(1000);
    sbi.checkBalance();
    sbi.withdraw(500);

    return 0;
}