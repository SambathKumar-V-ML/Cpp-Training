#include <iostream>
#include <vector>
using namespace std;

class account {
    int accno;
    int balance;
    string name;

public:
    // Constructor to initialize account details
    account(int no, int bal, string str) {
        accno = no;
        balance = bal;
        name = str;
    }

    // Function to display account details
    void showAccount() {
        cout << "----------------"<<endl;
	cout << "Account No: " << accno << endl;
        cout << "Remaining Balance: " << balance << endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "----------------"<<endl;
    }

    // Function to deposit amount into the account
    void deposit(int amt) {
        balance += amt;
        cout << "Total Balance: " << balance << endl;
    }

    // Function to withdraw amount from the account
    void withdraw(int amt) {
        if (amt <= balance) {
            balance -= amt;
            cout << "Transaction Successful" << endl;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    }

    // Function to return account number
    int getAccountNumber() const {
        return accno;
    }
};

class Bank {
    vector<account> accounts;  

public:
    void openAccount(int no, int bal, string str) {
        account newAccount(no, bal, str);
        accounts.push_back(newAccount);
        cout << "Account created successfully!" << endl;
    }

    account& getAccountByNumber(int no) {
        for (account& acc : accounts) {
            if (acc.getAccountNumber() == no) {
                return acc;
            }
        }
        cout<<"Account not found"<<endl; 
    }
};

int main() {
    Bank bank;

    // Open new accounts
    bank.openAccount(1, 1000, "Sambath");
    bank.openAccount(2, 2000, "Rajesh");

    account& acc = bank.getAccountByNumber(2);

    // Deposit into the account
    acc.deposit(1000);

    // Withdraw from the account
    acc.withdraw(500);

    // Show updated account details
    acc.showAccount();

    return 0;
}

