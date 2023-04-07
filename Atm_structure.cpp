#include <iostream>
using namespace std;

class Account
{
private:
    string name;

    string accNum;

    double balance;

    int pin;

public:
    Account(string name, string accNum, double balance, int pin)
    {
        this->name = name;
        this->accNum = accNum;
        this->balance = balance;
        this->pin = pin;
    }

    string getName() { return name; }
    string getAccNum() { return accNum; }
    double getBalance() { return balance; }
    int getPin() { return pin; }

    void setBalance(double balance) { this->balance = balance; }
};

class ATM
{
private:
    Account *account;

public:
    ATM(Account *account)
    {

        this->account = account;
    }

    bool verifyPin(int pin)
    {

        return (pin == account->getPin());
    }

    double checkBalance()
    {

        return account->getBalance();
    }

    bool deposit(double amount)
    {

        double newBalance = account->getBalance() + amount;

        account->setBalance(newBalance);

        return true;
    }

    bool withdraw(double amount)
    {

        double newBalance = account->getBalance() - amount;

        if (newBalance < 0)
        {

            return false;
        }
        else
        {

            account->setBalance(newBalance);

            return true;
        }
    }
};

int main()
{
    // Create account

    Account account("sanni kiran", "123456789", 1000.0, 1234);

    // Create ATM with account
    ATM atm(&account);

    // Enter PIN and verify
    int pin;
    cout << "Enter PIN: ";

    cin >> pin;
    if (!atm.verifyPin(pin))
    {

        cout << "Invalid PIN." << endl;

        return 0;
    }

    // Display menu and get user choice

    int choice;
    double amount;
    while (true)
    {
        cout << "\nMenu:\n";
        cout << "1. Check balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Quit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Current balance: $" << atm.checkBalance() << endl;
            break;
        case 2:
            cout << "Enter deposit amount: $";
            cin >> amount;
            if (atm.deposit(amount))
            {
                cout << "Deposit successful." << endl;
                cout << amount << " deposited to your account" << endl;
                cout<<" Total Balance : $"<<(1000+amount)<<endl;
            }
            else
            {
                cout << "Deposit failed." << endl;
            }
            break;
        case 3:
            cout << "Enter withdrawal amount: $";
            cin >> amount;
            if (atm.withdraw(amount))
            {
                cout << "Withdrawal successful." << endl;
                cout << amount << " debited from your account " << endl;
                cout << "Available Balance : $ " << (1000 - amount) << endl;
            }
            else
            {
                cout << "Withdrawal failed." << endl;
            }
            break;
        case 4:
            cout << "Thank you for using our ATM." << endl;
            return 0;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }

    return 0;
}