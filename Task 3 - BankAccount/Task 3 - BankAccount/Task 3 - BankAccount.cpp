#include <iostream>
#include <string>

using namespace std;

class BankAccount 
{
private:
    string clientName;
    string accountNumber;
    double balance;

public:
    BankAccount(string name, string accNumber, double initialBalance) 
    {
        clientName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }
    void displayAccount() 
    {
        cout << "Client Name: " << clientName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << " BGN" << endl;
    }
    void deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << " BGN" << endl;
        }
        else 
        {
            cout << "Invalid amount for deposit." << endl;
        }
    }
    void withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << " BGN" << endl;
        }
        else 
        {
            cout << "Invalid amount for withdrawal or insufficient funds." << endl;
        }
    }
};

int main() 
{
    BankAccount account("John Doe", "123456789", 1000.0);
    account.displayAccount();
    account.deposit(500.0);
    account.withdraw(200.0);
}