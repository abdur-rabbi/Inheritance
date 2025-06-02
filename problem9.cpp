/*we have learn that OPP is well suited for designing simulation programs. Using the techniques  and tricks learned so far design a program that would simulate a simple real world system familiar to me. create a bank ATM simulator without constructor and pointer.*/
#include <iostream>
using namespace std;

class ATM
{
private:
    string name;
    int accNumber;
    int pin;
    float balance;

public:
    void createAccount()
    {
        cin.ignore();
        cout << "Account holder name: ";
        getline(cin, name);
        cout << "Enter Account Number: ";
        cin >> accNumber;
        cout << "Set 4-digit PIN: ";
        cin >> pin;
        cout << "Enter Initial Deposit Amount: ";
        cin >> balance;
        cout << "Account created successfully!\n\n";
    }

    bool login()
    {
        int enteredAcc, enteredPin;
        cout << "Enter Account Number: ";
        cin >> enteredAcc;
        cout << "Enter PIN: ";
        cin >> enteredPin;

        if (enteredAcc == accNumber && enteredPin == pin)
        {
            cout << "Login Successful!\n\n";
            return true;
        }
        else
        {
            cout << "Invalid account number or PIN!\n";
            return false;
        }
    }

    void showBalance()
    {
        cout << "Current Balance: $" << balance << endl;
    }

    void deposit()
    {
        float amount;
        cout << "Enter deposit amount: ";
        cin >> amount;
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful. Updated Balance: $" << balance << endl;
        }
        else
        {
            cout << "Invalid amount.\n";
        }
    }

    void withdraw()
    {
        float amount;
        cout << "Enter withdrawal amount: ";
        cin >> amount;
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            cout << "Withdrawal successful. Updated Balance: $" << balance << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }
};

int main()
{
    ATM atm;
    int choice;
    bool isLoggedIn = false;

    atm.createAccount();

    // Login
    while (!isLoggedIn)
    {
        cout << "\nLogin to your account:\n";
        isLoggedIn = atm.login();
    }

    // ATM menu
    for (int i = 1; i <= 4; i++)
    {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            atm.showBalance();
            break;
        case 2:
            atm.deposit();
            break;
        case 3:
            atm.withdraw();
            break;
        case 4:
            cout << "Thank you for using our ATM. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}
