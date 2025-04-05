#include <iostream>
#include <string>
using namespace std;

class BankAcc {
protected:
    int acc_no;
    int balance;

public:
    BankAcc(int aa, int bb) {
        acc_no = aa;
        balance = bb;
    }
};

class SavingAcc : public BankAcc {
public:
    SavingAcc(int a, int b) : BankAcc(a, b) {}

    void DisplaySaving() {
        cout << "Saving Acc_No: " << acc_no << ", Balance: " << balance << endl;
    }
};

class CurrentAc : public BankAcc {
public:
    CurrentAc(int a, int b) : BankAcc(a, b) {}

    void displayCurrent() {
        cout << "Current Acc_No: " << acc_no << ", Balance: " << balance << endl;
    }
};

int main() {
    SavingAcc s1(987654321, 10000);
    s1.DisplaySaving();

    CurrentAc c1(123456789, 5000);
    c1.displayCurrent();

    return 0;
}
