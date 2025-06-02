#include <iostream>
#include <cmath>
using namespace std;

class account
{
protected:
    string name;
    int accNum;
    float balance;

public:
    account()
    {
        cin.ignore();
        cout << "Input Customer Name: ";
        getline(cin, name);
        cout << "Input Customer Account Number: ";
        cin >> accNum;
        cout << "Input Initial Balance: ";
        cin >> balance;
    }

    void output()
    {
        cout << "\nCustomer Name\t: " << name
             << "\nCustomer ID\t: " << accNum
             << "\nBalance\t\t: $" << balance << endl;
    }
};

class savings_account : public account
{
private:
    float rate, interest;
    int time;

public:
    savings_account() : account()
    {
        calculateInterest();
        output();
        withdraw();
        services();
    }

    void calculateInterest()
    {
        cout << "Enter interest rate (in %): ";
        cin >> rate;
        cout << "Enter time (in years): ";
        cin >> time;
        interest = balance * pow((1 + rate / 100), time) - balance;
        balance += interest;
        cout << "Interest added: $" << interest << endl;
    }

    void withdraw()
    {
        float amount;
        cout << "Enter withdrawal amount: ";
        cin >> amount;
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
        else
        {
            cout << "Insufficient balance.\n";
        }
    }

    void services()
    {
        cout << "Cheque Book Facility: Not Available" << endl;
    }
};

class current_account : public account
{
private:
    float minBalance = 500, serviceCharge = 50;

public:
    current_account() : account()
    {
        output();
        checkBalance();
        services();
    }

    void checkBalance()
    {
        if (balance < minBalance)
        {
            balance -= serviceCharge;
            cout << "Balance is below(500) minimum. $" << serviceCharge << " service charge imposed.\n";
        }
        else
        {
            cout << "Balance is sufficient.\n";
        }
    }

    void services()
    {
        cout << "Cheque Book Facility: Available" << endl;
    }
};

int main()
{
    cout << "........................Savings Account......................." << endl;
    savings_account sa;

    cout << "\n........................Current Account......................." << endl;
    current_account ca;

    return 0;
}
