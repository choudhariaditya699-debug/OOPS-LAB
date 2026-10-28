
#include <iostream>
using namespace std;

class Ledger {
public:
    float balance;

    void getBalance() {
        cout << "Enter balance: ";
        cin >> balance;
    }
};

class SavingsAccount : public Ledger {
public:
    void showSavings() {
        cout << "Savings Account Balance: " << balance;
        cout << "\nInterest: " << balance * 0.05;
    }
};

class CheckingAccount : public Ledger {
public:
    void showChecking() {
        cout << "Checking Account Balance: " << balance;
        cout << "\nService Charge: 100";
    }
};

int main() {
    SavingsAccount s;
    CheckingAccount c;

    cout << "Savings Account\n";
    s.getBalance();
    s.showSavings();

    cout << "\n\nChecking Account\n";
    c.getBalance();
    c.showChecking();

    return 0;
}
