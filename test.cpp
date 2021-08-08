#include <bits/stdc++.h>
using namespace std;

class Account
{
public:
    string name, accountNumber;
    double balance;
    double checkingBalance(){
        return balance;
    }
};

class CurrentAccount : public Account {
public:
    void withDraw(double amouont){
        if(amouont > balance){
            cout << "[current account] Insufficient Balance to withdray" << endl;
        }
        else{
            balance -= amouont;
            cout << "[current account] " << amouont << " tk successfully withdrawn" << endl;
        }
    }
};


class SavingsAccount : public Account {
public:
    double calculateInterest(){
        double interest = (5.0 * balance) / 100;  /* 5% Interest calculation for current balance */
        return interest; 
    }
};

int main(){
    /* Current Accouont part */
    CurrentAccount crntAcc1;

    crntAcc1.name = "Alice";
    crntAcc1.accountNumber = "1101";
    crntAcc1.balance = 9000;

    cout << "[current account] Current balance " << crntAcc1.checkingBalance() << endl;

    crntAcc1.withDraw(8000);
    cout << "[current account] Current Balance " << crntAcc1.checkingBalance() << endl; 

    crntAcc1.withDraw(2000);
    cout << "[current account] Current Balance " << crntAcc1.checkingBalance() << endl;
    cout << endl;

    /* Savings account Part */
    SavingsAccount savingsAcc1;
    savingsAcc1.name = "Bob";
    savingsAcc1.accountNumber = "20112";
    savingsAcc1.balance = 900;

    cout << "[Saving Account] Current balance " << savingsAcc1.checkingBalance() << endl;
    cout << "[Saving Account] Current Interest " << savingsAcc1.calculateInterest() << endl;

    return 0;
}