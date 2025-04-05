// #include <iostream>
// #include <string>
// using namespace std;

// class BankAccount {
// private:
//     // Hidden implementation details
//     string accountNumber;
//     double balance;
//     string pin;

//     bool validatePin(string inputPin) {
//         return pin == inputPin;
//     }

// public:
//     // Public interface
//     BankAccount(string accNum, double initialBalance, string p) {
//         accountNumber = accNum;
//         balance = initialBalance;
//         pin = p;
//     }
    
//     bool deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//             return true;
//         }
//         return false;
//     }
    
//     bool withdraw(double amount, string inputPin) {
//         if (validatePin(inputPin) && amount > 0 && amount <= balance) {
//             balance -= amount;
//             return true;
//         }
//         return false;
//     }
    
//     double getBalance(string inputPin) {
//         if (validatePin(inputPin)) {
//             return balance;
//         }
//         return -1;  // Indicates invalid PIN
//     }
// };

// int main() {
//     BankAccount account("12345", 1000.0, "4321");
    
//     account.deposit(500.0);
//     cout << "Balance after deposit: " << account.getBalance("4321") << endl;
    
//     account.withdraw(200.0, "4321");
//     cout << "Balance after withdrawal: " << account.getBalance("4321") << endl;
    
//     // Wrong PIN
//     cout << "Trying wrong PIN: " << account.getBalance("0000") << endl;
//     return 0;
// }





class BankAccount {
    private:
        double balance; // Hidden data
    
    public:
        void deposit(double amount) {
            balance += amount; // Implementation hidden
        }
        double getBalance() {
            return balance; // Accessor method
        }
    };
    