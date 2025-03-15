#include <iostream>
using namespace std;


class Account {
private:
    double balance;
    int accountNumber;

public:
   
    Account(double bal, int accNum) : balance(bal), accountNumber(accNum) {}


    friend class Bank;
};


class Bank {
public:
    double calculateInterest(Account& acc, double interestRate) {
        return acc.balance * (interestRate / 100);
    }

    void displayDetails(Account& acc, double interestRate) {
        double interest = calculateInterest(acc, interestRate);
        cout << "Account Balance: " << acc.balance << endl;
        cout << "Interest Earned: " << interest << endl;
    }
};

class SavingsAccount : public Account {
public:
    SavingsAccount(double bal, int accNum) : Account(bal, accNum) {}
};

int main() {
    double balance = 10000;
    int accountNumber = 12345;
    double interestRate = 5.0; 

    SavingsAccount account(balance, accountNumber);
    Bank bank;

    bank.displayDetails(account, interestRate);

    return 0;
}
